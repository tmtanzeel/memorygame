//GAME TO TEST YOUR MEMORY (GRAPHICS)
//WRITTEN BY: TANZEEL MIRZA
//[NOTE: SOME FEATURES OF THIS GAME ARE LOCKED AND UNDER DEVELOPMENT]

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>

void level1();
void level2();
void level3();
void level4();
void level5();
void details();
void levelc1();
void levelc2();
void levelc3();
void levelc4();
void levelc5();
void initializemouse();
void displaymousepointer();
void hidemousepointer();

union REGS regin,regout;

int gd=DETECT,gm,option, a[50],num=0,i,co_x=0,x,y,l,j,name[30],count=0,star=0,s,tn,pos;
long fs=0,nl=0,bonus=0;
float tell_me=0.0,sum_Ca=0.0;
char ch,ans,r,v[2];

void main()
{
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	do
	{
	initializemouse();
	displaymousepointer();
	cleardevice();
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
	setcolor(1);
	outtextxy(30,50,"::ACCEPT A CHALLANGE::");
	setcolor(4);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
	outtextxy(160,150,"A) QUICK RECALL");
	setcolor(2);
	outtextxy(30,200,"B) CALCULATION ACCELATOR");
	setcolor(13);
	outtextxy(210,250,"O) DETAILS");
	setcolor(6);
	outtextxy(160,300,"X) ESCAPE/EXIT");
	ch=getch();
	switch(ch)
	{
	case 'a':
	case 'A':
	cleardevice();
	//M
	setcolor(4);
	settextstyle(SMALL_FONT,HORIZ_DIR,5);
	delay(1000);
	outtextxy(10,50,"15");
	delay(50);
	outtextxy(10,40,"78");
	delay(50);
	outtextxy(10,30,"21");
	delay(50);
	outtextxy(10,20,"45");
	delay(50);
	outtextxy(10,10,"23");
	delay(50);
	outtextxy(10,0,"56");
	delay(50);
	outtextxy(25,10,"87");
	delay(50);
	outtextxy(36,17,"15");
	delay(50);
	outtextxy(50,10,"45");
	delay(50);
	outtextxy(65,0,"12");
	delay(50);
	outtextxy(65,10,"87");
	delay(50);
	outtextxy(65,20,"10");
	delay(50);
	outtextxy(65,30,"39");
	delay(50);
	outtextxy(65,40,"91");
	delay(50);
	outtextxy(65,50,"55");

	//E
	setcolor(4);
	settextstyle(SMALL_FONT,HORIZ_DIR,5);
	outtextxy(170,90,"45");
	delay(50);
	outtextxy(155,90,"23");
	delay(50);
	outtextxy(140,90,"19");
	delay(50);
	outtextxy(140,100,"27");
	delay(50);
	outtextxy(140,110,"99");
	delay(50);
	outtextxy(140,120,"61");
	outtextxy(155,115,"83");
	delay(50);
	outtextxy(140,130,"12");
	delay(50);
	outtextxy(140,140,"87");
	delay(50);
	outtextxy(155,140,"15");
	delay(50);
	outtextxy(170,140,"10");

	//M
	setcolor(4);
	settextstyle(SMALL_FONT,HORIZ_DIR,5);
	outtextxy(240,220,"51");
	delay(50);
	outtextxy(240,210,"78");
	delay(50);
	outtextxy(240,200,"21");
	delay(50);
	outtextxy(240,190,"54");
	delay(50);
	outtextxy(240,180,"23");
	delay(50);
	outtextxy(240,170,"77");
	delay(50);
	outtextxy(255,180,"87");
	delay(50);
	outtextxy(265,190,"15");
	delay(50);
	outtextxy(275,180,"45");
	delay(50);
	outtextxy(290,170,"12");
	delay(50);
	outtextxy(290,180,"88");
	delay(50);
	outtextxy(290,190,"25");
	delay(50);
	outtextxy(290,200,"39");
	delay(50);
	outtextxy(290,210,"91");
	delay(50);
	outtextxy(290,220,"55");

	//O
	setcolor(4);
	settextstyle(SMALL_FONT,HORIZ_DIR,5);
	outtextxy(360,300,"61");
	delay(50);
	outtextxy(360,290,"45");
	delay(50);
	outtextxy(360,280,"23");
	delay(50);
	outtextxy(360,270,"11");
	delay(50);
	outtextxy(360,260,"29");
	delay(50);
	outtextxy(360,250,"88");
	delay(50);
	outtextxy(375,250,"83");
	delay(50);
	outtextxy(390,250,"12");
	delay(50);
	outtextxy(405,250,"87");
	delay(50);
	outtextxy(405,260,"50");
	delay(50);
	outtextxy(405,270,"74");
	delay(50);
	outtextxy(405,280,"51");
	delay(50);
	outtextxy(405,290,"83");
	delay(50);
	outtextxy(405,300,"15");
	delay(50);
	outtextxy(390,300,"92");
	delay(50);
	outtextxy(375,300,"67");
	delay(50);

	//R
	setcolor(4);
	settextstyle(SMALL_FONT,HORIZ_DIR,5);
	outtextxy(475,300,"69");
	delay(50);
	outtextxy(475,310,"82");
	delay(50);
	outtextxy(475,320,"10");
	delay(50);
	outtextxy(475,330,"53");
	delay(50);
	outtextxy(475,340,"23");
	delay(50);
	outtextxy(475,350,"52");
	delay(50);
	outtextxy(490,300,"23");
	delay(50);
	outtextxy(505,300,"45");
	delay(50);
	outtextxy(505,310,"12");
	delay(50);
	outtextxy(505,320,"87");
	delay(50);
	outtextxy(490,320,"15");
	delay(50);
	outtextxy(490,330,"18");
	delay(50);
	outtextxy(500,340,"22");
	delay(50);
	outtextxy(510,350,"34");


	//Y
	setcolor(4);
	settextstyle(SMALL_FONT,HORIZ_DIR,5);
	outtextxy(570,400,"62");
	outtextxy(610,400,"10");
	delay(50);
	outtextxy(580,410,"23");
	outtextxy(600,410,"23");
	delay(50);
	outtextxy(590,420,"45");
	delay(50);
	outtextxy(590,430,"12");
	delay(50);
	outtextxy(590,440,"87");
	delay(50);
	outtextxy(590,450,"15");
	delay(300);

	//G
	outtextxy(60,170,"39");
	delay(50);
	outtextxy(45,170,"38");
	delay(50);
	outtextxy(30,170,"37");
	delay(50);
	outtextxy(15,170,"23");
	delay(50);
	outtextxy(15,180,"27");
	delay(50);
	outtextxy(15,190,"28");
	delay(50);
	outtextxy(15,200,"29");
	delay(50);
	outtextxy(15,210,"30");
	delay(50);
	outtextxy(15,220,"31");
	delay(50);
	outtextxy(30,220,"32");
	delay(50);
	outtextxy(45,220,"33");
	delay(50);
	outtextxy(60,220,"19");
	delay(50);
	outtextxy(60,210,"34");
	delay(50);
	outtextxy(60,200,"35");
	delay(50);
	outtextxy(60,190,"36");
	delay(50);

	outtextxy(45,190,"40");

	//A
	outtextxy(153,170,"19");
	delay(50);
	outtextxy(145,180,"25");
	outtextxy(160,180,"20");
	delay(50);
	outtextxy(140,190,"26");
	outtextxy(165,190,"21");
	delay(50);
	outtextxy(135,200,"27");
	outtextxy(170,200,"22");
	delay(50);
	outtextxy(130,210,"28");
	outtextxy(175,210,"23");
	delay(50);
	outtextxy(125,220,"29");
	outtextxy(180,220,"24");
	delay(50);
	outtextxy(153,200,"30");

	//E
	outtextxy(350,170,"30");
	delay(50);
	outtextxy(350,180,"31");
	delay(50);
	outtextxy(350,190,"32");
	delay(50);
	outtextxy(350,200,"33");
	delay(50);
	outtextxy(350,210,"34");
	delay(50);
	outtextxy(350,220,"35");
	delay(50);
	outtextxy(365,170,"36");
	delay(50);
	outtextxy(380,170,"37");
	delay(50);
	outtextxy(395,170,"38");
	delay(50);
	outtextxy(365,195,"39");
	delay(50);
	outtextxy(380,195,"40");
	delay(50);
	outtextxy(365,220,"41");
	delay(50);
	outtextxy(380,220,"42");
	delay(50);
	outtextxy(395,220,"43");
	delay(3000);

	for(i=0;i<900;i++)
	{
		setcolor(i);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
		delay(5);
		num=random(50);
		sprintf(v,"%d",num);
		outtextxy(random(600),random(500),v);
	}
	delay(1000);
	setfillstyle(SOLID_FILL,RED);
	bar(100,100,550,400);
	settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
	delay(1000);
	setcolor(0);
	outtextxy(120,220,"PRESS ANY KEY");
	outtextxy(200,270,"TO START");
	getch();
	cleardevice();
	setcolor(4);
	settextstyle(BOLD_FONT,HORIZ_DIR,3);
	outtextxy(10,20,"Enter your name please:");
	scanf("%s",&name);
	cleardevice();
	settextstyle(BOLD_FONT,HORIZ_DIR,2);
	outtextxy(50,200,"Thanks for telling me your name.");
	delay(1500);
		do
		{
		cleardevice();
		setcolor(2);
		settextstyle(BOLD_FONT,HORIZ_DIR,3);
		outtextxy(50,50,"::TEST YOUR RECALLING POWER::");
		setcolor(4);
		outtextxy(240,100,":LEVEL 1:");
		outtextxy(240,150,":LEVEL 2:");
		outtextxy(240,200,":LEVEL 3:");
		outtextxy(240,250,":LEVEL 4:");
		outtextxy(240,300,":LEVEL 5:");
		setcolor(2);
		outtextxy(150,350,"::PRESS 0 TO EXIT::");
		scanf("%d",&option);
		switch (option)
		{
			case 1:
			clrscr();
			level1();
			break;

			case 2:
			clrscr();
			level2();
			break;

			case 3:
			clrscr();
			level3();
			break;

			case 4:
			clrscr();
			level4();
			break;

			case 5:
			clrscr();
			level5();
			break;

			case 0:
			exit(0);
			break;

			default:
			cleardevice();
			outtextxy(100,200,"THIS FEAUTRE IS NOT SUPPORTED.");
			break;
		}//EOSW 48:17
	getch();
	cleardevice();
	setcolor(2);
	settextstyle(BOLD_FONT,HORIZ_DIR,3);
	outtextxy(10,200,"Press M to return to the main menu.");
	ch=getche();
	}//EODO 36:9
	while(ch=='m' || ch=='M');

	break;

	case 'b':
	case 'B':
	cleardevice();
	setcolor(2);
		settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
		outtextxy(100,50,"::CHOOSE YOUR LEVEL::");
		setcolor(4);
		outtextxy(240,100,":LEVEL 1:");
		outtextxy(240,150,":LEVEL 2:");
		outtextxy(240,200,":LEVEL 3:");
		outtextxy(240,250,":LEVEL 4:");
		outtextxy(240,300,":LEVEL 5:");
		setcolor(2);
		outtextxy(150,350,"::PRESS 0 TO EXIT::");
		scanf("%d",&option);
		switch (option)
		{
			case 1:
			cleardevice();
			levelc1();
			break;

			case 2:
			cleardevice();
			levelc2();
			break;

			case 3:
			cleardevice();
			levelc3();
			break;

			case 4:
			cleardevice();
			levelc4();
			break;

			case 5:
			cleardevice();
			setcolor(4);
			outtextxy(180,200,"THIS LEVEL IS");
			outtextxy(120,250,"UNDER CONSTRUCTION!");
			//level5();
			break;

			case 0:
			exit(0);
			break;

			default:
			cleardevice();
			setcolor(4);
			outtextxy(100,200,"THIS FEAUTRE IS NOT");
			outtextxy(200,250,"SUPPORTED!");
			break;
		}//EOSW 48:17
	/*setcolor(9);
	outtextxy(50,200,"THIS FEATURE IS UNDER");
	outtextxy(150,250,"DEVELOPMENT");*/
	break;

	case 'x':
	case 'X':
	exit(0);
	break;

	case 'o':
	case 'O':
	details();
	break;

	default:
	cleardevice();
	outtextxy(100,200,"INVALID ATTEMPT");
	break;


}//E/O/SWt/MAIN
//EODO
	getch();
	cleardevice();
	setcolor(2);
	settextstyle(BOLD_FONT,HORIZ_DIR,3);
	outtextxy(10,200,"Press M to return to the main menu.");
	ch=getche();
	}//EODO 36:9
	while(ch=='m' || ch=='M');
}

void initializemouse()
{
	regin.x.ax=0;
	int86(0X33,&regin,&regout);
	if(regout.x.ax==0)
	{
		setcolor(4);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
		outtextxy(90,200,"MOUSE INITIALIZATION FAILED");
	}
}

void displaymousepointer()
{
	regin.x.ax=1;
	int86(0X33,&regin,&regout);
}

void level1()
{
	do
	{
		cleardevice();
		count=0;
		setcolor(14);
		for(i=0;i<400;i++)
		{
			delay(5);
			arc(300,250,0+i,10+i,100);
			arc(300,250,0-i,10-i,80);
		}
		setcolor(5);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		outtextxy(268,200,":LEVEL 1:");
		setcolor(4);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
		outtextxy(230,230,"LOADED");
		setcolor(GREEN);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		outtextxy(250,260,"Press any key");
		getch();
		cleardevice();
		settextstyle(BOLD_FONT,HORIZ_DIR,2);
		moveto(250,0);
		setcolor(2);
		outtext(":LEVEL 1:");
		setcolor(9);
		outtextxy(0,120,"With how many numbers would you like to");
		outtextxy(0,160,"play ");
		setcolor(6);
		sprintf(v,"%s",name);
		outtextxy(90,160,v);
		setcolor(9);
		outtextxy(220,160,"?");
		scanf("%d",&l);
		setfillstyle(LINE_FILL,EGA_BLUE);
		cleardevice();
		setcolor(6);
		sprintf(v,"%s",name);
		outtextxy(90,180,v);
		setcolor(9);
		outtextxy(230,180,", Enter ");
		sprintf(v,"%d",l);
		outtextxy(370,180,v);
		outtextxy(390,180," numbers.");
		for(i=0;i<l;i++)
		{
			scanf("%d",&a[i]);
		}
		cleardevice();
		fflush(stdin);
		setcolor(6);
		sprintf(v,"%s...",name);
		outtextxy(10,150,v);
		setcolor(9);
		outtextxy(10,200,":Memorize the numbers you just wrote:");
		outtextxy(100,250,"PRESS ANY KEY WHEN DONE.");
		getch();
		cleardevice();
		outtextxy(70,200,"All right I'll give you 5 seconds");
		outtextxy(10,250,"PRESS ANY KEY TO START THE TIMER");
		getche();
		for(x=5;x>=0;x--)
		{
			cleardevice();
			sprintf(v,"%d",x);
			outtextxy(300,200,v);
			delay(1000);
		}
		cleardevice();
		outtextxy(35,0,"Now write the numbers again in the");
		outtextxy(140,40,"order you entered them.");
		for(i=0;i<l;i++)
		{
			fflush(stdin);
			scanf("%d",&num);
			if(num==a[i])
			{
				cleardevice();
				moveto(255,200);
				outtext("RIGHT");
				delay(500);
				count++;
			}
			else
			{
				cleardevice();
				moveto(250,200);
				outtext("WRONG");
				delay(500);
			}
		}//EOFOR 168:17
		nl=(l*400);
		fs+=((count*500)+bonus);
		//star+=count;
		cleardevice();
		setcolor(2);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		outtextxy(110,30,":::S C O R E   B O A R D:::");
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		setcolor(4);
		outtextxy(130,110,"TOTAL NUMBERS ENTERED:");
		sprintf(v,"%d",l);
		outtextxy(520,110,v);
		outtextxy(190,170,"RIGHT ANSWERS:");
		sprintf(v,"%d",count);
		outtextxy(450,170,v);
		outtextxy(190,240,"WRONG ANSWERS:");
		sprintf(v,"%d",(l-count));
		outtextxy(450,240,v);
		outtextxy(190,300,"FINAL SCORES:");
		sprintf(v,"%ld", fs);
		outtextxy(430,300,v);
		//outtextxy(190,360,"STARS COLLECTED:");
		//sprintf(v,"%d",star);
		//outtextxy(470,360,v);
		fflush(stdin);
		getch();
		cleardevice();
		if(fs<(nl/2))
		{
			setfillstyle(SOLID_FILL,YELLOW);
			fillellipse(100,140,50,50);
			setfillstyle(SOLID_FILL,9);
			fillellipse(80,120,10,10);
			fillellipse(120,120,10,10);
			delay(1000);
			for(i=0;i<180;i++)
			{
				delay(10);
				setcolor(4);
				arc(100,170,0,i,20);
			}
			setcolor(2);
			settextstyle(BOLD_FONT,HORIZ_DIR,3);
			outtextxy(190,150,"AWW");
			setcolor(6);
			sprintf(v,"%s",name);
			outtextxy(320,150,v);
			setcolor(9);
			outtextxy(100,200,"THAT WAS REALLY POOR.");
			getch();
		}
		else if(fs>=(nl/2) && fs<nl)
		{
			setfillstyle(SOLID_FILL,YELLOW);
			fillellipse(90,140,50,50);
			setfillstyle(SOLID_FILL,9);
			fillellipse(70,120,10,10);
			fillellipse(110,120,10,10);
			delay(1000);
			for(i=80,j=170;i<120,j>150;i++,j--)
			{
				delay(10);
				setcolor(4);
				line(80,170,i,j);
			}
			setcolor(2);
			settextstyle(BOLD_FONT,HORIZ_DIR,3);
			outtextxy(190,150,"GOOD ");
			setcolor(6);
			sprintf(v,"%s",name);
			outtextxy(320,150,v);
			setcolor(2);
			outtextxy(0,200,"BUT YOU STILL NEED TO PRACTISE.");
			getch();
		}
		else if(fs==nl)
		{
			setfillstyle(SOLID_FILL,YELLOW);
			fillellipse(100,140,50,50);
			setfillstyle(SOLID_FILL,9);
			fillellipse(80,120,10,10);
			fillellipse(120,120,10,10);
			delay(1000);
			for(i=180;i<360;i++)
			{
				delay(10);
				setcolor(4);
				arc(100,150,180,i,30);
			}
			setcolor(9);
			settextstyle(BOLD_FONT,HORIZ_DIR,3);
			outtextxy(160,150,"EXCELLENT ");
			setcolor(6);
			sprintf(v,"%s",name);
			outtextxy(360,150,v);
			setcolor(2);
			outtextxy(110,200,"YOU'RE ELLIGIBLE FOR THE");
			outtextxy(240,250,"NEXT LEVEL");
			setcolor(4);
			settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
			outtextxy(0,400,"Do you want to try the next level? (y/n)");
			setcolor(2);
			ch=getche();
			if(ch=='y' || ch=='Y')
			{
				cleardevice();
				level2();
			}
		}
		else if(fs>nl)
		{
			bonus=(fs-nl);
			setcolor(5);
			settextstyle(BOLD_FONT,HORIZ_DIR,3);
			outtextxy(65,200,"CONGRATULATIONS");
			sprintf(v,"%s",name);
			outtextxy(440,200,v);
			settextstyle(BOLD_FONT,HORIZ_DIR,1);
			setcolor(6);
			outtextxy(10,250,"YOU'VE GOT A BONUS OF :");
			sprintf(v,"%d",bonus);
			outtextxy(400,250,v);
			outtextxy(520,250,"points.");
			fs=fs+bonus;
			bonus=0;
			getch();
			cleardevice();
			setfillstyle(SOLID_FILL,YELLOW);
			fillellipse(100,140,50,50);
			setfillstyle(SOLID_FILL,9);
			fillellipse(80,120,10,10);
			fillellipse(120,120,10,10);
			delay(1000);
			for(i=180;i<360;i++)
			{
				delay(10);
				setcolor(4);
				arc(100,150,180,i,30);
			}
			setcolor(3);
			settextstyle(BOLD_FONT,HORIZ_DIR,3);
			outtextxy(160,150,"EXCELLENT");
			setcolor(6);
			sprintf(v,"%s",name);
			outtextxy(380,150,v);
			setcolor(3);
			outtextxy(110,200,"YOU'RE ELLIGIBLE FOR THE");
			outtextxy(240,250,"NEXT LEVEL");
			setcolor(6);
			settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
			outtextxy(0,400,"Do you want to try the next level? (y/n)");
			ch=getche();
			cleardevice();
			if(ch=='y' || ch=='Y')
			{
				cleardevice();
				level2();
				break;
			}
			//for(i=0;i<=bonus;i++)
			//{
				//printf("%d",i);
				//delay(20);
				//clrscr();
			//}
	}
	cleardevice();
	settextstyle(BOLD_FONT,HORIZ_DIR,3);
	outtextxy(30,200,"Want to play this level again?");
	outtextxy(270,250,"(y/n)");
	fflush(stdin);
	r=getche();
	}//EODO 99:9
	while(r=='y' || r=='Y');
}//EOFNL1

void level2()
{
	count=0;
	fs=1;nl=0; //UNLOCK LEVEL 2
	cleardevice();
	if(fs>nl)
	{
	   //do
	   //{
		setcolor(14);
		for(i=0;i<400;i++)
		{
			delay(5);
			arc(300,250,0+i,10+i,100);
			arc(300,250,0-i,10-i,80);
		}
		setcolor(5);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		outtextxy(268,200,":LEVEL 2:");
		setcolor(4);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
		outtextxy(230,230,"LOADED");
		setcolor(GREEN);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		outtextxy(250,260,"Press any key");
		getch();
		cleardevice();
		setcolor(2);
		settextstyle(BOLD_FONT,HORIZ_DIR,3);
		fflush(stdin);
		outtextxy(245,0,":LEVEL 2:");
		outtextxy(130,100,"Again I ask you");
		sprintf(v,"%s",name);
		outtextxy(430,100,v);
		outtextxy(40,150,"With how many numbers would");
		outtextxy(160,200,"you like to play?");
		scanf("%d",&l);
		cleardevice();
		sprintf(v,"%s",name);
		outtextxy(250,50,v);
		outtextxy(90,100,":Enter");
		sprintf(v,"%d ",l);
		outtextxy(210,100,v);
		outtextxy(240,100,"random numbers:");
		for(i=0;i<l;i++)
		{
			scanf("%d",&a[i]);
		}
		outtextxy(55,250,"Memorize all the numbers you");
		outtextxy(155,280,"just wrote above.");
		outtextxy(40,370,"[PRESS ANY KEY WHEN DONE]");
		getche();
		cleardevice();
		outtextxy(180,100,"Ok then");
		sprintf(v,"%s,",name);
		outtextxy(320,100,v);
		outtextxy(10,200,"I'm going to ask you few questions");
		outtextxy(0,300,"READY ..???");
		outtextxy(75,350,"PRESS ANY KEY TO START");
		getch();
		cleardevice();
		outtextxy(130,10,"! DO IT IN YOUR MIND !");
		outtextxy(20,100,".Sum up all the numbers together.");
		delay(1500);
		outtextxy(80,150,".DONE..??? PRESS ANY KEY.");
		getch();
		cleardevice();
		gotoxy(10,20);
		outtextxy(100,100,".Multiply the result with 2.");
		delay(1500);
		outtextxy(80,150,".DONE..??? PRESS ANY KEY.");
		getch();
		cleardevice();
		moveto(60,100);
		outtext(".Then divide the result with 1.");
		delay(1500);
		outtextxy(80,150,".DONE..??? PRESS ANY KEY.");
		getche();
		cleardevice();
		outtextxy(0,100,"Now write the numbers again in the");
		outtextxy(120,150,"order you entered them.");
		getch();
		for(i=0;i<l;i++)
		{
			fflush(stdin);
			scanf("%d",&num);
			if(num==a[i])
			{
				cleardevice();
				outtextxy(255,200,"RIGHT");
				delay(500);
				count++;
			}
			else
			{
				cleardevice();
				outtextxy(250,200,"WRONG");
				delay(500);
			}
		}//EOFOR 372:14
		fs+=(count*500);
		nl=(l*400);
		star+=count;
		cleardevice();
		setcolor(2);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		outtextxy(110,30,":::S C O R E   B O A R D:::");
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		setcolor(4);
		outtextxy(130,110,"TOTAL NUMBERS ENTERED:");
		sprintf(v,"%d",l);
		outtextxy(520,110,v);
		outtextxy(190,170,"RIGHT ANSWERS:");
		sprintf(v,"%d",count);
		outtextxy(450,170,v);
		outtextxy(190,240,"WRONG ANSWERS:");
		sprintf(v,"%d",(l-count));
		outtextxy(450,240,v);
		outtextxy(190,300,"FINAL SCORES:");
		sprintf(v,"%ld", fs);
		outtextxy(430,300,v);
		outtextxy(190,360,"STARS COLLECTED:");
		sprintf(v,"%d",star);
		outtextxy(470,360,v);
		/*for(s=0;s<count;s++)
		{
			printf("\a* ");
		}
		printf(" (%d)",count);*/
		getch();
		cleardevice();
		setfillstyle(SOLID_FILL,YELLOW);
		fillellipse(100,140,50,50);
		setfillstyle(SOLID_FILL,9);
		fillellipse(80,120,10,10);
		fillellipse(120,120,10,10);
		delay(1000);
		for(i=0;i<180;i++)
		{
			delay(10);
			setcolor(4);
			arc(100,170,0,i,20);
		}
		delay(500);
		setcolor(2);
		settextstyle(BOLD_FONT,HORIZ_DIR,3);
		if(fs<=(10000/3))
		{
			outtextxy(40,200,"THIS LEVEL IS NOT SO EASY...!!");
			outtextxy(80,250,".THAT WAS REALLY POOR.");
			outtextxy(0,300,"Want to play this level again?(y/n).");
			ch=getche();
			if(ch=='y' || ch =='Y')
			{
				level2();
			}

		}
		else if(fs>=(10000/2) && fs<10000)
		{
			setfillstyle(SOLID_FILL,YELLOW);
			fillellipse(90,140,50,50);
			setfillstyle(SOLID_FILL,9);
			fillellipse(70,120,10,10);
			fillellipse(110,120,10,10);
			delay(1000);
			for(i=80,j=170;i<120,j>150;i++,j--)
			{
				delay(10);
				setcolor(4);
				line(80,170,i,j);
			}
			outtextxy(200,150,"NICE");
			sprintf(v,"%s",name);
			outtextxy(300,150,v);
			outtextxy(0,250,"BUT YOU STILL NEED TO PRACTISE");
			outtextxy(30,350,"I'LL ADVICE YOU TO PLAY WITH");
			outtextxy(200,400,"MORE NUMBERS");
			outtextxy(0,300,"Want to play this level again?(y/n).");
			ch=getche();
			if(ch=='y' || ch =='Y')
			{
				level2();
			}
		}
		else if(fs>=10000)
		{
			setfillstyle(SOLID_FILL,YELLOW);
			fillellipse(100,140,50,50);
			setfillstyle(SOLID_FILL,9);
			fillellipse(80,120,10,10);
			fillellipse(120,120,10,10);
			delay(1000);
			for(i=180;i<360;i++)
			{
				delay(10);
				setcolor(4);
				arc(100,150,180,i,30);
			}
			outtextxy(0,100,"BRAVO");
			sprintf(v,"%s,",name);
			outtextxy(140,100,v);
			outtextxy(120,200,"YOU'RE ELLIGIBLE FOR");
			outtextxy(160,250,"THE NEXT LEVEL");
			outtextxy(0,350,"Do you want to try LEVEL 3? (y/n)");
			ans=getche();
			if(ans=='y' || ans=='Y')
			{
				level3();
			}
			outtextxy(0,300,"Want to play this level again?(y/n).");
			ch=getche();
			if(ch=='y' || ch =='Y')
			{
				level2();
			}
		}
	}//EOIF (MAIN-IF) 312:9
	else
	{
		moveto(150,50);
		outtext("::LEVEL 2 IS LOCKED::");
		if(fs==0) //<--
		{
			outtextxy(40,150,"Please play LEVEL 1 first and earn");
			outtextxy(20,200,"suffecient points to unlock this level.");
			outtextxy(0,300,"So");
			setcolor(6);
			sprintf(v,"%s,",name);
			outtextxy(50,300,v);
			setcolor(2);
			outtextxy(30,350,"Shall we start with LEVEL 1? (y/n).");
			fflush(stdin);
			ch=getche();
			if(ch=='y' || ch=='Y')
			{
				level1(); //Calling the function void level1();
			}
		}
		else //<--
		{
			outtextxy(20,150,"You still need more than");
			sprintf(v,"%d",(nl-fs));
			outtextxy(450,150,v);
			outtextxy(530,150,"points");
			outtextxy(170,200,"to unlock this level.");
			outtextxy(150,300,"Retry LEVEL 1? (y/n)");
			ch=getche();
			if(ch=='y' || ch=='Y')
			{
				level1();
			}
		}
	}//EOELSE (MAIN-ELSE) 454:9
	//r=getche();
	// }//End of DO at 236:20
	//while(r=='y' || r=='Y');
	//closegraph();
	getch();
}//EOFNL2


void level3()
{
	count=0,nl=10000;
	cleardevice();
	//fs=10001; //UNLOCK LEVEL 3
	if(fs>=10000)
	{
		randomize();
		setcolor(9);
		for(i=0;i<400;i++)
		{
			delay(10);
			arc(300,250,0+i,10+i,100);
			arc(300,250,0-i,10-i,80);
		}
		setcolor(4);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
		outtextxy(230,230,"LOADED");
		setcolor(GREEN);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		outtextxy(250,260,"Press any key");
		getch();
		cleardevice();
		outtextxy(245,10,":LEVEL 3:");
		outtextxy(10,80,"So");
		sprintf(v,"%s,",name);
		outtextxy(60,80,v);
		outtextxy(55,130,"Same question again.");
		outtextxy(30,230,"With how namy numbers would you");
		outtextxy(220,280,"like to play?");
		scanf("%d",&l);
		cleardevice();
		outtextxy(155,50,"But this time");
		sprintf(v,"%s,",name);
		outtextxy(375,50,v);
		outtextxy(155,100,".I'll give you numbers.");
		outtextxy(60,300,"[PRESS ANY KEY TO PROCEED]");
		getch();
		cleardevice();
		l=5;
		outtextxy(20,50,"Here are your");
		sprintf(v,"%d",l);
		outtextxy(255,50,v);
		outtextxy(300,50,"random numbers:");
		for(i=1;i<=l;i++)
		{
			a[i]=("%d\t", rand()%100);
		}
		for(i=l;i>=1;i--)
		{
			sprintf(v,"%d",a[i]);
			outtextxy(co_x,100,v);
			co_x+=60;
		}
		outtextxy(0,200,"Memorize all the numbers written above.");
		outtextxy(70,250,"[PRESS ANY KEY WHEN DONE]");
		getch();
		cleardevice();
		outtextxy(20,100,"Ok");
		sprintf(v,"%s,",name);
		outtextxy(100,100,v);
		outtextxy(50,150,".I'll ask you a few questions again.");
		outtextxy(10,300,"READY ..???");
		outtextxy(30,350,"PRESS ANY KEY TO START.");
		getch();
		cleardevice();
		outtextxy(130,20,"! DO IT IN YOUR MIND !");
		outtextxy(80,100,"Reverse the order of numbers.");
		outtextxy(100,150,"DONE..??? PRESS ANY KEY.");
		getch();
		cleardevice();
		outtextxy(110,100,"Add 7 to all the numbers.");
		outtextxy(100,150,"DONE..??? PRESS ANY KEY.");
		getch();
		cleardevice();
		outtextxy(70,100,"Then divide the result with 5.");
		outtextxy(100,150,"DONE..??? PRESS ANY KEY.");
		getch();
		cleardevice();
		outtextxy(80,100,"Now write the numbers again");
		outtextxy(150,150,"in the reverse order.");
		for(i=1;i<=l;i++)
		{
			scanf("%d",&num);
			if(num==a[i])
			{
				cleardevice();
				moveto(255,200);
				outtext("RIGHT");
				delay(500);
				count++;
			}
			else
			{
				cleardevice();
				moveto(250,200);
				outtext("WRONG");
				delay(500);
			}
		}
		fs+=(count*500);
		star+=count;
		getch();
		cleardevice();
		setcolor(2);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		outtextxy(110,30,":::S C O R E   B O A R D:::");
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		setcolor(4);
		outtextxy(130,110,"TOTAL NUMBERS ENTERED:");
		sprintf(v,"%d",l);
		outtextxy(520,110,v);
		outtextxy(190,170,"RIGHT ANSWERS:");
		sprintf(v,"%d",count);
		outtextxy(450,170,v);
		outtextxy(190,240,"WRONG ANSWERS:");
		sprintf(v,"%d",(l-count));
		outtextxy(450,240,v);
		outtextxy(190,300,"FINAL SCORES:");
		sprintf(v,"%ld", fs);
		outtextxy(430,300,v);
		outtextxy(190,360,"STARS COLLECTED:");
		sprintf(v,"%d",star);
		outtextxy(470,360,v);
		/*for(s=0;s<count;s++)
		{
			printf("\a* ");
		}
		printf(" (%d)",count);*/
		getch();
		cleardevice();
		setfillstyle(SOLID_FILL,YELLOW);
		fillellipse(100,140,50,50);
		setfillstyle(SOLID_FILL,9);
		fillellipse(80,120,10,10);
		fillellipse(120,120,10,10);
		delay(1000);
		for(i=0;i<180;i++)
		{
			delay(10);
			setcolor(4);
			arc(100,170,0,i,20);
		}
		settextstyle(BOLD_FONT,HORIZ_DIR,3);
		if(fs<=(10000/3))
		{
			outtextxy(0,50,"This level is not like previous two levels.");
			sprintf(v,"%s",name);
			outtextxy(0,150,v);
			outtextxy(100,150,"THIS LEVEL IS NOT SO EASY...!!");
			outtextxy(0,200,"THAT WAS REALLY POOR.");
		}
		else if(fs>=(10000/2) && fs<10000)
		{
			setfillstyle(SOLID_FILL,YELLOW);
			fillellipse(90,140,50,50);
			setfillstyle(SOLID_FILL,9);
			fillellipse(70,120,10,10);
			fillellipse(110,120,10,10);
			delay(1000);
			for(i=80,j=170;i<120,j>150;i++,j--)
			{
				delay(10);
				setcolor(4);
				line(80,170,i,j);
			}
			outtextxy(100,100,"NICE ..!!");
			sprintf(v,"%s",name);
			outtextxy(0,200,v);
			outtextxy(50,250,"BUT YOU STILL NEED TO PRACTISE.");
		}
		else if(fs>=10000)
		{
			setfillstyle(SOLID_FILL,YELLOW);
			fillellipse(100,140,50,50);
			setfillstyle(SOLID_FILL,9);
			fillellipse(80,120,10,10);
			fillellipse(120,120,10,10);
			delay(1000);
			for(i=180;i<360;i++)
			{
				delay(10);
				setcolor(4);
				arc(100,150,180,i,30);
			}
			outtextxy(100,100,"BRAVO ..!!");
			sprintf(v,"%s,",name);
			outtextxy(0,200,v);
			outtextxy(100,250,"YOU'RE ELLIGIBLE FOR");
			outtextxy(150,300,"THE NEXT LEVEL");
			outtextxy(0,350,"Do you want to try the next level? (y/n)");
			ch=getche();
			if(ch=='y' || ch=='Y')
			{
				level4();
			}
		}
	}//EOIF (MAIN-IF) 506:9

	else
	{
		outtextxy(150,10,"::LEVEL 3 IS LOCKED::");
		if(fs==0)
		{
			outtextxy(35,100,"Please play LEVEL 1 first and earn");
			outtextxy(25,150,"suffecient points to unlock this level.");
			outtextxy(0,250,"So");
			sprintf(v,"%s,",name);
			outtextxy(60,250,v);
			outtextxy(60,300,"Shall we start with LEVEL 1? (y/n).");
			ch=getche();
			if(ch=='y' || ch=='Y')
			{
				level1(); //Calling the function void level1();
			}
		}
		else
		{
			outtextxy(100,200,"You still need more than");
			sprintf(v,"%d",(10000-fs));
			outtextxy(100,200,v);
			outtextxy(120,200,"points to unlock this level.");
			fflush(stdin);
			outtextxy(100,200,"Press A to retry LEVEL 1.");
			outtextxy(100,250,"Press B to retry LEVEL 2");
			ch=getche();
			exit(0);
			switch(ch)
			{
				case 'a':
				level1();
				break;

				case 'b':
				level2();
				break;

				default:
				printf("\n\nI N V A L I D  I N P U T !");
				break;
			}//EOSW 666:17
		}//EOEL (INTERNAL)
	}//EOEL (MAIN-ELSE) 649:9
getch();
} //End of Fn Level3

void level4()
{
	count=0;
	fs=1; //UNLOCK LEVEL 4
	if(fs>=0)
	{
		setcolor(9);
		for(i=0;i<400;i++)
		{
			delay(10);
			arc(300,250,0+i,10+i,100);
			arc(300,250,0-i,10-i,80);
		}
		setcolor(4);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
		outtextxy(230,230,"LOADED");
		setcolor(GREEN);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		outtextxy(250,260,"Press any key");
		getch();
		cleardevice();
		randomize();
		outtextxy(50,50,"Excellent performance");
		sprintf(v,"%s,",name);
		outtextxy(420,50,v);
		outtextxy(0,150,"You played previous Levels pretty good.");
		fs+=2000;
		outtextxy(20,250,"I give you 2000 points for this.");
		outtextxy(50,300,"Your Final score is now:");
		sprintf(v,"%d",fs);
		outtextxy(450,300,v);
		delay(6000);
		clrscr();
		gotoxy(10,20);
		outtextxy(5,100,".But THIS level is not going to be easy.");
		outtextxy(0,200,"WISH YOU ALL THE VERY BEST,");
		sprintf(v,"%s.",name);
		outtextxy(530,200,v);
		outtextxy(60,300,"[PRESS ANY KEY TO PROCEED]");
		getch();
		cleardevice();
		l=(random(8));
		if(l<=3)
		{
			l=(random(8));
		}
		outtextxy(80,100,"I'll give you");
		sprintf(v,"%d",l);
		outtextxy(280,100,v);
		outtextxy(330,100,"random numbers.");
		outtextxy(110,200,"You'll 've to memorize them.");
		outtextxy(130,300,"But I'll give you only few");
		outtextxy(200,350,"seconds for this.");
		getch();
		delay(5000);
		cleardevice();
		for(i=1;i<=l;i++)
		{
			a[i]=("%d\t", rand()%100);
		}
		outtextxy(100,50,"So");
		sprintf(v,"%s",name);
		outtextxy(150,50,v);
		outtextxy(100,100,"Shall we start? (PRESS Y)");
		getch();
		cleardevice();
		outtextxy(10,50,"Here is the List of");
		sprintf(v,"%d",l);
		outtextxy(330,50,v);
		outtextxy(360,50,"random numbers:");
		co_x=0;
		for(i=1;i<=l;i++)
		{
			co_x+=80;
			sprintf(v,"%d",a[i]);
			outtextxy(co_x,150,v);
		}
		outtextxy(40,200,"Memorize, before I sweep them all.");
		getch();
		delay(13000);
		cleardevice();
		outtextxy(250,200,"TIME UP !");
		getch();
		delay(700);
		cleardevice();
		outtextxy(65,300,"[PRESS ANY KEY TO PROCEED]");
		getch();
		cleardevice();
		outtextxy(20,50,"Now add the given numbers to them:");
		co_x=20;
		for(i=0;i<l;i++)
		{
			sprintf(v,"+%d",rand()%l);
			outtextxy(co_x,100,v);
			co_x+=80;
		}
		outtextxy(70,200,"[PRESS ANY KEY TO PROCEED]");
		getch();
		cleardevice();
		pos=(rand()%l);
		outtextxy(30,200,"Which number was on Position");
		sprintf(v,"%d?",pos);
		outtextxy(550,200,v);
		scanf("%d",&num);
		if(num==a[pos])
		{
			cleardevice();
			outtextxy(150,200,"Absolutely Right!");
			fs+=5000;
			star+=1;
			delay(1500);
			cleardevice();
			outtextxy(20,200,"Your Final score is now:");
			sprintf(v,"%d",fs);
			outtextxy(430,200,v);
			delay(2500);
			clrscr();
			outtextxy(50,200,"Now add");
			sprintf(v,"%d",rand()%8);
			outtextxy(210,200,v);
			outtextxy(250,200,"to it");
			outtextxy(80,300,"[PRESS ANY KEY TO PROCEED]");
			getch();
			cleardevice();
			pos=rand()%l;
			outtextxy(50,220,"Which number was on position");
			sprintf(v,"%d?",pos);
			outtextxy(560,220,v);
			scanf("%d",&num);
			if(num==a[pos])
			{
				clrscr();
				fs+=5000;
				star+=1;
				outtextxy(220,200,"Right");
				sprintf(v,"%s!",name);
				outtextxy(320,200,v);
				outtextxy(80,250,"Your Final score is now:");
				sprintf(v,"%d",fs);
				outtextxy(480,250,v);
			}
			else
			{
				getch();
				cleardevice();
				outtextxy(80,250,"Your Final score is now:");
				sprintf(v,"%d",fs);
				outtextxy(480,250,v);
			}
		}//EOIF 786:17

		else
		{
			getch();
			cleardevice();
			setfillstyle(SOLID_FILL,YELLOW);
			fillellipse(90,140,50,50);
			setfillstyle(SOLID_FILL,9);
			fillellipse(70,120,10,10);
			fillellipse(110,120,10,10);
			delay(1000);
			for(i=80,j=170;i<120,j>150;i++,j--)
			{
				delay(10);
				setcolor(4);
				line(80,170,i,j);
			}
			outtextxy(50,100,"Hmmmm...");
			outtextxy(50,150,"Seems u've ran out of memory.");
			delay(2300);
			getch();
			cleardevice();
			outtextxy(150,200,"Anyways.. Leave it...");
			delay(2000);
			cleardevice();
			outtextxy(80,250,"Let me ask you aother question.");
			delay(2000);
			getch();
			cleardevice();
			outtextxy(80,150,"How many numbers were there?");
			outtextxy(80,250,"I hope you'll be able to answer");
			outtextxy(220,300,"THIS at least.");
			scanf("%d",&tn);
			if(tn==l)
			{
				cleardevice();
				outtextxy(70,200,"Thank God. You got this right.");
				fs+=3000;
				star+=1;
				setfillstyle(SOLID_FILL,YELLOW);
				fillellipse(100,140,50,50);
				setfillstyle(SOLID_FILL,9);
				fillellipse(80,120,10,10);
				fillellipse(120,120,10,10);
				delay(1000);
				for(i=180;i<360;i++)
				{
					delay(10);
					setcolor(4);
					arc(100,150,180,i,30);
				}
				outtextxy(70,150,"Your Final score is now:");
				sprintf(v,"%d",fs);
				outtextxy(480,150,v);
				delay(600);
			}
			else
			{
				getch();
				cleardevice();
				outtextxy(100,150,"I'm sorry");
				sprintf(v,"%s",name);
				outtextxy(250,150,v);
				outtextxy(200,250,"You are terrible.");
			}
		}//EOELSE 833:17
		outtextxy(110,30,":::: S C O R E   B O A R D ::::");
		outtextxy(190,150,"FINAL SCORES:");
		sprintf(v,"%ld", fs);
		outtextxy(450,150,v);
		outtextxy(190,260,"STARS COLLECTED:");
		sprintf(v,"%d",star);
		outtextxy(520,260,v);
		/*for(s=0;s<star;s++)
		{
			printf("\a* ");
		}
		printf(" (%d)",star);*/
		cleardevice();
		setfillstyle(SOLID_FILL,YELLOW);
		fillellipse(100,140,50,50);
		setfillstyle(SOLID_FILL,9);
		fillellipse(80,120,10,10);
		fillellipse(120,120,10,10);
		delay(1000);
		for(i=0;i<180;i++)
		{
			delay(10);
			setcolor(4);
			arc(100,170,0,i,20);
		}
		if(fs<=45000)
		{
			sprintf(v,"%s",name);
			outtextxy(0,150,v);
			outtextxy(30,200,"THIS LEVEL IS NOT SO EASY...!!");
			outtextxy(100,300,".THAT WAS REALLY POOR.");
		}
		else if(fs>45000 && fs<=60000)
		{
			outtextxy(10,100,"NICE ..");
			sprintf(v,"%s",name);
			outtextxy(120,100,v);
			outtextxy(40,250,"BUT YOU STILL NEED TO PRACTISE.");
		}
		else if(fs>60000)
		{
			cleardevice();
			setfillstyle(SOLID_FILL,YELLOW);
			fillellipse(90,140,50,50);
			setfillstyle(SOLID_FILL,9);
			fillellipse(70,120,10,10);
			fillellipse(110,120,10,10);
			delay(1000);
			for(i=80,j=170;i<120,j>150;i++,j--)
			{
				delay(10);
				setcolor(4);
				line(80,170,i,j);
			}
			setfillstyle(SOLID_FILL,YELLOW);
			fillellipse(100,140,50,50);
			setfillstyle(SOLID_FILL,9);
			fillellipse(80,120,10,10);
			fillellipse(120,120,10,10);
			delay(1000);
			for(i=180;i<360;i++)
			{
				delay(10);
				setcolor(4);
				arc(100,150,180,i,30);
			}
			outtextxy(10,100,"BRAVO ..!!");
			sprintf(v,"%s,",name);
			outtextxy(180,100,v);
			outtextxy(100,250,"YOU'RE ELLIGIBLE FOR");
			outtextxy(150,300,"THE NEXT LEVEL");
			outtextxy(10,400,"Do you want to try next level? (y/n)");
			ans=getche();
			if(ans=='y' || ans=='Y')
			{
				level5();
			}
		}
	}//End of IF (outermost) at 20:25.
	else
	{
		cleardevice();
		outtextxy(150,10,"::LEVEL 4 IS LOCKED::");
		if(fs==0)
		{
			outtextxy(35,100,"Please play LEVEL 1 first and earn");
			outtextxy(25,150,"suffecient points to unlock this level.");
			outtextxy(0,250,"So");
			sprintf(v,"%s",name);
			outtextxy(60,250,v);
			outtextxy(60,300,"Shall we start with LEVEL 1? (y/n).");
			ch=getche();
			if(ch=='y' || ch=='Y')
			{
				level1(); //Calling the function void level1();
			}
		}
		else
		{
			cleardevice();
			outtextxy(50,50,"You still need more than");
			sprintf(v,"%d",(10000-fs));
			outtextxy(460,50,v);
			outtextxy(100,100,"points to unlock this level.");
			fflush(stdin);
			outtextxy(120,200,"Press A to retry LEVEL 1");
			outtextxy(120,250,"Press B to retry LEVEL 2");
			outtextxy(120,300,"Press C to retry LEVEL 3");
			ch=getche();
			switch(ch)
			{
				case 'a':
				level1();
				break;

				case 'b':
				level2();
				break;

				case 'c':
				level3();
				break;

				default:
				cleardevice();
				outtextxy(180,200,"INVALID INPUT !");
				break;
			}
		} //EOELSE 933:17
	} //EOELSE 915:9

/*gotoxy(10,50);
printf("\n\n\t\tRetry this level (y/n)?");
ch=getche();
}//End of DO
while(ch=='y' || ch=='Y');*/
getch();
}//End of Fn Level4

void level5()
{
	cleardevice();
	count=0;
	if(fs>=0) //UNLOCK LEVEL 5
	{
		setcolor(14);
		for(i=0;i<400;i++)
		{
			delay(5);
			arc(300,250,0+i,10+i,100);
			arc(300,250,0-i,10-i,80);
		}
		setcolor(5);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		outtextxy(268,200,":LEVEL 5:");
		setcolor(4);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
		outtextxy(230,230,"LOADED");
		setcolor(GREEN);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		outtextxy(250,260,"Press any key");
		getch();
		cleardevice();
		settextstyle(BOLD_FONT,HORIZ_DIR,2);
		randomize();
		outtextxy(120,50,"Very well played");
		setcolor(4);
		sprintf(v,"%s",name);
		outtextxy(400,50,v);
		setcolor(9);
		outtextxy(120,100,"You're on the Last Level.");
		fs+=5000;
		setcolor(13);
		outtextxy(60,200,".I give you 5000 points for this.");
		setcolor(14);
		outtextxy(80,250,"Your Final score is now:");
		setcolor(6);
		sprintf(v,"%d",fs);
		outtextxy(480,250,v);
		delay(6000);
		cleardevice();
		setcolor(13);
		outtextxy(100,100,"Lets see how you'll do now.");
		setcolor(2);
		outtextxy(50,150,"WISH YOU ALL THE BEST");
		setcolor(6);
		sprintf(v,"%s!",name);
		outtextxy(480,150,v);
		setcolor(9);
		outtextxy(80,250,"[PRESS ANY KEY TO PROCEED]");
		getch();
		cleardevice();
		//do
		//{
		l=(random(8));
		if(l<=6)
		{
			l=(random(8));
		}
		setcolor(1);
		outtextxy(20,150,"I'll give you");
		setcolor(10);
		sprintf(v,"%d",l);
		outtextxy(230,150,v);
		setcolor(1);
		outtextxy(280,150,"Random numbers...");
		setcolor(4);
		outtextxy(100,200,"You'll 've to memorize them");
		setcolor(6);
		outtextxy(50,300,"But I'll give you only few seconds");
		outtextxy(250,350,"for this.");
		getch();
		for(i=1;i<=l;i++)
		{
			a[i]=("%d\t", rand()%500);
		}
		delay(1500);
		cleardevice();
		setcolor(6);
		outtextxy(50,100,"So");
		setcolor(5);
		sprintf(v,"%s,",name);
		outtextxy(100,100,v);
		setcolor(2);
		outtextxy(120,150,"Shall we start? (PRESS Y)");
		getche();
		cleardevice();
		setcolor(5);
		outtextxy(10,50,"Here is the List of");
		setcolor(2);
		sprintf(v,"%d",l);
		outtextxy(320,50,v);
		setcolor(5);
		outtextxy(350,50,"random numbers:");
		setcolor(1);
		outtextxy(40,100,"Memorize, before I sweep them all.");
		co_x=10;
		setcolor(4);
		for(i=1;i<=l;i++)
		{
			sprintf(v,"%d",a[i]);
			outtextxy(co_x,200,v);
			co_x+=80;
		}
		delay(10000);
		cleardevice();
		setcolor(1);
		outtextxy(250,200,"TIME UP !");
		delay(700);
		setcolor(2);
		outtextxy(60,300,"[PRESS ANY KEY TO PROCEED]");
		getch();
		cleardevice();
		setcolor(YELLOW);
		outtextxy(20,50,"Now add the given numbers to them:");
		co_x=10;
		setcolor(4);
		for(i=0;i<l;i++)
		{
			sprintf(v,"%d",rand()%l);
			outtextxy(co_x,200,v);
			co_x+=80;
		}
		getch();
		setcolor(6);
		outtextxy(60,300,"[PRESS ANY KEY TO PROCEED]");
		getche();
		cleardevice();
		pos=(rand()%l);
		outtextxy(30,200,"Which number was on Position");
		setcolor(1);
		sprintf(v,"%d?",pos);
		outtextxy(550,200,v);
		scanf("%d",&num);
		if(num==a[pos])
		{
			cleardevice();
			setcolor(2);
			outtextxy(150,200,"Absolutely Right.");
			fs+=6000;
			star+=3;
			delay(1500);
			cleardevice();
			setcolor(1);
			outtextxy(20,200,"Your Final score is now:");
			setcolor(4);
			sprintf(v,"%d",fs);
			outtextxy(430,200,v);
			delay(2500);
			cleardevice();
			setcolor(3);
			outtextxy(50,200,"Now add");
			setcolor(6);
			sprintf(v,"%d",rand()%15);
			outtextxy(210,200,v);
			setcolor(3);
			outtextxy(250,200,"to it.");
			setcolor(4);
			outtextxy(80,300,"[PRESS ANY KEY TO PROCEED]");
			getch();
			cleardevice();
			pos=rand()%l;
			setcolor(1);
			outtextxy(50,220,"Which number was on position");
			setcolor(4);
			sprintf(v,"%d",pos);
			outtextxy(560,220,v);
			scanf("%d",&num);
			if(num==a[pos])
			{
				fs+=6000;
				star+=4;
				setcolor(2);
				getch();
				cleardevice();
				outtextxy(220,200,"Right");
				sprintf(v,"%s.",name);
				outtextxy(320,200,v);
				setcolor(5);
				getch();
				outtextxy(80,250,"Your Final score is now:");
				setcolor(6);
				sprintf(v,"%d",fs);
				outtextxy(480,250,v);
			}
			else
			{
				getch();
				cleardevice();
				setcolor(6);
				getch();
				outtextxy(80,250,"Your Final score is now:");
				setcolor(5);
				sprintf(v,"%d",fs);
				outtextxy(480,250,v);
			}
			getch();

		}//EOIF 1064:17
		else //ELSE part of IF at 85:57
		{
			setfillstyle(SOLID_FILL,YELLOW);
			fillellipse(90,140,50,50);
			setfillstyle(SOLID_FILL,9);
			fillellipse(70,120,10,10);
			fillellipse(110,120,10,10);
			delay(1000);
			for(i=80,j=170;i<120,j>150;i++,j--)
			{
				delay(10);
				setcolor(4);
				line(80,170,i,j);
			}
			delay(1000);
			setcolor(4);
			outtextxy(50,250,"Hmmmm...");
			setcolor(1);
			outtextxy(50,300,"Seems u've ran out of memory.");
			delay(2300);
			cleardevice();
			setcolor(5);
			outtextxy(150,200,"Anyways.. Leave it...");
			delay(2000);
			cleardevice();
			setcolor(6);
			outtextxy(80,250,"Let me ask you aother question.");
			delay(2000);
			cleardevice();
			setcolor(2);
			outtextxy(80,150,"How many numbers were there?");
			setcolor(1);
			outtextxy(80,250,"I hope you'll be able to answer");
			outtextxy(220,300,"THIS at least.");
			scanf("%d",&tn);
			cleardevice();
			if(tn==l)
			{
				cleardevice();
				setfillstyle(SOLID_FILL,YELLOW);
				fillellipse(100,140,50,50);
				setfillstyle(SOLID_FILL,9);
				fillellipse(80,120,10,10);
				fillellipse(120,120,10,10);
				delay(1000);
				for(i=180;i<360;i++)
				{
					delay(10);
					setcolor(4);
					arc(100,150,180,i,30);
				}
				setcolor(2);
				outtextxy(70,250,"Thank God. You got this right.");
				fs+=4000;
				star+=1;
				setcolor(1);
				outtextxy(70,300,"Your Final score is now:");
				setcolor(4);
				sprintf(v,"%d",fs);
				outtextxy(480,300,v);
				delay(600);
			}
			else
			{
				cleardevice();
				setfillstyle(SOLID_FILL,YELLOW);
				fillellipse(100,140,50,50);
				setfillstyle(SOLID_FILL,9);
				fillellipse(80,120,10,10);
				fillellipse(120,120,10,10);
				delay(1000);
				for(i=0;i<180;i++)
				{
					delay(10);
					setcolor(4);
					arc(100,170,0,i,20);
				}
				setcolor(3);
				outtextxy(100,250,"I'm sorry");
				setcolor(5);
				sprintf(v,"%s",name);
				outtextxy(250,250,v);
				setcolor(6);
				outtextxy(200,300,"You are terrible.");
			}
		} //EOELSE 1109:17
		getch();
		cleardevice();
		setcolor(2);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		outtextxy(110,30,":::S C O R E   B O A R D:::");
		setcolor(4);
		outtextxy(190,150,"FINAL SCORES:");
		sprintf(v,"%ld", fs);
		outtextxy(420,150,v);
		outtextxy(190,260,"STARS COLLECTED:");
		sprintf(v,"%d",star);
		outtextxy(490,260,v);
		getch();
		/*for(s=0;s<star;s++)
		{
			printf("\a* ");
		}
		printf(" (%d)",star);*/
		if(fs<=60000)
		{
				cleardevice();
				setfillstyle(SOLID_FILL,YELLOW);
				fillellipse(100,140,50,50);
				setfillstyle(SOLID_FILL,9);
				fillellipse(80,120,10,10);
				fillellipse(120,120,10,10);
				delay(1000);
				for(i=0;i<180;i++)
				{
					delay(10);
					setcolor(4);
					arc(100,170,0,i,20);
				}
				setcolor(6);
				sprintf(v,"%s",name);
				outtextxy(0,200,v);
				setcolor(1);
				outtextxy(30,250,"THIS LEVEL IS NOT SO EASY..!!");
				setcolor(3);
				outtextxy(100,300,"THAT WAS NOT SATISFACTORY.");
				getch();
		}
		else if(fs>60000 && fs<80000)
		{
			setfillstyle(SOLID_FILL,YELLOW);
			fillellipse(90,140,50,50);
			setfillstyle(SOLID_FILL,9);
			fillellipse(70,120,10,10);
			fillellipse(110,120,10,10);
			delay(1000);
			for(i=80,j=170;i<120,j>150;i++,j--)
			{
				delay(10);
				setcolor(4);
				line(80,170,i,j);
			}
			setcolor(1);
			outtextxy(10,200,"NICE");
			setcolor(4);
			sprintf(v,"%s..!!",name);
			setcolor(2);
			outtextxy(40,250,"BUT YOU STILL NEED TO PRACTISE.");
			settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
			setcolor(6);
			outtextxy(0,350,"I'LL ADVICE YOU TO PLAY WITH MORE NUMBERS.");
		}
		else if(fs>=80000)
		{
			setfillstyle(SOLID_FILL,YELLOW);
			fillellipse(100,140,50,50);
			setfillstyle(SOLID_FILL,9);
			fillellipse(80,120,10,10);
			fillellipse(120,120,10,10);
			delay(1000);
			for(i=180;i<360;i++)
			{
				delay(10);
				setcolor(4);
				arc(100,150,180,i,30);
			}
			setcolor(4);
			outtextxy(10,200,"BRAVO");
			setcolor(1);
			sprintf(v,"%s",name);
			outtextxy(150,200,v);
			settextstyle(BOLD_FONT,HORIZ_DIR,5);
			setcolor(2);
			outtextxy(0,250,"YOU PROVED TO BE");
			outtextxy(180,350,"A GENIUS.");
			getch();

		}
	} //EOIF 978:9
	else
	{
		cleardevice();
		setcolor(4);
		outtextxy(150,10,"::LEVEL 5 IS LOCKED::");
		if(fs==0)
		{
			setcolor(2);
			outtextxy(35,100,"Please play");
			setcolor(5);
			outtextxy(240,100,"LEVEL 1");
			setcolor(2);
			outtextxy(390,100,"first and earn");
			outtextxy(25,150,"suffecient points to unlock this level.");
			setcolor(1);
			outtextxy(0,250,"So");
			setcolor(4);
			sprintf(v,"%s",name);
			outtextxy(60,250,v);
			setcolor(6);
			outtextxy(60,300,"Shall we start with Level 1? (y/n).");
			ch=getche();
			exit(0);
			if(ch=='y' || ch=='Y')
			{
				level1(); //Calling the function void level1();
			}
		}
		else
		{
			setcolor(1);
			outtextxy(50,50,"You still need more than");
			setcolor(4);
			sprintf(v,"%ld",(nl-fs));
			outtextxy(500,50,v);
			setcolor(1);
			outtextxy(100,100,"points to unlock this level.");
			setcolor(8);
			settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
			outtextxy(120,200,"Press A to retry Level 1.");
			outtextxy(120,250,"Press B to retry Level 2.");
			outtextxy(120,300,"Press C to retry Level 3.");
			outtextxy(120,350,"Press D to retry Level 4.");
			ch=getche();
			switch(ch)
			{
				  case 'a':
				  level1();
				  break;

				  case 'b':
				  level2();
				  break;

				  case 'c':
				  level3();
				  break;

				  case 'd':
				  level4();
				  break;

				  default:
				  cleardevice();
				  setcolor(4);
				  settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
				  outtextxy(80,200,"INVALID INPUT !");
				  break;
			}
		} //EOELSE 1197:17
	} //EOELSE (MAIN-ELSE) 1179:9

/*gotoxy(10,50);
printf("\n\n\t\tRetry this level (y/n)?");
ch=getche();
}//End of DO
while(ch=='y' || ch=='Y');*/
getch();
}//End of Fn Level5

void details()
{
	cleardevice();
	setcolor(13);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
	outtextxy(0,50,"THIS GAME IS RESEARCHED,PROGRAMMED");
	outtextxy(0,100," & DEVELOPED BY:");
	setcolor(4);
	outtextxy(300,100,"TANZEEL MIRZA.");
	setcolor(1);
	outtextxy(0,150,"FOR ANY QUERRIES OR SUGGESTIONS,");
	outtextxy(0,200,"PLEASE CONTACT THE PROGRAMMER.");
	outtextxy(0,250,"THE PROGRAMMER IS REACHABLE AT:");
	setcolor(4);
	outtextxy(0,300,"tmtanzeel9@gmail.com");
	getch();
}//End of Fn details
void levelc1()
{
	i=0,sum_Ca=0,num=0;
	cleardevice();
	outtextxy(60,200,"::SUM UP ALL THE NUMBERS");
	outtextxy(150,250,"BEING DISPLAYED::");
	delay(1500);
	for(i=0;i<5;i++)
	{
	randomize();
	delay(2000);
	cleardevice();
	num=rand()%10;
	sum_Ca+=num;
	setcolor(i+1);
	sprintf(v,"%d",num);
	outtextxy(rand()%600,rand()%400,v);
	}
	delay(2000);
	cleardevice();
	outtextxy(50,100,"WHAT IS THE SUM TOTAL ?");
	scanf("%f",&tell_me);
	cleardevice();
	if(tell_me==sum_Ca)
	{
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
	setcolor(2);
	outtextxy(20,200,"Yes! You're absolutely");
	outtextxy(250,250,"right");
	}
	else
	{
	setcolor(4);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
	outtextxy(80,150,"No! You're wrong");
	outtextxy(60,200,"The right answer is: ");
	setcolor(2);
	sprintf(v,"%f",sum_Ca);
	outtextxy(130,250,v);
	}
}

void levelc2()
{
	i=0,sum_Ca=0,num=0;
	cleardevice();
	outtextxy(60,200,"::SUM UP ALL THE NUMBERS");
	outtextxy(150,250,"BEING DISPLAYED::");
	delay(1500);
	for(i=0;i<rand()%10;i++)
	{
	randomize();
	delay(1500);
	cleardevice();
	num=rand()%20;
	sum_Ca+=num;
	setcolor(i+1);
	sprintf(v,"%d",num);
	outtextxy(rand()%600,rand()%400,v);
	}
	delay(1500);
	cleardevice();
	outtextxy(50,100,"WHAT IS THE SUM TOTAL ?");
	scanf("%f",&tell_me);
	cleardevice();
	if(tell_me==sum_Ca)
	{
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
	setcolor(2);
	outtextxy(20,200,"Yes! You're absolutely");
	outtextxy(250,250,"right");
	}
	else
	{
	setcolor(4);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
	outtextxy(80,150,"No! You're wrong");
	outtextxy(60,200,"The right answer is: ");
	setcolor(2);
	sprintf(v,"%f",sum_Ca);
	outtextxy(130,250,v);
	}
}

void levelc3()
{
	i=0,sum_Ca=0,num=0;
	cleardevice();
	outtextxy(200,200,"::COMPUTE::");
	randomize();
	delay(2000);
	cleardevice();
	num=rand()%50;
	sum_Ca+=num;
	setcolor(i+1);
	sprintf(v,"%d",num);
	outtextxy(rand()%500,rand()%400,v);

	delay(2000);
	cleardevice();
	num=rand()%10;
	sum_Ca*=num;
	setcolor(i+1);
	sprintf(v,"X %d",num);
	outtextxy(rand()%500,rand()%400,v);

	delay(2000);
	cleardevice();
	num=rand()%100;
	sum_Ca+=num;
	setcolor(i+1);
	sprintf(v,"+ %d",num);
	outtextxy(rand()%500,rand()%400,v);

	delay(2000);
	cleardevice();
	outtextxy(50,100,"WHAT IS THE SUM TOTAL ?");
	scanf("%f",&tell_me);
	cleardevice();
	if(tell_me==sum_Ca)
	{
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
	setcolor(2);
	outtextxy(20,100,"Yes! You're absolutely");
	outtextxy(100,150,"right");
	setcolor(1);
	settextstyle(SMALL_FONT,HORIZ_DIR,10);
	outtextxy(100,250,"I GUESS, YOU OWN A");
	outtextxy(50,300,"CALCULATOR BY YOUR SIDE!");
	}
	else
	{
	setcolor(4);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
	outtextxy(80,150,"No! You're wrong");
	outtextxy(60,200,"The right answer is: ");
	setcolor(2);
	sprintf(v,"%f",sum_Ca);
	outtextxy(130,250,v);
	}
}

void levelc4()
{
	i=0,sum_Ca=0,num=0;
	cleardevice();
	outtextxy(200,200,"::COMPUTE::");
	randomize();
	delay(3000);
	cleardevice();
	num=rand()%50;
	sum_Ca+=num;
	setcolor(i+1);
	sprintf(v,"%d",num);
	outtextxy(rand()%500,rand()%400,v);

	delay(3000);
	cleardevice();
	num=rand()%10;
	sum_Ca*=num;
	setcolor(i+1);
	sprintf(v,"X %d",num);
	outtextxy(rand()%500,rand()%400,v);

	delay(3000);
	cleardevice();
	num=rand()%10;
	sum_Ca/=num;
	setcolor(i+1);
	sprintf(v,"/ %d",num);
	outtextxy(rand()%500,rand()%400,v);

	delay(3000);
	cleardevice();
	num=rand()%100;
	sum_Ca+=num;
	setcolor(i+1);
	sprintf(v,"+ %d",num);
	outtextxy(rand()%500,rand()%400,v);

	delay(3000);
	cleardevice();
	num=rand()%100;
	sum_Ca*=num;
	setcolor(i+1);
	sprintf(v,"X %d",num);
	outtextxy(rand()%500,rand()%400,v);

	delay(3000);
	cleardevice();
	num=rand()%100;
	sum_Ca-=num;
	setcolor(i+1);
	sprintf(v,"- %d",num);
	outtextxy(rand()%500,rand()%400,v);

	delay(3000);
	cleardevice();
	outtextxy(50,100,"YOUR CALCULATION SAYS ?");
	scanf("%f",&tell_me);
	cleardevice();
	if(tell_me==sum_Ca)
	{
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
	setcolor(2);
	outtextxy(20,200,"Yes! You're absolutely");
	outtextxy(250,250,"right");
	}
	else
	{
	setcolor(4);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
	outtextxy(80,150,"No! You're wrong");
	outtextxy(60,200,"The right answer is: ");
	setcolor(2);
	sprintf(v,"%f",sum_Ca);
	outtextxy(130,250,v);
	}
}
