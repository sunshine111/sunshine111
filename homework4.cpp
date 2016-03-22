#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
using namespace std;
struct Word{     
    int Count;
     Word() : Str(""), Count(0) {}  
    string Str; 
    char *p;
};
void exchange(Word &word)     
{  
    string tStr = word.Str;  
    int tCount = word.Count;  
    word.Str = Str; 
    word.count =count ; 
    Str = tStr;  
    Count = tCount;  
}  

Words test[100];

void lwr(char x[])     
{   int k = 0;
    while (x[k] != '\0')
    {
        if (x[k] >= 'A'&&x[k] <= 'Z')
            x[k] = x[k] + 32;
        k++;
    }
}

int identify(char a[])    
{   int m=(strlen(a)>=4)?1:0;
    int n=(a[0]>='a'&&a[0]<='z')?1:0;
    if(!m||!n)
        return 0;
    else
        while(a)
        {   for(int i=1;;i++)
           {  
               if(!(a[i]>='a'&&a[i]<='z')||!(a[i]>='0'&&a[i]<='9'))
                        return 0;
               else
                        return 1;
           }
        }
}

void SortWordDown(Word * words, int size)  
{  
    for(int i=0;i<size;i++)  
    {
        for(int j=0;j <size-1;j++)  
        { 
            if(words[j].Count<words[j+1].Count)  
            {  
                words[j].exchange(words[j+1]);  
            }  
        }  
    }  
}  

int counting(char b[],int num)    
{   for(int j=0;j<num;j++)
    {if(!strcmp(b,test[j].p))
             test[j].count++;
        else
            return 0;
    }
}
int main()
{   char c[200];
    ifstream fin("D:/A_Tale_of_Two_Cities.txt");   
    for(int f=0;;f++)
        fin>>c[f];
    fin.close();
    cin.get();
    lwr(c);
    const char *delim = ",¡±¡°.''!?";  
    char *q;
    int n=0;
    q = strtok(c, delim);
    SortWordDown(words, wCount);  
    while (q)
    {
        if (identify(q))
        { strcpy(test[n].p,q);
            n++;}
        ofstream Result1; 
        Result1.open("Result1.txt"); 
        Result1<< test[n].p << ":" << test[n].count << '\n';
        q=strtok(NULL,delim);
    }
    return 0;
}                  