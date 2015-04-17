#include"nlib.h"
#include"math_nishi.h"
#include<Eigen/Dense>  // Eigen/Core, Geometry, LU, Cholesky, SVD, QR and Eigen values

using namespace Eigen;

float dihedral_4(Vector3f,Vector3f,Vector3f,Vector3f);

int dihedralnishi( Inp_nishi inp1 ){
  cout<<"Program dihedralnishi( inp1 ) starts!!!\n";
	
  cout<<"input file name = "<<inp1.filename <<endl;

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
