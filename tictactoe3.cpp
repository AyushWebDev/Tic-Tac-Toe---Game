#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;



void printBoard(char ar[3][3])
{
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<ar[i][j]<<" ";
            }
                cout<<endl;
        }
}

void checkUserWin(char ar[3][3])
{
    int counter=0;
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(ar[i][j]=='X')
                counter++;
        }
        if(counter==3)
        {
            printBoard(ar);
            cout<<"YOU WON";
            exit(0);
        }
        counter=0;
    }
    counter=0;
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(ar[j][i]=='X')
                counter++;
        }
        if(counter==3)
        {
            printBoard(ar);
            cout<<"YOU WON";
            exit(0);
        }
         counter=0;
    }
    counter=0;

     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                if(ar[j][i]=='X')
                counter++;
            }

        }
    }
        if(counter==3)
        {
            printBoard(ar);
            cout<<"YOU WON";
            exit(0);
        }
        counter=0;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if((i+j)==2)
            {
                if(ar[j][i]=='X')
                counter++;
            }

        }
    }
        if(counter==3)
        {
            printBoard(ar);
            cout<<"YOU WON";
            exit(0);
        }
        counter=0;

}

void checkCompWin(char ar[3][3])
{
    int counter=0;
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(ar[i][j]=='0')
                counter++;
        }
        if(counter==3)
        {
            printBoard(ar);
            cout<<"COMPUTER WON";
            exit(0);
        }
        counter=0;
    }
    counter=0;
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(ar[j][i]=='0')
                counter++;
        }
        if(counter==3)
        {
            printBoard(ar);
            cout<<"COMPUTER WON";
            exit(0);
        }
         counter=0;
    }
    counter=0;

     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                if(ar[j][i]=='0')
                counter++;
            }

        }
    }
        if(counter==3)
        {
            printBoard(ar);
            cout<<"COMPUTER WON";
            exit(0);
        }
        counter=0;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if((i+j)==2)
            {
                if(ar[j][i]=='0')
                counter++;
            }

        }
    }
        if(counter==3)
        {
            printBoard(ar);
            cout<<"COMPUTER WON";
            exit(0);
        }
        counter=0;

}

int over(char ar[3][3])
{
    int c=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(ar[i][j]=='-')
            {
                c=0;
                break;
            }

        }
    }
    return c;
}

int playerChance(char ar[3][3],int n)
{
    switch(n)
        {
        case 1:
            if(ar[0][0]=='-'){
                ar[0][0]='X';

                return 1;
                }
            else{
                cout<<"\nenter correct input\n";
                return 0;
                }
            break;

        case 2:
            if(ar[0][1]=='-'){
            ar[0][1]='X';

            return 1;
            }
            else{
                cout<<"\nenter correct input\n";
                return 0;
                }
            break;

        case 3:
            if(ar[0][2]=='-'){
            ar[0][2]='X';

            return 1;
            }
            break;

        case 4:
            if(ar[1][0]=='-'){
            ar[1][0]='X';

            return 1;
            }
            else{
                cout<<"\nenter correct input\n";
                return 0;
                }
            break;

        case 5:
            if(ar[1][1]=='-'){
            ar[1][1]='X';

            return 1;
            }
            else{
                cout<<"\nenter correct input\n";
                return 0;
                }
            break;

        case 6:
            if(ar[1][2]=='-'){
            ar[1][2]='X';

            return 1;
            }
            else{
                cout<<"\nenter correct input\n";
                return 0;
                }
            break;

        case 7:
            if(ar[2][0]=='-'){
            ar[2][0]='X';

            return 1;
            }
            else{
                cout<<"\nenter correct input\n";
                return 0;
                }
                break;

        case 8:
            if(ar[2][1]=='-'){
            ar[2][1]='X';

            return 1;
            }
            else{
                cout<<"\nenter correct input\n";
                return 0;
                }
            break;

        case 9:
            if(ar[2][2]=='-'){
            ar[2][2]='X';

            return 1;
            }
            else{
                cout<<"\nEnter Correct Input\n";
                return 0;
                }
            break;

        }
}


int checkWinRow(char ar[3][3])
{
    int c=0;
    int counter=0;
    checkUserWin(ar);
    /*_____________________________________________________________*/
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(ar[i][j]=='0')
                counter++;
        }

        if(counter==2)
        {
            for(int k=0;k<3;k++)
            {
                if(ar[i][k]=='-')
                {
                    ar[i][k]='0';

                     printBoard(ar);
                     cout<<"COMPUTER WON";
                     exit(0);
                }

            }
        }
        counter=0;
    }

    /*_______________________computer won____________________________*/

    c=0;
    counter=0;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(ar[i][j]=='X')
                counter++;
        }

        if(counter==2)
        {
            for(int k=0;k<3;k++)
            {
                if(ar[i][k]=='-')
                {
                    ar[i][k]='0';
                    checkCompWin(ar);
                    c=1;
                    break;
                }

            }
        }
        counter=0;
        if(c==1)
            break;

    }
    return c;
}

int checkWinCol(char ar[3][3])
{
    int c=0;
    int counter=0;
    checkUserWin(ar);
/*__________________________________________________________*/

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(ar[j][i]=='0')
                counter++;
        }

        if(counter==2)
        {
            for(int k=0;k<3;k++)
            {
                if(ar[k][i]=='-')
                {
                    ar[k][i]='0';
                    printBoard(ar);
                    cout<<"\nCOMPUTER WON";
                    exit(0);
                }


            }
        }
        counter=0;
    }
    /*__________________Computer Won__________________________________________*/


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(ar[j][i]=='X')
                counter++;
        }

        if(counter==2)
        {
            for(int k=0;k<3;k++)
            {
                if(ar[k][i]=='-')
                {
                    ar[k][i]='0';
                    checkCompWin(ar);
                    c=1;
                    break;
                }

            }
        }
        counter=0;
        if(c==1)
            break;

    }
    return c;
}

int checkWinDiag(char ar[3][3])
{
    int c=0;
    int counter=0;
    checkUserWin(ar);

     /*_________________________________________________________*/
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                if(ar[i][j]=='0')
                counter++;
            }

        }
    }

     if(counter==2)
        {
            for(int l=0;l<3;l++){
            for(int k=0;k<3;k++)
            {
                if(l==k){
                    if(ar[l][k]=='-')
                    {
                        ar[l][k]='0';
                        printBoard(ar);
                        cout<<"COMPUTER WON";
                        exit(0);
                    }
                }

            }
            }
        }
        counter=0;
    /*___________________________compute Won________________________*/


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                if(ar[i][j]=='X')
                counter++;
            }

        }
    }

        if(counter==2)
        {
            for(int l=0;l<3;l++)
            {
                for(int k=0;k<3;k++)
                {
                    if(l==k)
                    {
                        if(ar[l][k]=='-')
                        {
                            ar[l][k]='0';
                            checkCompWin(ar);
                            c=1;
                            break;
                        }
                    }

                }

                 if(c==1)
                    break;
            }

        }



    return c;
}

int checkWinDiag2(char ar[3][3])
{
    int c=0;
    int counter=0;
    checkUserWin(ar);
    /*_________________________________________________________*/
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if((i+j)==2)
            {
                if(ar[j][i]=='0')
                counter++;
            }

        }
    }

     if(counter==2)
        {
            for(int l=0;l<3;l++){
            for(int k=0;k<3;k++)
            {
                if((l+k)==2){
                    if(ar[k][l]=='-')
                    {
                        ar[k][l]='0';
                        printBoard(ar);
                        cout<<"COMPUTER WON";
                        exit(0);
                    }
                }

            }
            }
        }
    /*___________________________compute Won________________________*/

    counter=0;


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if((i+j)==2)
            {
                if(ar[i][j]=='X')
                counter++;
            }

        }
    }

        if(counter==2)
        {
            for(int l=0;l<3;l++){
                for(int k=0;k<3;k++)
                {
                    if((l+k)==2){
                        if(ar[l][k]=='-')
                        {
                            ar[l][k]='0';
                            checkCompWin(ar);
                            c=1;
                            break;
                        }
                    }

                }
                if(c==1)
                    break;
            }
        }


    return c;
}


int checkFill(char ar[3][3],int n,int m)
{
    if(ar[n][m]=='X' || ar[n][m]=='0')
        return 1;
    else
        return 0;
}
void play()
{
    srand(time(0));
    char ar[3][3];
    for(int i=0;i<3;i++)
    {

        for(int j=0;j<3;j++)
        {
            ar[i][j]='-';
        }
    }


    while(!over(ar))
    {
        cout<<"YOUR CHANCE:";
        int n;
        cin>>n;
        int result=playerChance(ar,n);
        if(!result)
            continue;
        int x=checkWinRow(ar);
        int y=0;
        int z=0;
        int q=0;
        if(!x){
             y=checkWinCol(ar);
             if(!y){
                z=checkWinDiag(ar);
                if(!z)
                    q=checkWinDiag2(ar);
             }
        }

        if(!x && !y && !z &&!q && !over(ar))
        {
            int i=rand()%3;
            int j=rand()%3;
            while(checkFill(ar,i,j))
            {
                i=rand()%3;
                j=rand()%3;
            }
            ar[i][j]='0';
        }

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<ar[i][j]<<" ";
            }
                cout<<endl;
        }
    }
    if(over(ar))
        cout<<"Game Draw";
}
int main()
{

        cout<<"--------X------Let's Play----------X-------\n";
        cout<<"\nYou Are X\n";
        cout<<"\nPOSITIONS TABLE\n";
        int k=1;
        for(int i=1;i<=3;i++)
        {
            for(int j=1;j<=3;j++)
            {
                cout<<k<<"   ";
                k++;
            }
            cout<<endl<<endl;
        }
        play();
}


