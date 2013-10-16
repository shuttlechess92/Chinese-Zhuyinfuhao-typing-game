
#ifndef ZHUYIN_H
#define ZHUYIN_H

/*
**************************************************************************************

contains list of zhuyin

***************************************************************************************
*/



#include<string>
#include<iostream>
#include<stdio.h>
#include<time.h>
using namespace std;

// ----------------------------------------------------------
// Values for each syllable - for randomizer

// *note: deemed at the moment unnecessary
// ----------------------------------------------------------
/*
enum zhunum {b_, p_, m_, f_, d_, t_, n_, l_, g_, k_, h_, j_, q_, x_,
             zh_, ch_, sh_, r_, z_, c_, s_, y_, w_, yu_, a_, o_, e_,
             eh_, ai_, ei_, ao_, ou_, an_, en_, ang_, eng_, er};
*/
//-----------------------------------------------------------------------------------
//    Base class, zhuyin - all following letters inherit this
//------------------------------------------------------------------------------------

class zhuyin
{
public:
	zhuyin(){};
	zhuyin(string label, char button):identity(label), key(button), value(0) {};
	char selfchar();
	string getidentity();

	// homemade graphics
	virtual void display()=0; 
	
private:
	char key;
	string identity;
	int value;
};


void zhuyin::display()
{

}
char zhuyin::selfchar()
{
	return key;
}

string zhuyin::getidentity()
{
	return identity;
}



// The first class, b ---------------------------------------




class b: public zhuyin
{
public:
	b(string identity="b", char key ='1'): zhuyin(identity, key){};
	virtual void display();
private:

};

void b::display()
{
	cout<<"	     .."<<endl;
cout<<"	     ..."<<endl;
cout<<"	    ..."<<endl;
cout<<"	   ......................"<<endl;
cout<<"	 ........................."<<endl;
cout<<"	                       ..."<<endl;
cout<<"	                      ..."<<endl;
cout<<"	                     ..."<<endl;
cout<<"	                    ..."<<endl;
cout<<"	                   ..."<<endl;
cout<<"	                  ..."<<endl;
cout<<"	                 ..."<<endl;
cout<<"	                ..."<<endl;
cout<<"	             .  .."<<endl;
cout<<"	             ...."<<endl;
cout<<"	              .."<<endl;
}



//--------------------------------------------------

//      p
//--------------------------------------------------
class p: public zhuyin
{
public:
	p(string identity="p", char key ='q'): zhuyin(identity, key){};
	virtual void display();
private:

};


void p::display()
{
cout<<"             ."<<endl;
cout<<"             .."<<endl;
cout<<"            .."<<endl;
cout<<"           .."<<endl;
cout<<"           ............"<<endl;
cout<<"           ............."<<endl;
cout<<"            ..       .."<<endl;
cout<<"             ..      .."<<endl;
cout<<"              ..    .."<<endl;
cout<<"               .. .."<<endl;
cout<<"                 .."<<endl;
cout<<"                .. .."<<endl;
cout<<"               ..   .."<<endl;
cout<<"             ..       .."<<endl;
cout<<"            ..          .."<<endl;
cout<<"          ..              .."<<endl;
}

//--------------------------------------------------

//      m
//--------------------------------------------------
class m: public zhuyin
{
public:
	m(string identity="m", char key ='a'): zhuyin(identity, key){};
	virtual void display();
private:

};



void m::display()
{
	cout<<"	....................."<<endl;
	cout<<"	....................."<<endl;
cout<<"	...               ..."<<endl;
	cout<<"	...               ..."<<endl;
	cout<<"	...               ..."<<endl;
	cout<<"	...               ..."<<endl;
	cout<<"	...               ..."<<endl;
	cout<<"	...               ..."<<endl;
	cout<<"	...               ..."<<endl;
cout<<"	...               ..."<<endl;
	cout<<"	...               ..."<<endl;


}


//--------------------------------------------------

//      f
//--------------------------------------------------
class f: public zhuyin
{
public:
	f(string identity="f", char key ='z'): zhuyin(identity, key){};
	virtual void display();
private:

};

void f::display()
{
	cout<<"	....................."<<endl;
	cout<<"	......................"<<endl;
	cout<<"	....................."<<endl;
	cout<<"	..."<<endl;
	cout<<"	..."<<endl;
	cout<<"	..."<<endl;
	cout<<"	..."<<endl;
	cout<<"	..."<<endl;
	cout<<"	..."<<endl;
	cout<<"	..."<<endl;
	cout<<"	....................."<<endl;
	cout<<"	......................"<<endl;
	cout<<"	....................."<<endl;


}


//--------------------------------------------------

//      d
//--------------------------------------------------
class d: public zhuyin
{
public:
	d(string identity="d", char key ='2'): zhuyin(identity, key){};
	virtual void display();
private:

};

void d::display()
{
	cout<<"	     .."<<endl;
	cout<<"	     ..."<<endl;
	cout<<"	    ..."<<endl;
	cout<<"	   ......................"<<endl;
	cout<<"	 ........................."<<endl;
	cout<<"	        ...            ..."<<endl;
	cout<<"	       ...            ..."<<endl;
	cout<<"	      ...            ..."<<endl;
	cout<<"	     ...            ..."<<endl;
	cout<<"	    ...            ..."<<endl;
	cout<<"	   ...            ..."<<endl;
	cout<<"	  ...            ..."<<endl;
	cout<<"         ...            ..."<<endl;
	cout<<"        ..           .  .."<<endl;
	cout<<"       .             ...."<<endl;
	cout<<"	              .."<<endl;

}


///--------------------------------------------------

//      t
//--------------------------------------------------
class t: public zhuyin
{
public:
	t(string identity="t", char key ='w'): zhuyin(identity, key){};
	virtual void display();
private:

};

void t::display()
{
	cout<<"	           ..."<<endl;
	cout<<"	            ..."<<endl;
	cout<<"	            ..."<<endl;
	cout<<"	           ..."<<endl;
	cout<<"	          ..."<<endl;
	cout<<"	......................."<<endl;
	cout<<"	 ......................."<<endl;
	cout<<"	        ..."<<endl;
	cout<<"	       ..."<<endl;
	cout<<"	      ..."<<endl;
	cout<<"	     ...  .."<<endl;
	cout<<"	    ..    ..."<<endl;
	cout<<"	   ...   ....."<<endl;
	cout<<"	  ...  ...  ..."<<endl;
	cout<<"	 .......      .."<<endl;
	cout<<"	...."<<endl;


}


//--------------------------------------------------

//      n
//--------------------------------------------------
class n: public zhuyin
{
public:
	n(string identity="n", char key ='s'): zhuyin(identity, key){};
	virtual void display();
private:

};

 void n::display()
{
	cout<<"	 ................"<<endl;
	cout<<"	................."<<endl;
	cout<<"        	      ..."<<endl;
cout<<"                     ..."<<endl;
	cout<<"     		    ........"<<endl;
	cout<<"  	            .........."<<endl;
	cout<<"	                  ...."<<endl;
	cout<<"	                  ..."<<endl;
	cout<<"        	         ..."<<endl;
	cout<<"                	..."<<endl;
	cout<<"       	        .      ..."<<endl;
	cout<<"       	        ..    ..."<<endl;
	cout<<"      	         ... ..."<<endl;
	cout<<"       	          ....."<<endl;
	cout<<"       	           ..."<<endl;



}



//--------------------------------------------------

//      l
//--------------------------------------------------
class l: public zhuyin
{
public:
	l(string identity="l", char key ='x'): zhuyin(identity, key){};
	virtual void display();
private:

};

void l::display()
{

	cout<<"                   ."<<endl;
	cout<<"	     ..    .."<<endl;
	cout<<"	     ...   ..."<<endl;
	cout<<"	    ...   ..."<<endl;
	cout<<"	   ......................"<<endl;
	cout<<"	 ........................."<<endl;
	cout<<"	        ...            ..."<<endl;
	cout<<"	       ...            ..."<<endl;
	cout<<"	      ...            ..."<<endl;
cout<<"	     ...            ..."<<endl;
cout<<"	    ...            ..."<<endl;
cout<<"	   ...            ..."<<endl;
cout<<"	  ...            ..."<<endl;
cout<<"         ...            ..."<<endl;
	cout<<"        ..           .  .."<<endl;
	cout<<"       .             ...."<<endl;
	cout<<"	              .."<<endl;

}


//--------------------------------------------------

//      g
//--------------------------------------------------
class g: public zhuyin
{
public:
	g(string identity="g", char key ='e'): zhuyin(identity, key){};
	virtual void display();
private:

};

void g::display()
{
	cout<<"           .         ."<<endl;
	cout<<"          ...       ..."<<endl;
	cout<<"         ...       ..."<<endl;
	cout<<"        ...       ..."<<endl;
	cout<<"       ...       ..."<<endl;
	cout<<"      ...       ..."<<endl;
	cout<<"     ...       ..."<<endl;
	cout<<"     ...       ..."<<endl;
	cout<<"      ...       ..."<<endl;
cout<<"       ...       ..."<<endl;
cout<<"        ...       ..."<<endl;
cout<<"         ...       ..."<<endl;
cout<<"          ...       ..."<<endl;
cout<<"           .         ."<<endl;
}
//--------------------------------------------------

//      k
//--------------------------------------------------
class k: public zhuyin
{
public:
	k(string identity="k", char key ='d'): zhuyin(identity, key){};
	virtual void display();

private:

};

void k::display()
{
	cout<<"        ...................."<<endl;
	cout<<"       ...................."<<endl;
	cout<<"             ..."<<endl;
cout<<"	    ..."<<endl;
	cout<<"	   ......................"<<endl;
	cout<<"	 ........................."<<endl;
	cout<<"	                       ..."<<endl;
	cout<<"	                      ..."<<endl;
	cout<<"	                     ..."<<endl;
	cout<<"	                    ..."<<endl;
	cout<<"	                   ..."<<endl;
	cout<<"	                  ..."<<endl;
	cout<<"	                 ..."<<endl;
	cout<<"	                ..."<<endl;
	cout<<"	             .  .."<<endl;
	cout<<"	             ...."<<endl;
	cout<<"	              .."<<endl;
}

//--------------------------------------------------

//      h
//--------------------------------------------------
class h: public zhuyin
{
public:
	h(string identity="h", char key ='c'): zhuyin(identity, key){};
	virtual void display();
private:

};

void h::display()
{

	cout<<"		 ................."<<endl;
	cout<<"		.................."<<endl;
	cout<<"	        ..."<<endl;
	cout<<"	       ..."<<endl;
	cout<<"	      ..."<<endl;
	cout<<"	     ..."<<endl;
	cout<<"	    ..."<<endl;
	cout<<"	   ..."<<endl;
	cout<<"	  ..."<<endl;

}
//--------------------------------------------------

//      j
//--------------------------------------------------
class j: public zhuyin
{
public:
	j(string identity="j", char key ='r'): zhuyin(identity, key){};
	virtual void display();
private:

};


void j::display()
{
	cout<<"	                ..."<<endl;
	cout<<"	                ..."<<endl;
	cout<<"	      ...       ..."<<endl;
	cout<<"	      ...       ..."<<endl;
	cout<<"	      ...       ..."<<endl;
	cout<<"	      ...       ..."<<endl;
	cout<<"	      ............."<<endl;
	cout<<"	      ............."<<endl;
	cout<<"	                ..."<<endl;
	cout<<"	                ..."<<endl;
	cout<<"	                ..."<<endl;
	cout<<"	                ..."<<endl;
	cout<<"	                ..."<<endl;
	cout<<"	                ..."<<endl;
	cout<<"	                ..."<<endl;

}
//--------------------------------------------------

//      q
//--------------------------------------------------
class q: public zhuyin
{
public:
	q(string identity="q", char key ='f'): zhuyin(identity, key){};
	virtual void display();
private:

};


void q::display()
{
	cout<<"                   ..."<<endl;
	cout<<"                  ..."<<endl;
	cout<<"                 ..."<<endl;
	cout<<"                ..."<<endl;
	cout<<"               ..."<<endl;
	cout<<"              ..."<<endl;
	cout<<"             ..."<<endl;
	cout<<"             ..."<<endl;
	cout<<"              ..."<<endl;
	cout<<"               ..."<<endl;
	cout<<"                ..."<<endl;
	cout<<"                 ..."<<endl;
	cout<<"                  ..."<<endl;
	cout<<"                   ..."<<endl;
}
//--------------------------------------------------

//      x
//--------------------------------------------------
class x: public zhuyin
{
public:
	x(string identity="x", char key ='v'): zhuyin(identity, key){};
	void virtual display();
private:

};


void x::display()
{
	cout<<"	......................."<<endl;
	cout<<"	......................."<<endl;
	cout<<"	         ...."<<endl;
	cout<<"	         ...."<<endl;
	cout<<"	         ...."<<endl;
	cout<<"	         ...."<<endl;
	cout<<"	         ...."<<endl;
	cout<<"	         ...."<<endl;
	cout<<"	         ...."<<endl;
	cout<<"	         ...."<<endl;
	cout<<"	         ...."<<endl;
	cout<<"	         ...."<<endl;
	cout<<"	         ...."<<endl;
}
//--------------------------------------------------

//      zh
//--------------------------------------------------
class zh: public zhuyin
{
public:
	zh(string identity="zh", char key ='5'): zhuyin(identity, key){};
	virtual void display();
private:

};

void zh::display()
{
	cout<<"	            ..."<<endl;
	cout<<"	     ...    ...     ..."<<endl;
	cout<<"	     ...    ...     ..."<<endl;
	cout<<"	     ...    ...     ..."<<endl;
	cout<<"	     ...    ...     ..."<<endl;
	cout<<"	     .................."<<endl;
	cout<<"	     .................."<<endl;
	cout<<"	            ..."<<endl;
	cout<<"	            ..."<<endl;
	cout<<"	            ..."<<endl;
	cout<<"	     .................."<<endl;
	cout<<"	     .................."<<endl;
}
//--------------------------------------------------

//      ch
//--------------------------------------------------
class ch: public zhuyin
{
public:
	ch(string identity="ch", char key ='t'): zhuyin(identity, key){};
	virtual void display();
private:

};

void ch::display()
{
	cout<<"	           ."<<endl;
	cout<<"	           .."<<endl;
	cout<<"	           ..."<<endl;
	cout<<"	          ..."<<endl;
	cout<<"	         ... "<<endl;
	cout<<"	        ...   .."<<endl;
	cout<<"	       ...    ..."<<endl;
	cout<<"	      ...    ..."<<endl;
cout<<"	     ...    ..."<<endl;
cout<<"	    ...    ..."<<endl;
cout<<"	   ...    ...."<<endl;
cout<<"           ..    ....."<<endl;
cout<<"          ..    ... .."<<endl;
cout<<"               ...  .."<<endl;
cout<<"              ...   .."<<endl;
cout<<"             ...    .."<<endl;
cout<<"            .       .."<<endl;
cout<<"	            .."<<endl;
cout<<"	            .."<<endl;
cout<<"	            .."<<endl;
cout<<"	            .."<<endl;
cout<<"	            .."<<endl;
	cout<<"	            .."<<endl;

}

//--------------------------------------------------

//      sh
//--------------------------------------------------
class sh: public zhuyin
{
public:
	sh(string identity="sh", char key ='g'): zhuyin(identity, key){};
	virtual void display();
private:

};


void sh::display()
{
	cout<<"		 ................."<<endl;
	cout<<"		.................."<<endl;
	cout<<"	                       ..."<<endl;
	cout<<"	                       ..."<<endl;
	cout<<"	                       ..."<<endl;
	cout<<"		  ................"<<endl;
	cout<<"		 ................."<<endl;
	cout<<"	        ..."<<endl;
	cout<<"	       ..."<<endl;
	cout<<"	      ..."<<endl;
	cout<<"	     ..."<<endl;
	cout<<"	    ..."<<endl;
	cout<<"	   ..."<<endl;
	cout<<"	  ..."<<endl;

}

//--------------------------------------------------

//      r
//--------------------------------------------------
class r: public zhuyin
{
public:
	r(string identity="r", char key ='b'): zhuyin(identity, key){};
	virtual void display();
private:

};


void r::display()
{
cout<<"	....................."<<endl;
cout<<"	....................."<<endl;
cout<<"	...               ..."<<endl;
cout<<"	...               ..."<<endl;
cout<<"	...               ..."<<endl;
cout<<"	...     .         ..."<<endl;
cout<<"	...     ..        ..."<<endl;
cout<<"	...     ...       ..."<<endl;
cout<<"	...       ..      ..."<<endl;
cout<<"	...               ..."<<endl;
cout<<"	...               ..."<<endl;
cout<<"	...               ..."<<endl;
cout<<"	...               ..."<<endl;
cout<<"	...               ..."<<endl;
cout<<"	....................."<<endl;
cout<<"	....................."<<endl;

}
//--------------------------------------------------

//      z
//--------------------------------------------------
class z: public zhuyin
{
public:
	z(string identity="z", char key ='y'): zhuyin(identity, key){};
	virtual void display();
private:

};

void z::display()
{
	cout<<"	...................."<<endl;
	cout<<"	...................."<<endl;
cout<<"	      ...         .."<<endl;
cout<<"	      ...      . .."<<endl;
cout<<"	      ...      ..."<<endl;
cout<<"	      ...      .."<<endl;
cout<<"	      ..."<<endl;
	cout<<"	      ..."<<endl;
	cout<<"	      ..."<<endl;
	cout<<"	      ..."<<endl;
cout<<"	      ..."<<endl;
cout<<"	      ..."<<endl;
cout<<"	      ..."<<endl;
	cout<<"	      ..."<<endl;
}


//--------------------------------------------------

//      c
//--------------------------------------------------
class c: public zhuyin
{
public:
	c(string identity="c", char key ='h'): zhuyin(identity, key){};
	virtual void display();
private:

};

void c::display()
{
	cout<<"	            ."<<endl;
	cout<<"	           .."<<endl;
cout<<"	          ..."<<endl;
	cout<<"	         ..."<<endl;
	cout<<"	        ..."<<endl;
	cout<<"        ...................."<<endl;
	cout<<"       ...................."<<endl;
	cout<<"             ..."<<endl;
	cout<<"	    ..."<<endl;
	cout<<"	   ......................"<<endl;
	cout<<"	 ........................."<<endl;
	cout<<"	                       ..."<<endl;
	cout<<"	                      ..."<<endl;
	cout<<"	                     ..."<<endl;
	cout<<"	                    ..."<<endl;
	cout<<"	                   ..."<<endl;
	cout<<"	                  ..."<<endl;
	cout<<"	                 ..."<<endl;
	cout<<"	                ..."<<endl;
	cout<<"	                .."<<endl;
	cout<<"	               .."<<endl;
	cout<<"	               ."<<endl;

}


//--------------------------------------------------

//      s
//--------------------------------------------------
class s: public zhuyin
{
public:
	s(string identity="s", char key ='n'): zhuyin(identity, key){};
	virtual void display();
private:

};

void s::display()
{
	cout<<"	               ."<<endl;
	cout<<"	              .."<<endl;
	cout<<"	             ..."<<endl;
	cout<<"	            ..."<<endl;
	cout<<"	           ..."<<endl;
cout<<"	          ..."<<endl;
cout<<"	         ..."<<endl;
	cout<<"	        ..."<<endl;
	cout<<"	       ..."<<endl;
	cout<<"	      ...      ."<<endl;
	cout<<"	     ...       .."<<endl;
	cout<<"	    ...        ..."<<endl;
	cout<<"	   ................"<<endl;
	cout<<"	  .................."<<endl;
	cout<<"	                   .."<<endl;



}

//--------------------------------------------------

//      y
//--------------------------------------------------
class y: public zhuyin
{
public:
	y(string identity="y", char key ='u'): zhuyin(identity, key){};
	virtual void display();
private:

};


void y::display()

{
	cout<<"	....................."<<endl;
	cout<<"	....................."<<endl;

}
//--------------------------------------------------

//      w
//--------------------------------------------------
class w: public zhuyin
{
public:
	w(string identity="w", char key ='j'): zhuyin(identity, key){};
	virtual void display();
private:

};

void w::display()
{
	cout<<"	...                 ..."<<endl;
	cout<<"	 ...               ..."<<endl;
	cout<<"	   ...            ..."<<endl;
	cout<<"	    ...          ..."<<endl;
	cout<<"	     ...        ..."<<endl;
	cout<<"	      ...      ..."<<endl;
	cout<<"	       ...    ..."<<endl;
cout<<"	        ...  ..."<<endl;
cout<<"	         ......"<<endl;
cout<<"	          ...."<<endl;
cout<<"	           .."<<endl;
	cout<<"	         ......"<<endl;
	cout<<"	        ...  ..."<<endl;
	cout<<"	       ...    ..."<<endl;
	cout<<"	      ...      ..."<<endl;
	cout<<"	     ...        ..."<<endl;
	cout<<"	    ...          ..."<<endl;
	cout<<"	   ...            ..."<<endl;
	cout<<"	  ...              ..."<<endl;


}
//--------------------------------------------------

//      yu
//--------------------------------------------------
class yu: public zhuyin
{
public:
	yu(string identity="yu", char key ='m'): zhuyin(identity, key){};
	virtual void display();
private:

};

void yu::display()

{
	cout<<"	...              ..."<<endl;
	cout<<"	...              ..."<<endl;
	cout<<"	...              ..."<<endl;
	cout<<"	...              ..."<<endl;
	cout<<"	...              ..."<<endl;
cout<<"	...              ..."<<endl;
cout<<"	...              ..."<<endl;
cout<<"	...              ..."<<endl;
cout<<"	...              ..."<<endl;
cout<<"	...              ..."<<endl;
cout<<"	...              ..."<<endl;
cout<<"	...              ..."<<endl;
cout<<"	...................."<<endl;
	cout<<"	...................."<<endl;

}


//--------------------------------------------------

//      a
//--------------------------------------------------
class a: public zhuyin
{
public:
	a(string identity="a", char key ='8'): zhuyin(identity, key){};
	virtual void display();
private:

};

void a::display()

{
	cout<<"	...                 ..."<<endl;
	cout<<"	 ...               ..."<<endl;
	cout<<"	   ...            ..."<<endl;
	cout<<"	    ...          ..."<<endl;
	cout<<"	     ...        ..."<<endl;
	cout<<"	      ...      ..."<<endl;
	cout<<"	       ...    ..."<<endl;
	cout<<"	        ...  ..."<<endl;
	cout<<"	         ......"<<endl;
	cout<<"	          ...."<<endl;
	cout<<"                   .."<<endl;
	cout<<"                   .."<<endl;
	cout<<"                   .."<<endl;
	cout<<"                   .."<<endl;
cout<<"                   .."<<endl;
cout<<"                   .."<<endl;
cout<<"                   .."<<endl;
	cout<<"                   .."<<endl;

}
//--------------------------------------------------

//      o
//--------------------------------------------------
class o: public zhuyin
{
public:
	o(string identity="o", char key ='i'): zhuyin(identity, key){};
	virtual void display();
private:

};

void o::display()
{
	cout<<"	......................"<<endl;
	cout<<"	......................"<<endl;
	cout<<"	         ..."<<endl;
	cout<<"	     ......."<<endl;
cout<<"	    ... "<<endl;
cout<<"	   ..."<<endl;
cout<<"	   ...         ..."<<endl;
cout<<"	    ...      ...."<<endl;
cout<<"	     ..........."<<endl;
cout<<"	       ........"<<endl;
	cout<<"	         ....."<<endl;

}
//--------------------------------------------------

//      e
//--------------------------------------------------
class e: public zhuyin
{
public:
	e(string identity="e", char key ='k'): zhuyin(identity, key){};
	virtual void display();
private:

};

void e::display()
{
	cout<<"                 ..."<<endl;
	cout<<"                 ..."<<endl;
	cout<<"                 ..."<<endl;
	cout<<"	......................"<<endl;
	cout<<"	......................"<<endl;
	cout<<"	         ..."<<endl;
	cout<<"	     ......."<<endl;
cout<<"	    ... "<<endl;
cout<<"	   ..."<<endl;
cout<<"	   ...         ..."<<endl;
cout<<"	    ...      ...."<<endl;
cout<<"	     ..........."<<endl;
cout<<"	       ........"<<endl;
	cout<<"	         ....."<<endl;
}

//--------------------------------------------------

//      eh
//--------------------------------------------------
class eh: public zhuyin
{
public:
	eh(string identity="eh", char key =','): zhuyin(identity, key){};
	virtual void display();
private:

};

void eh::display()
{
	cout<<"	    ...      ..."<<endl;
	cout<<"	    ...      ..."<<endl;
	cout<<"	    ...      ..."<<endl;
cout<<"	...................."<<endl;
cout<<"	...................."<<endl;
cout<<"	    ...      ..."<<endl;
cout<<"	    ...      ..."<<endl;
cout<<"	    ...      ..."<<endl;
cout<<"	    ...      ..."<<endl;
cout<<"	    ...      .."<<endl;
cout<<"	    ..."<<endl;
cout<<"	    ..."<<endl;
cout<<"	    .............."<<endl;

}


//--------------------------------------------------

//      ai
//--------------------------------------------------
class ai: public zhuyin
{
public:
	ai(string identity="ai", char key ='9'): zhuyin(identity, key){};
	virtual void display();
private:

};

void ai::display()
{
	cout<<"               ........................."<<endl;
	cout<<"	      ........................."<<endl;
	cout<<"	     ...   ..."<<endl;
	cout<<"	    ...   ..."<<endl;
	cout<<"	   ......................"<<endl;
cout<<"	 ........................."<<endl;
cout<<"	        ...            ..."<<endl;
cout<<"	       ...            ..."<<endl;
cout<<"	      ...            ..."<<endl;
cout<<"	     ...            ..."<<endl;
cout<<"	    ...            ..."<<endl;
cout<<"	   ...            ..."<<endl;
cout<<"	  ...            ..."<<endl;
cout<<"         ...            ..."<<endl;
cout<<"        ..             ..."<<endl;
cout<<"       .              ..."<<endl;
cout<<"	              .."<<endl;
	cout<<"                      ."<<endl;

}
//--------------------------------------------------

//      ei
//--------------------------------------------------
class ei: public zhuyin
{
public:
	ei(string identity="ei", char key ='o'): zhuyin(identity, key){};
	virtual void display();
private:

};

void ei::display()
{
	cout<<"	    .........."<<endl;
	cout<<"	     .........."<<endl;
	cout<<"	             ..."<<endl;
	cout<<"	              ..."<<endl;
	cout<<"	               ..."<<endl;
	cout<<"	                ..."<<endl;
	cout<<"	                 ..."<<endl;
	cout<<"	                  ..."<<endl;
	cout<<"	                   ..."<<endl;
	cout<<"	                    ..."<<endl;

}

//--------------------------------------------------

//      ao
//--------------------------------------------------
class ao: public zhuyin
{
public:
	ao(string identity="ao", char key ='l'): zhuyin(identity, key){};
	virtual void display();
private:

};

void ao::display()
{
	cout<<"              ..          .."<<endl;
	cout<<"             ..          .."<<endl;
	cout<<"            ..          .."<<endl;
	cout<<"           ..          .."<<endl;
	cout<<"          .............."<<endl;
	cout<<"         ..............."<<endl;
	cout<<"                    ..."<<endl;
	cout<<"                   ..."<<endl;
	cout<<"                  ..."<<endl;
cout<<"                 ...     ."<<endl;
cout<<"                ...      .."<<endl;
cout<<"               ............."<<endl;
cout<<"              ..............."<<endl;
cout<<"                             ."<<endl;


}
//--------------------------------------------------

//      ou
//--------------------------------------------------
class ou: public zhuyin
{
public:
	ou(string identity="ou", char key ='.'): zhuyin(identity, key){};
	virtual void display();
private:

};

void ou::display()
{
	cout<<"           ............"<<endl;
cout<<"           ............."<<endl;
cout<<"            ..       .."<<endl;
cout<<"             ..      .."<<endl;
cout<<"              ..    .."<<endl;
cout<<"               .. .."<<endl;
cout<<"                 .."<<endl;
cout<<"                .. .."<<endl;
cout<<"               ..   .."<<endl;
cout<<"             ..       .."<<endl;
cout<<"            ..          .."<<endl;
cout<<"          ..              .."<<endl;

}
//--------------------------------------------------

//      an
//--------------------------------------------------
class an: public zhuyin
{
public:
	an(string identity="an", char key ='0'): zhuyin(identity, key){};
	virtual void display();
private:

};

void an::display()
{
cout<<"	       ....................."<<endl;
cout<<"	      ....................."<<endl;
cout<<"	     ...          ..."<<endl;
cout<<"	    ...          ..."<<endl;
cout<<"	   ......................"<<endl;
cout<<"	  ........................"<<endl;
cout<<"	                       ..."<<endl;
cout<<"	                      ..."<<endl;
cout<<"	                     ..."<<endl;
cout<<"	                    ..."<<endl;
cout<<"	                   ..."<<endl;
cout<<"	                  ..."<<endl;
cout<<"	                 ..."<<endl;
cout<<"	                ..."<<endl;
cout<<"	               ..."<<endl;
cout<<"	              ..."<<endl;
cout<<"	              .."<<endl;
cout<<"	              ."<<endl;

}
//--------------------------------------------------

//      en
//--------------------------------------------------
class en: public zhuyin
{
public:
	en(string identity="en", char key ='p'): zhuyin(identity, key){};
	virtual void display();
private:

};

void en::display()
{
	cout<<"	..."<<endl;
	cout<<"	..."<<endl;
	cout<<"	..."<<endl;
	cout<<"	..."<<endl;
	cout<<"	..."<<endl;
	cout<<"	.............."<<endl;
	cout<<"	.............."<<endl;
	cout<<"	           ..."<<endl;
	cout<<"	           ..."<<endl;
cout<<"	           ..."<<endl;
cout<<"	           ..."<<endl;
cout<<"	           ..."<<endl;
cout<<"	           ..."<<endl;
	cout<<"	           ..."<<endl;
}
//--------------------------------------------------

//      ang
//--------------------------------------------------
class ang: public zhuyin
{
public:
	ang(string identity="ang", char key =';'): zhuyin(identity, key){};
	virtual void display();
private:

};

void ang::display()
{
	cout<<"                  ..."<<endl;
	cout<<"                  ..."<<endl;
	cout<<"                  ..."<<endl;
	cout<<"                  ..."<<endl;
	cout<<"	   ..................."<<endl;
	cout<<"           .................."<<endl;
	cout<<"	        ......"<<endl;
	cout<<"	       ...  ... "<<endl;
	cout<<"	      ...    ..."<<endl;
	cout<<"	     ...      ..."<<endl;
	cout<<"	    ...        ... "<<endl;
	cout<<"	   ...          ... "<<endl;
	cout<<"	  ...            ..."<<endl;
	cout<<"         ...              ..."<<endl;
	cout<<"        ..                  ........"<<endl;
	cout<<"       .                     ........"<<endl;


}
//--------------------------------------------------

//      eng
//--------------------------------------------------
class eng: public zhuyin
{
public:
	eng(string identity="eng", char key ='/'): zhuyin(identity, key){};
	virtual void display();
private:

};

void eng::display()
{
	cout<<"	               ."<<endl;
	cout<<"	              .."<<endl;
	cout<<"	             ..."<<endl;
	cout<<"	            ..."<<endl;
	cout<<"	           ..."<<endl;
	cout<<"	          ..."<<endl;
	cout<<"	         ..."<<endl;
	cout<<"	        ..."<<endl;
	cout<<"	       ..."<<endl;
	cout<<"	      ...  "<<endl;
	cout<<"	     ... "<<endl;
	cout<<"	    ..."<<endl;
	cout<<"	   ................"<<endl;
	cout<<"	  .................."<<endl;

}
//--------------------------------------------------

//      er
//--------------------------------------------------
class er: public zhuyin
{
public:
	er(string identity="er", char key ='-'): zhuyin(identity, key){};
	virtual void display();
private:

};

void er::display()
{
	cout<<"	    ...       ..."<<endl;
	cout<<"	    ...       ..."<<endl;
	cout<<"	    ...       ..."<<endl;
	cout<<"	    ...       ..."<<endl;
	cout<<"	    ...       ..."<<endl;
	cout<<"	    ...       ..."<<endl;
	cout<<"	    ...       ..."<<endl;
	cout<<"	    ...       ..."<<endl;
cout<<"	    ...       ..."<<endl;
cout<<"	    ...       ..."<<endl;
cout<<"	    ...       ..."<<endl;
cout<<"	    ...       ...         ."<<endl;
cout<<"	   ...        ...        .."<<endl;
	cout<<"	  ...         ............."<<endl;
	cout<<"	 ..            ..........."<<endl;

}


#endif
