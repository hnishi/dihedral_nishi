#include"nlib.h"

using namespace std;

int dihedralnishi( Inp_nishi );  // (written in dihedralnishi.cpp)


int main(int argc, char *argv[]){
  cout<<"Version info. dihedral_nishi v1.0.3 \n";
// ##################### ARGUMENT HANDLING ##########################
// argv[1]: input file
  if( argv[1]==NULL ){
    puts("No ARGUMEMTS");
    puts("USAGE: ./a.out (input parameter file) ");
    return 1;
  }
  cout<<"Your input files: "<<argv[1]<<endl;

// INPUT_PARAMETERS
  Inp_nishi inp1( argv[1] );
  
// DO dihedralnishi
  dihedralnishi(inp1);

// END
	cout<<"\nit took "<<(float)clock()/CLOCKS_PER_SEC<<" sec of CPU to execute this program"<<endl;
	return 0;
}
