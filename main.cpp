#include<fstream.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>

int max1=0;
int max2=0;
int max3=0;
int max4=0;
int max5=0;

void menu();
void write();
void append();
void stu_rec();
void search();
void update();
void up_details(int);
void up_marks(int);
void toppers();
void cls_top();
void sub_top();
void failed();
void Delete();
void border();
void hic();
void report();
void result_card();

class xii
	{
	 public:
	 int reg;                             //Regis. No.
	 char na[20];                         //Name
	 int cls;                             //Class
	 char house[12];                      //House
	 char dob[20];                        //Date of Birth
	 int attd;                            //Attendance
	 int hgt;                             //Height
	 int wgt;                             //Weight
	 int m1,m2,m3,m4,m5;                  //Marks
	 char g[3];                           //Grade
	 int tot;                             //Total
	 float p;                             //Percentage

	 void input()
	  {


	   gotoxy(21,4); cout<<"**********DETAIL ENTRY*********";
	   gotoxy(11,6); cout<<"NAME    :";
	   gotoxy(11,7); cout<<"REG.No  :";
	   gotoxy(11,8); cout<<"CLASS   :";
	   gotoxy(11,9); cout<<"DOB     :";
	   gotoxy(11,10);cout<<"HOUSE   :";
	   gotoxy(45,6); cout<<"ATTENDANCE   :";
	   gotoxy(45,7); cout<<"HEIGHT       :";
	   gotoxy(45,8); cout<<"WEIGHT       :";

	   gotoxy(21,12);cout<<"+*********MARKS ENTRY***********+ ";
	   gotoxy(21,14);cout<<"| Sn. |     Sub.      |  Marks  | ";
	   gotoxy(21,15);cout<<"|~~~~~|~~~~~~~~~~~~~~~|~~~~~~~~~| ";
	   gotoxy(21,16);cout<<"| 1.  |   ENGLISH     |         | ";
	   gotoxy(21,17);cout<<"| 2.  |   BIOLOGY     |         | ";
	   gotoxy(21,18);cout<<"| 3.  |   PHYSICS     |         | ";
	   gotoxy(21,19);cout<<"| 4.  |   CHEMISTRY   |         | ";
	   gotoxy(21,20);cout<<"| 5.  |   COMPUTER    |         | ";

	   gotoxy(21,6); gets(na);
	   gotoxy(21,7); cin>>reg;
	   gotoxy(21,8); cin>>cls;
	   gotoxy(21,9); gets(dob);
	   gotoxy(21,10);gets(house);
	   gotoxy(60,6); cin>>attd;
	   gotoxy(60,7); cin>>hgt;
	   gotoxy(60,8); cin>>wgt;

	   gotoxy(46,16);cin>>m1;
	   gotoxy(46,17);cin>>m2;
	   gotoxy(46,18);cin>>m3;
	   gotoxy(46,19);cin>>m4;
	   gotoxy(46,20);cin>>m5;

	   tot=m1+m2+m3+m4+m5;
	   p=tot/5;

	   if(p>=95)
		strcpy(g,"A+");
	   if(p>=90&&p<95)
		strcpy(g,"A");
	   if(p>=80&&p<90)
		strcpy(g,"B+");
	   if(p>=70&&p<80)
		strcpy(g,"B");
	   if(p>=60&&p<70)
		strcpy(g,"C+");
	   if(p>=50&&p<60)
		strcpy(g,"C");
	   if(p>=40&&p<50)
		strcpy(g,"D");
	   if(p<40)
		strcpy(g,"E");
	   }

	 void out1()
	 {


	   gotoxy(21,4); cout<<"**********DETAIL DISPLAY*********";
	   gotoxy(11,6); cout<<"NAME    :";
	   gotoxy(11,7); cout<<"REG.No  :";
	   gotoxy(11,8); cout<<"CLASS   :";
	   gotoxy(11,9); cout<<"DOB     :";
	   gotoxy(11,10);cout<<"HOUSE   :";
	   gotoxy(43,6); cout<<"ATTENDANCE   :";
	   gotoxy(43,7); cout<<"HEIGHT       :";
	   gotoxy(43,8); cout<<"WEIGHT       :";

	   gotoxy(21,12);cout<<"+*********MARKS DISPLAY*********+ ";
	   gotoxy(21,14);cout<<"| Sn. |     Sub.      |  Marks  | ";
	   gotoxy(21,15);cout<<"|~~~~~|~~~~~~~~~~~~~~~|~~~~~~~~~| ";
	   gotoxy(21,16);cout<<"| 1.  |   ENGLISH     |         | ";
	   gotoxy(21,17);cout<<"| 2.  |   BIOLOGY     |         | ";
	   gotoxy(21,18);cout<<"| 3.  |   PHYSICS     |         | ";
	   gotoxy(21,19);cout<<"| 4.  |   CHEMISTRY   |         | ";
	   gotoxy(21,20);cout<<"| 5.  |   COMPUTER    |         | ";

	   gotoxy(21,6); puts(na);
	   gotoxy(21,7); cout<<reg;
	   gotoxy(21,8); cout<<cls;
	   gotoxy(21,9); puts(dob);
	   gotoxy(21,10);puts(house);
	   gotoxy(60,6); cout<<attd;
	   gotoxy(60,7); cout<<hgt;
	   gotoxy(60,8); cout<<wgt;

	   gotoxy(46,16);cout<<m1;
	   gotoxy(46,17);cout<<m2;
	   gotoxy(46,18);cout<<m3;
	   gotoxy(46,19);cout<<m4;
	   gotoxy(46,20);cout<<m5;

	   getch();
	  }

	 void out2(int &k)
	 {
	   gotoxy(12,k);cout<<reg;
	   gotoxy(21,k);puts(na);
	   gotoxy(45,k);cout<<attd;
	   gotoxy(54,k);puts(dob);
	   gotoxy(68,k);puts(house);
	   k++;
	 }

	 void out3(int &m)
	 {
	   gotoxy(12,m);cout<<reg;
	   gotoxy(21,m);cout<<na;
	   gotoxy(47,m);cout<<tot;
	   gotoxy(57,m);cout<<p;
	   gotoxy(66,m);cout<<g;
	   m++;
	 }

	 void out4()
	 {
	   gotoxy(10,6); cout<<reg;
	   gotoxy(36,6); puts(na);
	   gotoxy(69,6); cout<<cls;
	   gotoxy(23,10);cout<<attd;
	   gotoxy(34,10);puts(dob);
	   gotoxy(48,10);puts(house);
	   gotoxy(58,10);cout<<wgt;
	   gotoxy(67,10);cout<<hgt;
	   gotoxy(64,16);puts(g);
	   gotoxy(34,16);cout<<m1;
	   gotoxy(34,17);cout<<m2;
	   gotoxy(34,18);cout<<m3;
	   gotoxy(34,19);cout<<m4;
	   gotoxy(34,20);cout<<m5;
	   gotoxy(34,22);cout<<tot;
	   gotoxy(63,22);cout<<p;
	   }
	}s;
/*------------------------------------------------------------------------*
 |-------------------------------- MENU ----------------------------------|
 *------------------------------------------------------------------------*/

void menu()
{
 int choice;
   while(choice!=9)
   {
   border();
   gotoxy(24,4);cout<<"************MAIN_MENU***********";
   gotoxy(27,6); cout<<"+-------------------------+";
   gotoxy(27,7); cout<<"|1.  Create REPORT CARD   |";
   gotoxy(27,8); cout<<"|2.  ADD RECORDS(Append)  |";
   gotoxy(27,9); cout<<"|3.  RECORDS              |";
   gotoxy(27,10);cout<<"|4.  Search               |";
   gotoxy(27,11);cout<<"|5.  Update               |";
   gotoxy(27,12);cout<<"|6.  Toppers              |";
   gotoxy(27,13);cout<<"|7.  Failers              |";
   gotoxy(27,14);cout<<"|8.  Delete Records       |";
   gotoxy(27,15);cout<<"|9.  View Report Card     |";
   gotoxy(27,16);cout<<"|10. EXIT                 |";
   gotoxy(27,17);cout<<"+-------------------------+";
   gotoxy(27,20);cout<<"Enter your choice :";
		       cin>>choice;

     switch(choice)
   {
      case 1:
      write();
      break;

      case 2:
      append();
      break;

      case 3:
      stu_rec();
      break;

      case 4:
      search();
      break;

      case 5:
      update();
      break;

      case 6:
      toppers();
      break;

      case 7:
      failed();
      break;

      case 8:
      Delete();
      break;

      case 9:
      report();
      break;

      case 10:
      exit(0);

      default:
      gotoxy(34,21);cout<<"INVALID CHOICE !!!!! ";

     }
   }
 getch();
}




/*------------------------------------------------------------------------*
 |------------------------------- BORDER ---------------------------------|
 *------------------------------------------------------------------------*/
 void border()
 {

  clrscr();
  int i=1,j=1;

  for(;i<81;i+=2)
   {
    gotoxy(i,j);cout<<"/*";
    gotoxy(i,j+1);cout<<"~~";
    }
   i--;j++;

   for(;j<=23;++j)
    {
    gotoxy(i-1,j);cout<<"||";
    }

   for(;i>2;i-=2)
    {
    gotoxy(i-2,j);cout<<"/*";
    gotoxy(i-2,j+1);cout<<"~~";
    }
    j--;i--;

   for(;j>1;--j)
    {
    gotoxy(i,j);cout<<"||";
    }

 }

/*------------------------------------------------------------------------*
 |------------------------------- WRITE ----------------------------------|
 *------------------------------------------------------------------------*/
int i,n;

void write()
 {
  clrscr();
  fstream r;
  r.open("recrd.dat",ios::out|ios::binary);
  gotoxy(32,3);cout<<"*-------------*";
  gotoxy(32,4);cout<<"|-ADD RECORDS-|";
  gotoxy(32,5);cout<<"*-------------*";



  gotoxy(17,7);cout<<"Enter the No. of Records you want to ADD :";
  gotoxy(60,7);cin>>n;

  gotoxy(15,10);
  for(int i=11;i<60;++i)
  cout<<"=";

  gotoxy(30,13);cout<<"*-------------------------*";
  gotoxy(30,14);cout<<"|-INPUT SCREEN loading...-|";
  gotoxy(30,15);cout<<"*-------------------------*";

  gotoxy(55,21);cout<<"Press any key!!!";
  getch();

   for(i=0;i<n;i++)
  {
   border();

   s.input();

   gotoxy(60,22);cout<<"Record Added!!!";
   gotoxy(60,23);cout<<"~~~~~~~~~~~~~~~";
   getch();
   r.write((char*)&s,sizeof(s));
  }
 r.close();
 getch();
}
/*------------------------------------------------------------------------*
 |------------------------------- APPEND ---------------------------------|
 *------------------------------------------------------------------------*/
void append()
 {
  fstream r;
  r.open("recrd.dat",ios::app|ios::binary);

  clrscr();
  int k;
  gotoxy(32,3);cout<<"*-------------*";
  gotoxy(32,4);cout<<"|-ADD RECORDS-|";
  gotoxy(32,5);cout<<"*-------------*";

  gotoxy(17,7);cout<<"Enter the No. of Records you want to Add :";
  gotoxy(60,7);cin>>k;

  gotoxy(15,10);
  for(i=11;i<60;++i)
  cout<<"=";

  gotoxy(33,13);cout<<"*-----------*";
  gotoxy(33,14);cout<<"|-APPENDING-|";
  gotoxy(33,15);cout<<"*-----------*";

  gotoxy(55,21);cout<<"Press any key!!!";

  getch();
   for(i=0;i<k;i++)
  {
   border();

   s.input();
   gotoxy(60,22);cout<<"Record Added!!!";
   gotoxy(60,23);cout<<"~~~~~~~~~~~~~~~";
   r.write((char*)&s,sizeof(s));
  }
 n+=k;
 r.close();
 getch();
 }
/*------------------------------------------------------------------------*
 |------------------------------ RECORDS ---------------------------------|
 *------------------------------------------------------------------------*/

void stu_rec()
 {
   border();
   fstream r;
   r.open("recrd.dat",ios::in|ios::binary);
   gotoxy(32,3);cout<<"*-------------*";
   gotoxy(32,4);cout<<"|-- RECORDS --|";
   gotoxy(32,5);cout<<"*-------------*";

   gotoxy(8,7);cout<<"+--------------------------------------------------------------------|";
   gotoxy(8,8);cout<<"| Reg No. |        Name         | Attendance |    DOB    |   House   |";
   gotoxy(8,9);cout<<"+--------------------------------------------------------------------|";

   int k=10;
  while( r.read((char*)&s,sizeof(s)))
   {
    s.out2(k);
   }
  r.close();
  getch();
 }
/*------------------------------------------------------------------------*
 |------------------------------- SEARCH ---------------------------------|
 *------------------------------------------------------------------------*/
void search()
{
  fstream r;
  r.open("recrd.dat",ios::in|ios::binary);
  border();

 char name[20];
 int count=0;
  gotoxy(35,3);cout<<"*--------*";
  gotoxy(35,4);cout<<"|-SEARCH-|";
  gotoxy(35,5);cout<<"*--------*";

 gotoxy(20,7);cout<<"Enter the NAME to be searched :";
	     gets(name);

    while(r.read((char*)&s,sizeof(s)))
  {
   if(strcmpi(name,s.na)==0)
    {
     count=1;
     border();
     s.out1();
     break;
    }
   }

 if(count==0)
  {
   border();

   gotoxy(27,8) ;cout<<"*----------------------------*";
   gotoxy(27,9) ;cout<<"|          SORRY!!!          |";
   gotoxy(27,10);cout<<"| THE RECORD DOES NOT EXIST. |";
   gotoxy(27,11);cout<<"*----------------------------*";
  }
 r.close();
 getch();
}
/*------------------------------------------------------------------------*
 |-------------------------------- UPDATE --------------------------------|
 *------------------------------------------------------------------------*/
void update()
{
  fstream r;
  int count=0;
  int regis;
  int choice;
  border();
  gotoxy(36,4);cout<<"+------------+";
  gotoxy(36,5);cout<<"|-- UPDATE --|";
  gotoxy(36,6);cout<<"+------------+";
  gotoxy(26,7);cout<<"Enter the REGISTERATION No. :";
		cin>>regis;

  gotoxy(15,9); cout<<"******************************************************";
  gotoxy(36,11);cout<<"+------------+";
  gotoxy(36,12);cout<<"|1. Details  |";
  gotoxy(36,13);cout<<"|2. Marks    |";
  gotoxy(36,14);cout<<"+------------+";
  gotoxy(26,16);cout<<"Enter your Choice : ";
		 cin>>choice;

   switch(choice)
   {
    case 1:
    up_details(regis);
    break;

    case 2:
    up_marks(regis);
    break;

    default:
    cout<<"INVALID CHOICE!!!";
  }


 r.close();
}
/*------------------------------------------------------------------------*
 |--------------------------- UPDATE DETAILS -----------------------------|
 *------------------------------------------------------------------------*/
void up_details(int regis)
 {
  fstream r;
  int count=0;
  r.open("recrd.dat",ios::in|ios::out|ios::binary);
   while(!r.eof())
   {

    int pos=r.tellg();
    r.read((char*)&s,sizeof(s));
     if(regis==s.reg)
      {
       border();
	   count=1;
	   gotoxy(21,4); cout<<"**********UPDATE DETAIL**********";
	   gotoxy(11,6); cout<<"NAME    :";
	   gotoxy(11,7); cout<<"REG.No  :";
	   gotoxy(11,8); cout<<"CLASS   :";
	   gotoxy(11,9); cout<<"DOB     :";
	   gotoxy(11,10);cout<<"HOUSE   :";
	   gotoxy(43,6); cout<<"ATTENDANCE   :";
	   gotoxy(43,7); cout<<"HEIGHT       :";
	   gotoxy(43,8); cout<<"WEIGHT       :";


	   gotoxy(21,6); puts(s.na);
	   gotoxy(21,7); cout<<s.reg;
	   gotoxy(21,8); cout<<s.cls;
	   gotoxy(21,9); puts(s.dob);
	   gotoxy(21,10);gets(s.house);
	   gotoxy(60,6); cin>>s.attd;
	   gotoxy(60,7); cin>>s.hgt;
	   gotoxy(60,8); cin>>s.wgt;
	   gotoxy(60,19);cout<<"RECORD UPDATED!!!!";

	   r.seekp(pos);
	   r.write((char*)&s,sizeof(s));
	   break;
	}
     }

 if(count==0)
   {
   border();
   gotoxy(27,8) ;cout<<"*----------------------------*";
   gotoxy(27,9) ;cout<<"|          SORRY!!!          |";
   gotoxy(27,10);cout<<"| THE RECORD DOES NOT EXIST. |";
   gotoxy(27,11);cout<<"*----------------------------*";
   getch();
   }
 getch();
 r.close();
 }
/*------------------------------------------------------------------------*
 |---------------------------- UPDATE MARKS ------------------------------|
 *------------------------------------------------------------------------*/
void up_marks(int regis)
 {
  fstream r;
  int count=0;
  r.open("recrd.dat",ios::in|ios::out|ios::binary);
  while(!r.eof())
   {
    int pos=r.tellg();
    r.read((char*)&s,sizeof(s));
     if(regis==s.reg)
      {
       border();
	   count=1;
	   gotoxy(12,6); cout<<"NAME    :";
	   gotoxy(12,7); cout<<"REG.No  :";
	   gotoxy(21,9) ;cout<<"+*********UPDATE MARKS**********+ ";
	   gotoxy(21,10) ;cout<<"| Sn. |     Sub.      |  Marks  | ";
	   gotoxy(21,11) ;cout<<"|~~~~~|~~~~~~~~~~~~~~~|~~~~~~~~~| ";
	   gotoxy(21,12) ;cout<<"| 1.  |   ENGLISH     |         | ";
	   gotoxy(21,13) ;cout<<"| 2.  |   BIOLOGY     |         | ";
	   gotoxy(21,14) ;cout<<"| 3.  |   PHYSICS     |         | ";
	   gotoxy(21,15) ;cout<<"| 4.  |   CHEMISTRY   |         | ";
	   gotoxy(21,16) ;cout<<"| 5.  |   COMPUTER    |         | ";

	   gotoxy(22,6);  cout<<s.na;
	   gotoxy(22,7);  cout<<s.reg;
	   gotoxy(46,12); cin>>s.m1;
	   gotoxy(46,13); cin>>s.m2;
	   gotoxy(46,14); cin>>s.m3;
	   gotoxy(46,15); cin>>s.m4;
	   gotoxy(46,16); cin>>s.m5;
	   gotoxy(60,19);cout<<"RECORD UPDATED!!!";

	   s.tot=(s.m1+s.m2+s.m3+s.m4+s.m5);
	   s.p=s.tot/5;
	   if(s.p>=95)
		strcpy(s.g,"A+");
	   if(s.p>=90&&s.p<95)
		strcpy(s.g,"A");
	   if(s.p>=80&&s.p<90)
		strcpy(s.g,"B+");
	   if(s.p>=70&&s.p<80)
		strcpy(s.g,"B");
	   if(s.p>=60&&s.p<70)
		strcpy(s.g,"C+");
	   if(s.p>=50&&s.p<60)
		strcpy(s.g,"C");
	   if(s.p>=40&&s.p<50)
		strcpy(s.g,"D");
	   if(s.p<40)
		strcpy(s.g,"E");

	   r.seekp(pos);
	   r.write((char*)&s,sizeof(s));
	   break;
       }
   }

 if(count==0)
   {
   border();
   gotoxy(27,8) ;cout<<"*----------------------------*";
   gotoxy(27,9) ;cout<<"|          SORRY!!!          |";
   gotoxy(27,10);cout<<"| THE RECORD DOES NOT EXIST. |";
   gotoxy(27,11);cout<<"*----------------------------*";
   getch();
   }
 getch();
 r.close();
 }

/*------------------------------------------------------------------------*
 |------------------------------- TOPPERS --------------------------------|
 *------------------------------------------------------------------------*/

void toppers()
{
  fstream r;
  r.open("recrd.dat",ios::in|ios::binary);
  border();
  int choice;
  gotoxy(35,3);cout<<"*-------------*";
  gotoxy(35,4);cout<<"|-- TOPPERS --|";
  gotoxy(35,5);cout<<"*-------------*";


  gotoxy(32,7); cout<<"*-------------------*";
  gotoxy(32,8); cout<<"|1.Class Toppers    |";
  gotoxy(32,9); cout<<"|2.Subject Toppers  |";
  gotoxy(32,10);cout<<"|3.Main menu        |";
  gotoxy(32,11);cout<<"*-------------------*";
  gotoxy(32,13);cout<<"Enter your Choice : ";
		cin>>choice;
 switch(choice)
 {
  case 1:
  cls_top();
  break;

  case 2:
  sub_top();
  break;

  case 3:
  menu();
  break;

  default:
  menu();

 }
 r.close();
}


/*------------------------------------------------------------------------*
 |---------------------------- CLASS TOPPERS -----------------------------|
 *------------------------------------------------------------------------*/

void cls_top()
 {
  fstream r;
  r.open("recrd.dat",ios::in|ios::binary);
  border();

  gotoxy(32,3);cout<<"*-------------------*";
  gotoxy(32,4);cout<<"|-- CLASS TOPPERS --|";
  gotoxy(32,5);cout<<"*-------------------*";

  gotoxy(9,7);cout<<"+--------------------------------------------------------------+";
  gotoxy(9,8);cout<<"| Reg No. |        Name         | Tot. Marks | Per(%) | Grade  |";
  gotoxy(9,9);cout<<"+--------------------------------------------------------------+";

  int m=10;
  while(r.read((char*)&s,sizeof(s)))
  {
    if(s.p>=90)
     s.out3(m);
  }

  r.close();
  getch();

 }

/*------------------------------------------------------------------------*
 |----------------------------- SUB TOPPERS ------------------------------|
 *------------------------------------------------------------------------*/
void sub_top()
 {

  border();
  gotoxy(30,3);cout<<"*-----------------------*";
  gotoxy(30,4);cout<<"|--- SUBJECT TOPPERS ---|";
  gotoxy(30,5);cout<<"*-----------------------*";

  gotoxy(17,7); cout<<"+------------------------------------------------------+";
  gotoxy(17,8); cout<<"| S.No |  Subjects  |          Toppers         | Marks |";
  gotoxy(17,9); cout<<"|------|------------|--------------------------|-------|";
  gotoxy(17,10);cout<<"|  1.  |  ENGLISH   |                          |       |";
  gotoxy(17,11);cout<<"|  2.  |  BIOLOGY   |                          |       |";
  gotoxy(17,12);cout<<"|  3.  |  PHYSICS   |                          |       |";
  gotoxy(17,13);cout<<"|  4.  |  CHEMISTRY |                          |       |";
  gotoxy(17,14);cout<<"|  5.  |  COMPUTER  |                          |       |";
  gotoxy(17,15);cout<<"+------------------------------------------------------+";



  fstream r;
  r.open("recrd.dat",ios::in|ios::binary);
  hic();

  while(!r.eof())
  {
   r.read((char*)&s,sizeof(s));

    if(max1==s.m1)
      {
	gotoxy(43,10);puts(s.na);
	gotoxy(68,10);cout<<s.m1;
      }


    if(max2==s.m2)
      {
	gotoxy(43,11);puts(s.na);
	gotoxy(68,11);cout<<s.m2;
      }

    if(max3==s.m3)
      {
	gotoxy(43,12);puts(s.na);
	gotoxy(68,12);cout<<s.m3;
      }

     if(max4==s.m4)
      {
	gotoxy(43,13);puts(s.na);
	gotoxy(68,13);cout<<s.m4;
      }

     if(max5==s.m5)
      {
	gotoxy(43,14);puts(s.na);
	gotoxy(68,14);cout<<s.m5;
      }
  }
 getch();
 r.close();
 }
/*------------------------------------------------------------------------*
 |------------------------------- FAILERS --------------------------------|
 *------------------------------------------------------------------------*/
void failed()
{
  border();
  fstream r;
  r.open("recrd.dat",ios::in|ios::binary);
  gotoxy(20,3);cout<<"*-------------------------------------*";
  gotoxy(20,4);cout<<"|-- FAILED in more Than one SUBJECT --|";
  gotoxy(20,5);cout<<"*-------------------------------------*";

  gotoxy(9,7);cout<<"|--------------------------------------------------------------|";
  gotoxy(9,8);cout<<"| Reg No. |        Name         | Tot. Marks | Per(%) | Grade  |";
  gotoxy(9,9);cout<<"|--------------------------------------------------------------|";


 int m=10;
 while(r.read((char*)&s,sizeof(s)))
 {
  int c=0;

  if(s.m1<40)
	c++;
  if(s.m2<40)
	c++;
  if(s.m3<40)
	c++;
  if(s.m4<40)
	c++;
  if(s.m5<40)
	c++;
  if(c>=2)
    s.out3(m);

  }
  r.close();
  getch();
 }
/*------------------------------------------------------------------------*
 |-------------------------------- DELETE --------------------------------|
 *------------------------------------------------------------------------*/

void Delete()
 {
  border();
  int regis,pos;
  int count=0;
  gotoxy(35,3);cout<<"*--------*";
  gotoxy(35,4);cout<<"|-DELETE-|";
  gotoxy(35,5);cout<<"*--------*";

  gotoxy(15,7);cout<<"Enter the Registeration No. of record to be deleted : ";
	       cin>>regis;

  fstream r,t;
  r.open("recrd.dat",ios::in|ios::binary);
  t.open("temp.dat",ios::out|ios::binary);

  while(r.read((char*)&s,sizeof(s)))
   {
     if(s.reg!=regis)
      {
	t.write((char*)&s,sizeof(s));
      }
      else
      count=1;
    }
   r.close();
   t.close();
   remove("recrd.dat");
   rename("temp.dat","recrd.dat");


 if(count==1)
  {
   gotoxy(55,11);cout<<"RECORD DELETED!!!";
   getch();
  }

  else
  {
   border();
   gotoxy(27,8) ;cout<<"*----------------------------*";
   gotoxy(27,9) ;cout<<"|          SORRY!!!          |";
   gotoxy(27,10);cout<<"| THE RECORD DOES NOT EXIST. |";
   gotoxy(27,11);cout<<"*----------------------------*";
   getch();
  }
 }
/*------------------------------------------------------------------------*
 |------------------------------  H.I.C. ---------------------------------|
 *------------------------------------------------------------------------*/
 void hic()
 {
  fstream r;
  r.open("recrd.dat",ios::in|ios::binary);
   while(!r.eof())
    {
     r.read((char*)&s,sizeof(s));

     if(max1<s.m1)
      max1=s.m1;
     if(max2<s.m2)
      max2=s.m2;
     if(max3<s.m3)
      max3=s.m3;
     if(max4<s.m4)
      max4=s.m4;
     if(max5<s.m5)
      max5=s.m5;
    }
  r.close();
 }
/*------------------------------------------------------------------------*
 |------------------------------- RESULT ---------------------------------|
 *------------------------------------------------------------------------*/

void report()
 {
  fstream r;
  r.open("recrd.dat",ios::in|ios::binary);
     while(r.read((char*)&s,sizeof(s)))
      {
       result_card();
       s.out4();

       if(s.p>=95)
       {
	gotoxy(12,24);puts("Outstanding performance... KEEP IT UP...");
       }
       else if(s.p>=90&&s.p<95)
       {
	gotoxy(12,24);puts("Excellent performance");
       }
       else if(s.p>=70&&s.p<90)
       {
	gotoxy(12,24);puts("Good...Can perform more better");
       }
       else if(s.p>=50&&s.p<70)
       {
	gotoxy(12,24);puts("Average Performance....More efforts Required!!!");
       }
       else if(s.p>=40&&s.p<50)
       {
	gotoxy(12,24);puts("On Border Line.....Hard work Required");
       }
       else
       {
	gotoxy(12,24);puts("Very Poor Performance.....Improvement Required!!!");
       }
       hic();
       gotoxy(44,16);cout<<max1;
       gotoxy(44,17);cout<<max2;
       gotoxy(44,18);cout<<max3;
       gotoxy(44,19);cout<<max4;
       gotoxy(44,20);cout<<max5;

       getch();
      }
   r.close();
  }
/*------------------------------------------------------------------------*
 |-------------------------------- CARD ----------------------------------|
 *------------------------------------------------------------------------*/
void result_card()
{

clrscr();
cout<<"\t\t\t*********REPORT CARD********\n";
gotoxy(5,3) ;cout<<"+--------------------------------------------------------------------+\n";
gotoxy(5,4) ;cout<<"|   Reg.No.   |                   NAME                      | CLASS  |\n";
gotoxy(5,5) ;cout<<"|-------------|---------------------------------------------|--------|\n";
gotoxy(5,6) ;cout<<"|             |                                             |        |\n";
gotoxy(5,7) ;cout<<"|-------------|---------------------------------------------|--------|\n";
gotoxy(5,8) ;cout<<"|    YEAR     | ATTENDANCE |     DOB     |  HOUSE  | HEIGHT | WEIGHT |\n";
gotoxy(5,9) ;cout<<"|-------------|------------|-------------|---------|--------|--------|\n";
gotoxy(5,10);cout<<"|   2019-20   |      /300  |             |         |    cm  |    kg  |\n";
gotoxy(5,11);cout<<"+--------------------------------------------------------------------+\n\n";

gotoxy(8,13);cout<<"+-----------------------------------------+      +-------------+\n";
gotoxy(8,14);cout<<"|  SUBJECT   |  M.M  | OBTAINED |  H.I.C. |      |    GRADE    |\n";
gotoxy(8,15);cout<<"|------------|-------|----------|---------|      |-------------|\n";
gotoxy(8,16);cout<<"|  English   |  100  |          |         |      |             |\n";
gotoxy(8,17);cout<<"|  Biology   |  100  |          |         |      +-------------+\n";
gotoxy(8,18);cout<<"|  Physics   |  100  |          |         |                     \n";
gotoxy(8,19);cout<<"|  Chemistry |  100  |          |         |      +-------------+\n";
gotoxy(8,20);cout<<"|  Computer  |  100  |          |         |      |  PERCENTAGE |\n";
gotoxy(8,21);cout<<"|------------|-------|----------|---------|      |-------------|\n";
gotoxy(8,22);cout<<"|    TOTAL   |  500  |          |    -    |      |       %     |\n";
gotoxy(8,23);cout<<"+-----------------------------------------+      +-------------+\n";
cout<<"  Comment:";
}

/*------------------------------------------------------------------------*
 |--------------------------------- MAIN ---------------------------------|
 *------------------------------------------------------------------------*/
void main()
{
 border();

 gotoxy(15,4);cout<<"*******************************************************\n\n";
 gotoxy(13,6);cout<<"                   COMPUTER  PROJECT                    ";
 gotoxy(13,7);cout<<"                           ON                           ";
 gotoxy(13,8);cout<<"                         (C++).                     \n\n";
 gotoxy(15,10);cout<<"******************************************************* ";
 gotoxy(31,12);cout<<"*-------------------*";
 gotoxy(31,13);cout<<"|      -TOPIC-      |";
 gotoxy(31,14);cout<<"| (Student Report)  |";
 gotoxy(31,15);cout<<"*-------------------*";
 gotoxy(31,16);cout<<"| SESSION-(2019-20) |";
 gotoxy(31,17);cout<<"*-------------------*";

 gotoxy(54,20);cout<<"Created by : AYUSH SRIVASTAVA ";
 //gotoxy(55,21);cout<<" Any description        ";
 getch();
 menu();
}
