#ifndef GAME_ONE
#define GAME_ONE

#include "zhuyin.h"
#include "clear_screen.h"




class score
{
public:
	score(double total): maximum(total), points(0){};
	void addscore(int add);
	double getscore();
	double getpercentage();


private:
	double maximum;
	double points;
};

void score::addscore(int add)
{
	points+=add;
}

double score::getscore()
{
	return points;
}

double score::getpercentage()
{
	return points/maximum*100;
}



//-------------------------------------------------------------------
// implementation of the first, basic, random output
// ------------------------------------------------------------------



int Game_one()

{


		//---------------------------------
	//for the clear screen

	HANDLE hStdout;
	hStdout= GetStdHandle(STD_OUTPUT_HANDLE);

	//-------------------------------------
	/*
	b b;
	p p;
	m m;
	f f;
	d d;
	t t;
	n n;
	l l;
	g g;
	k k;
	h h;
	j j;
	q q;
	x x;
	zh zh;
	ch ch;
	sh sh;
	r r;
	z z;
	c c;
	s s;
	y y;
	w w;
	yu yu;
	a a;
	o o; 
	e e;
	eh eh;
	ai ai;
	ei ei;
	ao ao;
	ou ou;
	an an;
	en en;
	ang ang;
	eng eng;
	er er;*/

	// ------------------
	// initialize the list
	// -------------------
	zhuyin* list[37] = {new b, new p, new m, new f, new d, new t, new n, new l, new g, new k, new h,
	                     new j, new q, new x, new zh, new ch, new sh, new r, new z, new c, new s, new y,
	                    new w, new yu, new a, new o, new e, new eh, new ai, new ei, new ao, new ou, new an,
	                    new en, new ang, new eng, new er };
	/*list[0]=b;
	list[1]=p;
	list[2]=m;
	list[3]=f;
	list[4]=d;
	list[5]=t;
	list[6]=n;
	list[7]=l;
	list[8]=g;
	list[9]=k;
	list[10]=h;
	list[11]=j;
	list[12]=q;
	list[13]=x;
	list[14]=zh;
	list[15]=ch;
	list[16]=sh;
	list[17]=r;
	list[18]=z;
	list[19]=c;
	list[20]=s;
	list[21]=y;
	list[22]=w;
	list[23]=yu;
	list[24]=a;
	list[25]=o;
	list[26]=e;
	list[27]=eh;
	list[28]=ai;
	list[29]=ei;
	list[30]=ao;
	list[31]=ou;
	list[32]=an;
	list[33]=en;
	list[34]=ang;
	list[35]=eng;
	list[36]=er;*/
	//-------- end of initialization--------------------

	int num_zhuyin=37;


	// -------------------------------------------
	//               generate a random index
	//----------------------------------------------
	srand ( time(NULL));

	//--------------------------------------------
	//keep track of score
	//-----------------------------------
	score tracker(num_zhuyin);
	bool wrong=false;
	
	int index;
	for(int i=0; i<num_zhuyin; i++)
	{
	index = rand()%num_zhuyin;
	
		if (wrong)
		{
			cout<<endl<<endl<<endl<<endl<<"wrong!"<<endl;
			wrong=false;
		}
		list[index]->display();
	  char answer;
	  cin>> answer;

	  //if(answer!=list[index]->selfchar())
	if(answer!=list[index]->selfchar())
	{
		wrong=true;
	}
	else
		tracker.addscore(1);

	cls(hStdout);
	//cout<< string(99, '\n');
	}

	cout<<tracker.getscore()<<endl;
	
	// --------------------------------------
	
	// deallocate dynamic array of zhuyin
	// ----------------------------------------

	
	for (int i=0; i<num_zhuyin; i++)
	{
		delete(list[i]);

		//cout<< "deleted: "<< i<<endl;
	}


	return 1;
}

#endif
