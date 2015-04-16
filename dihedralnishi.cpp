#include"nlib.h"
#include"math_nishi.h"
#include<Eigen/Dense>  // Eigen/Core, Geometry, LU, Cholesky, SVD, QR and Eigen values

using namespace Eigen;


int dihedralnishi( Inp_nishi inp1 ){
  cout<<"Program dihedralnishi( inp1 ) starts!!!\n";
	
  cout<<"input file name = "<<inp1.filename <<endl;

  Vector3f vec1; // initial value is (1, 0, 0)
  //vec1 << 1.0f, 1.0f, 1.0f;
  vec1 << 1.0, 1.0, 1.0;
  cout<<" vec1.norm() = "<<vec1.norm()<<endl;

  //pdb_nishi pdb1(bfcod,bfpdb);
  return 0;
}
