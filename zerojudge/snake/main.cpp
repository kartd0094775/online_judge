#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<ctime>
#include<windows.h>
#define WIDE 50
#define HIGH 20

using namespace std;

int x=0,y=0;
void menu1();
void menu2();
void game();
void rule();
void leave();
void cls();

int map[100][100]={0};
int snake1[500][2]={0};
int snake2[500][2]={0};
int SLONG1=10,SLONG2=10,DIR=3,DIR2=7;//DIR �L�X������,slong �D������
int start=1;
int result1=0;
int result2=0;
void gotoxy(int,int);//�����V
void setColor(int);//�ܦ⾹
void print(int,int);//�L�X���,�D
void obst(void);
int clean(void);
int gameover(void);

int main()
{
      cout<<"##############################"<<endl;
      cout<<"#                            #"<<endl;
      cout<<"#                            #"<<endl;
      cout<<"#                            #"<<endl;
      cout<<"#                            #"<<endl;
      cout<<"#      �w��i�J�D�Y�D        #"<<endl;
      cout<<"#                            #"<<endl;
      cout<<"#                            #"<<endl;
      cout<<"#       1. �i�J�C��          #"<<endl;
      cout<<"#                            #"<<endl;
      cout<<"#                            #"<<endl;
      cout<<"#       2. �C���W�h          #"<<endl;
      cout<<"#                            #"<<endl;
      cout<<"#                            #"<<endl;
      cout<<"#       3. ���}�C��          #"<<endl;
      cout<<"#                            #"<<endl;
      cout<<"#                            #"<<endl;
      cout<<"#                            #"<<endl;
      cout<<"#                            #"<<endl;
      cout<<"#                            #"<<endl;
      cout<<"#                            #"<<endl;
      cout<<"#                            #"<<endl;
      cout<<"#                            #"<<endl;
      cout<<"#                            #"<<endl;
      cout<<"#                            #"<<endl;
      cout<<"##############################"<<endl;

      cin>>x;

      menu1();

      system ("pause");
      return 0;
}

void menu1()
{
     switch(x)
     {
        case 1:
        cls();
        game();
        break;

        case 2:
        cls();
        rule();
        break;

        case 3:
        cls();
        leave();
        break;
     }
}

void  cls()
{
      getch();
      system("cls");
}

void game()
{


	int i,j,k;

	char con;//controller
	char con2;
	srand(time(NULL));

	for(j=0;j<HIGH;j++)//���
		{
			for(i=0;i<WIDE;i++)
				{
				if(i==0||i==WIDE-1||j==0||j==HIGH-1)
				map[i][j]=2;
				}
		}

	for(i=0;i<SLONG1;i++)//�D1
	{
		snake1[i][0]=10-i;
		snake1[i][1]=HIGH/3;
		map[10-i][HIGH/3]=1;
	}
		for(k=0;k<SLONG2;k++) //�D2
	{
		snake2[k][0]=10-k;
		snake2[k][1]=HIGH/3*2;
		map[10-k][HIGH/3*2]=1;
	}

	for(j=0;j<HIGH;j++)//�L�X �D ���
		{
			for(i=0;i<WIDE;i++)
				{
					print(i,j);
				}
		}
	while(start)
	{

		map[snake1[0][0]][snake1[0][1]]=1;//����
		print(snake1[0][0],snake1[0][1]);

		map[snake2[0][0]][snake2[0][1]]=1;
		print(snake2[0][0],snake2[0][1]);

		map[snake1[SLONG1-1][0]][snake1[SLONG1-1][1]]=0;
		print(snake1[SLONG1-1][0],snake1[SLONG1-1][1]);

		map[snake2[SLONG2-1][0]][snake2[SLONG2-1][1]]=0;
		print(snake2[SLONG2-1][0],snake2[SLONG2-1][1]);

		for(j=SLONG1-1;j>0;j--)
		{
			snake1[j][0]=snake1[j-1][0];
			snake1[j][1]=snake1[j-1][1];

		}

		for(k=SLONG2-1;k>0;k--)
		{
			snake2[k][0]=snake2[k-1][0];
			snake2[k][1]=snake2[k-1][1];

		}

		switch (DIR)
		{

			case 1:
				snake1[0][1]--;//snake1 [�D����s��][x,y�y�Э�] �U
				break;

			case 2:
				snake1[0][0]--;//��
				break;

			case 3:
				snake1[0][0]++;//�S
				break;

			case 4:
				snake1[0][1]++;	//�W
				break;
		}

		switch (DIR2)
		{

			case 5:
				snake2[0][1]--;
				break;

			case 6:
				snake2[0][0]--;
				break;

			case 7:
				snake2[0][0]++;
				break;

			case 8:
				snake2[0][1]++;
				break;
		}
		if(snake1[0][1]==HIGH-1||snake1[0][0]==WIDE-1||snake1[0][1]==0||snake1[0][0]==0)
		{
			start=0;
			result1=1;
		}
		if(snake2[0][1]==HIGH-1||snake2[0][0]==WIDE-1||snake2[0][1]==0||snake2[0][0]==0)
		{
			start=0;
			result2=1;
		}


		map[snake1[0][0]][snake1[0][1]]=3;
		print(snake1[0][0],snake1[0][1]);

		map[snake2[0][0]][snake2[0][1]]=3;
		print(snake2[0][0],snake2[0][1]);


		for(int i=1;i<=30;i++)
			{
			if(kbhit())//��L����
			{

					con=getch();

					switch (con)
					{
						case 72:
							if(DIR!=4)
								DIR=1;
							break;
						case 75:
							if(DIR!=3)
								DIR=2;
							break;
						case 77:
							if(DIR!=2)
								DIR=3;
							break;
						case 80:
							if(DIR!=1)
								DIR=4;
							break;
						case 119:
							if(DIR2!=8)
								DIR2=5;
							break;
						case 97:
							if(DIR2!=7)
								DIR2=6;
							break;
						case 100:
							if(DIR2!=6)
								DIR2=7;
							break;
						case 115:
							if(DIR2!=5)
								DIR2=8;
							break;
					}


			}
			Sleep(5);
			}

	}

	if(result1==1&&result2==1)
	{
		cout << endl << endl << "                    ����" ;
	}
	else if(result1==1)
	{
		cout << endl << endl << "                    Player 1 Win!!" ;
	}
	else
	{
		cout << endl << endl << "                    Player 2 Win!!" ;
	}
	}

void rule()
{
     cout<<"\n\n";
     cout<<"1. �W�U���k ENTER �䬰 Player1 ����AWASD �ť��䬰 Player2 ����"<<endl;
     cout<<"2. �䤤�@���D�I������Y�����ӧQ"<<endl;
     cout<<"3. �C���D�@�����`�A�@�`���@���R"<<endl;
     cout<<"4. ��l�u�g�����ɸ`��-1"<<endl;
     cout<<"5. ��I���誺�D�ɡA�ۨ��`��-1"<<endl;
     cout<<"6. �ۨ��`��=0 �ɧY�����ӧQ"<<endl;
     cout<<"��J1 �}�l����"<<endl;
     cout<<"��J2 ���}�C��"<<endl<<endl;

     cin>>y;

     menu2();
}

void leave()
{
     exit (0);
}

void menu2()
{
     switch(y)
     {
        case 1:
        cls();
        game();
        break;

        case 2:
        cls();
        leave();
        break;
     }
}

void print(int i,int j)//�ϫ�����
{
		gotoxy(i,j);
		if(map[i][j]==0)
			cout<<" ";
		if(map[i][j]==1)
			cout<<"*";
		if(map[i][j]==2)
			cout<<"#";
		if(map[i][j]==3)
			cout<<"@";

}

void gotoxy(int xpos,int ypos)//�y�Ф�
{
  COORD scrn;
  HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
  scrn.X = xpos; scrn.Y = ypos;
  SetConsoleCursorPosition(hOuput,scrn);
}

void setColor(int color)
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole,color);
}
