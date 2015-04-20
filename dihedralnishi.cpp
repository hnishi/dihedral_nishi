#include"nlib.h"
#include"math_nishi.h"
#include<Eigen/Dense>  // Eigen/Core, Geometry, LU, Cholesky, SVD, QR and Eigen values

using namespace Eigen;

float dihedral_4(Vector3f,Vector3f,Vector3f,Vector3f);

int dihedralnishi( Inp_nishi inp1 ){
  cout<<"Program dihedralnishi( inp1 ) starts!!!\n";
  cout<<"input file name = "<<inp1.filename <<endl;

// ############# READ PARAMETERS ########################################
/* (1) parameter settings
 * 
 */
  cout<<endl<<"--- READING PARAMETERS --- \n";
  string codname = inp1.read("COD1");
  string pdbname = inp1.read("REFPDBNAME");
  string selatom = inp1.read("SELATOM");
  int stride = atoi(inp1.read("STRIDE").c_str());
  int startframe = atoi( inp1.read("STARTFRAME").c_str() ) - 1 ;
  if(stride <= 0){
    return -1;
  }

// ############# LOAD COD FILES ########################################
/* (2) load trajectories by tra_nishi
 * 
 */
  cout<<"loading\n"<<codname<<" and "<<pdbname<<endl;
  tra_nishi* tra1;
  tra1 = new tra_nishi(codname.c_str(), pdbname.c_str(), stride, selatom);
  cout<<"TOTAL FRAME = "<<tra1->total_step<<endl;
  cout<<"TOTAL ATOM = "<<tra1->pdb1->total_atom<<endl;
  cout<<"TOTAL SELECTED ATOM = "<<tra1->total_sel<<endl;
  //unsigned int frame = tra1->total_step;

  /*pdb_nishi* pdb1;
  pdb1 = new pdb_nishi(pdbname.c_str());
  cout<<"TOTAL ATOM = "<<pdb1->total_atom<<endl;
*/

/* (2) setting of region
 *     from intra_start to intra_end (internal number of atom)
 */
  //cout<<endl<<"REPORT> (2) specify the region \n";
  cout<<endl<<"--- RESIDUE RANGE --- \n";
  char startchain = inp1.read("STARTCHAIN").c_str()[0];
  //char endchain = inp1.read("ENDCHAIN").c_str()[0];
  int startres = atoi(inp1.read("STARTRES").c_str());
  //int endres = atoi(inp1.read("ENDRES").c_str());
/*  int intra_start, intra_end;
  intra_start = tra1->pdb1->search_n( startchain , startres );
  intra_end = tra1->pdb1->search_n_end( endchain , endres );
  //cout<<"intra_start = "<<intra_start<<endl;
  //cout<<"intra_end = "<<intra_end<<endl;
  cout<<"unselected: ";tra1->pdb1->disp_line(intra_start-1);
  cout<<"  selected: ";tra1->pdb1->disp_line(intra_start);
  cout<<"  selected: ";cout<<"...\n";
  cout<<"  selected: ";tra1->pdb1->disp_line(intra_end);
  cout<<"unselected: ";tra1->pdb1->disp_line(intra_end+1);
*/

// ############# CALCULATE phi psi ########################################
/* (x) calculate phi psi
 * 
 */

 for( unsigned int n = startframe; n < tra1->total_step; n++){

 }
  Vector3f r1, r2, r3, r4; // initial value is (1, 0, 0)
  //vec1 << 1.0, 1.0, 1.0;
  r1 << 12.875,1.334,-17.76; 
  r2 << 11.472,1.216,-15.718;  
  r3 << 10.363,0.806,-14.818;  
  r4 << 8.968,1.319,-15.257 ;

  float dih = dihedral_4(r1,r2,r3,r4);

  cout<<"dih = "<<dih<<endl;

  return 0;
}

float dihedral_4(Vector3f r1,Vector3f r2,Vector3f r3,Vector3f r4){
  Vector3f r12 = r2-r1, r23 = r3-r2, r34 = r4-r3;
  float sin = r12.dot(r23.cross(r34)) * r12.norm() / r12.cross(r23).norm() / r23.cross(r34).norm();
  float cos = r12.cross(r23).dot(r23.cross(r34)) / r12.cross(r23).norm() / r23.cross(r34).norm();
  float sign = sin / fabs(sin); //sign ( + or - ) of sin
  float t = sign * acos(cos); //torsion anglr t (tau) (rad)
  t = t * 180 / PI; //rad -> degree

  return t;
}
