#include"nlib.h"

using namespace std;

int dihedralnishi( Inp_nishi );  // (written in dihedralnishi.cpp)


int main(int argc, char *argv[]){
  cout<<"Version info. nlib v1.1.0 \n";
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
  
  dihedralnishi(inp1);

// CHECK OF pdb_nishi
	//calc();  // nothing occur
	//pdb_nishi pdb1("../samp/4wfi_cano.pdb");
	//pdb_nishi pdb1("../samp/1IGT.pdb");
	//cout<<"search_n resi 3: " << pdb1.search_n(' ', 3) <<endl;
	//pdb_nishi pdb1("3vg9_all_cut.pdb");
	//pdb1.center_r();
	//cout<<"comx_r[0] "<<pdb1.comx_r[0]<<endl;

	//pdb1.write_pdb("zzz.pdb");
	//pdb1.disp_line(pdb1.total_atom);
/*	cout<<"test, rnum[5] = "<<pdb1.rnum[5]<<endl;
	cout<<"TOTAL ATOM = "<<pdb1.rnum.size()<<endl;
	cout<<"TOTAL RESIDUE = "<<pdb1.resi_mark.size()<<endl;
	cout<<"final internal num. = "<<pdb1.resi_mark[pdb1.resi_mark.size()-1]<<endl;
*/	//for(unsigned int i=0;i<pdb1.resi_mark.size();i++){
	/*for(int i=pdb1.search_n(' ', 3)-1;i<pdb1.search_n(' ', 4)+1;i++){
		//pdb1.disp_line(pdb1.resi_mark[i]);
		pdb1.disp_line(i);
	}*/

// CHECK OF tra_nishi
	//tra_nishi tra1(inp1.read("CODNAME").c_str(),inp1.read("REFPDBNAME").c_str(),inp1.read("SELECTATOM").c_str());
	//tra_nishi tra1("../samp/md_pra.cod","../samp/pra.pdb","protein");
	//tra_nishi tra1("../samp/for_rmsd/traj/md_small.crd","../samp/for_rmsd/traj/crystal_1st.pdb", "mainchain");
	//tra_nishi tra1("../samp/for_rmsd/traj/md_small.crd","../samp/for_rmsd/traj/crystal_1st.pdb");
	//tra_nishi tra1("samp/md_npt_10.cod","samp/10_min3.pdb",10);
	//tra_nishi tra1("samp/md_npt_10.cod","samp/md0.out.pdb",1);
	//cout<<"TOTAL STEP = "<<tra1.total_step<<endl;
	//for(unsigned int i=0;i<tra1.total_step;i++){
	//for(unsigned int i=tra1.total_step-1;i<tra1.total_step;i++){
		//cout<<tra1.length_x[i]<<endl;;
		//tra1.disp_line(i);
	//}
	//tra1.pdb1->write_pdb("xxx.pdb");
	//tra1.write_step(inp1.read("OUTPDBNAME").c_str(),tra1.total_step);
	//tra1.write_step("md.pdb", 0);
	//tra1.disp_line(tra1.total_step-1);
	//tra1.write_cod("zzz.pdb",1);
	//tra1.write_cod("zzz_100koma.pdb",1);
	//tra1.write_step("10_npt_43000.pdb",42);
	//tra1.fix_cod_npt();
	//tra1.fix_cod(77.63074,80.07944,158.1261);  // for md_pra.cod and pra.pdb
	//tra1.write_cod("zzz.pdb",1);
	//pdb_nishi pdb2("seg.pdb");
	//pdb2.fix_step("seg_out.pdb",77.63074,80.07944,158.1261);
// CHECK OF Tra_ana
/*	Tra_ana ana1("samp/md_npt_10.cod","samp/10_min3.pdb",10,'B','B',200,210);
	cout<<"start from "<<ana1.intra_sta<<endl;
	cout<<"end at "<<ana1.intra_end<<endl;
	ana1.pdb1->disp_line(ana1.intra_sta);
	ana1.pdb1->disp_line(ana1.intra_end);
*/// CHECK OF Cent_nishi
	//Cent_nishi cent1("samp/10_min3.pdb");
	//cout<<"cent1.comx_r[0]= "<<cent1.comx_r[0]<<endl;
// CHECK OF Fix_cod
	//Fix_cod fix1("samp/md_pra.cod","samp/pra.pdb",10,77.63074,80.07944,158.1261);
	//fix1.write_cod("yyy_all.pdb",1);
	//fix1.write_step("yyy.pdb",0);
// END
	cout<<"\nit took "<<(float)clock()/CLOCKS_PER_SEC<<" sec of CPU to execute this program"<<endl;
	return 0;
}
