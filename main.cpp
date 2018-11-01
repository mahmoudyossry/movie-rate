#include <iostream>
#include <cstring>
using namespace std;
class movie
{
    char movieName[20];
    char MPAA_rating[6];
    int NumOfRating1=0,NumOfRating2=0,NumOfRating3=0,NumOfRating4=0,NumOfRating5=0;
public:
    movie(char movieN[], char MPAA_r[])
    {
        strcpy(movieName,movieN);
        strcpy(MPAA_rating,MPAA_r);
    }
    double GetAverage()
    {

        return ((NumOfRating1+NumOfRating2+NumOfRating3+NumOfRating4+NumOfRating5)/5.0);
    }
    void AddRating(int z)
    {

        if (z==1)
            NumOfRating1++;
        else if(z==2)
            NumOfRating2++;
        else if(z==3)
            NumOfRating3++;
        else if(z==4)
            NumOfRating4++;
        else if(z==5)
            NumOfRating5++;
        else
            cout<<"invalid value !";
    }
    void print()
    {
        cout<<movieName<<"    "<< MPAA_rating<<"    "<<GetAverage();
    }

};
int main()
{
    movie piratesOfCarriebian("piratesOfCarriebian","G");
    movie pirates("pirates","G");
    piratesOfCarriebian.AddRating(5);
    pirates.AddRating(5);
    piratesOfCarriebian.AddRating(5);
    piratesOfCarriebian.AddRating(5);
    piratesOfCarriebian.AddRating(5);

    piratesOfCarriebian.print();
    pirates.print();
    return 0;
}
