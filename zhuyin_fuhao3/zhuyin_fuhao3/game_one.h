#ifndef GAME_ONE
#define GAME_ONE

#include "zhuyin.h"
#include "clear_screen.h"
#include <ctime>
#include "score.h"





//-------------------------------------------------------------------
// implementation of the first, basic, random output
// ------------------------------------------------------------------



int Game_one()

{
	

		//---------------------------------
	//for the clear screen

	HANDLE hStdout;
	hStdout= GetStdHandle(STD_OUTPUT_HANDLE);

	
	// ------------------
	// initialize the list
	// -------------------
	/*zhuyin* list[37] = {new b, new p, new m, new f, new d, new t, new n, new l, new g, new k, new h,
	                     new j, new q, new x, new zh, new ch, new sh, new r, new z, new c, new s, new y,
	                    new w, new yu, new a, new o, new e, new eh, new ai, new ei, new ao, new ou, new an,
	                    new en, new ang, new eng, new er };
	*/
	//-------- end of initialization--------------------


	
	//--------------------
	//  this is to practice the primaries

	//   2/21/2012    added sh and c to complete that row
	//    next to do: add tops. 
	//----------------------------------
	zhuyin* list[37] = {new m, new n, new k, new q, new w, new e, new ao, new ang, new sh, new c, new ch,
	                     new z, new x, new s, new r, new y, new j, new o, new g, new ei, new t,
						 new yu, new h, new l, new f, new eh, new ou, new eng, new en, new p,
						 //   ----------the top is the currently implemented zhuyin
						 /// ----------    below is random
						 new b, new d, new a,
	                    new ai, new an, new er, new zh };
	//-------- end of initialization--------------------


	int num_zhuyin=37;


	// -------------------------------------------
	//               generate a random index
	//----------------------------------------------
	srand ( time(NULL));

	//--------------------------------------------
	//keep track of score
	//-----------------------------------
	score tracker;
	time_t start;
	start = time(&start);
	//----------------------------
		// initialize the offset variable
		//-------------------------------
		int offset =0;
		
		//--------------------------------------
		// initialize the region counter
		//------------------------------------

		int region=1;

		//------------------------------------
	int index;
	//for(int i=0; i<37; i++)
	//while(true)
	double dif;

	//  initialize a way to recognize an incorrect input-----------------------
	bool correct=false;

	//----------------------------------------------------------------
	do
	{

		//---------------------------------
		// timer implementation (counts in seconds)
		// ---------------------------------
		time_t current;
		current = time(&current);
		 dif = difftime(current,start);
		/*if (time>=20)
		{
			break;

		} 
		*/
		 /* 
		if (tracker.getscore()/5>=region)
		{
		 
			offset+=4; // move to next column (region)

			region++;

		}
		*/
		

	 index = rand()%num_zhuyin+offset;
	 if (correct)
	 {

		 cout<<"                wrong!!"<<endl<<endl<<endl<<endl<<endl;
		 correct=false;
	 }
	 list[index]->display();
		//list[i]->display();
	  char answer;
	  cin>> answer;
	
	  if(answer==list[index]->selfchar())
		tracker.addscore(1);
	  else
		  correct=true;
	

	  tracker.addtotal();
	cls(hStdout);


	

	}
	while( dif <=60);

	cout<<tracker.getscore()<<endl;
	cout<< "you got "<<tracker.getincorrect()<<" wrong"<<endl;
	// --------------------------------------
	
	// deallocate dynamic array of zhuyin
	// ----------------------------------------

	
	for (int i=0; i<37; i++)
	{
		delete(list[i]);

		//cout<< "deleted: "<< i<<endl;
	}


	return 1;
}

#endif
