#include <string>
#include <vector>
#include <iostream>
#include <functional>
#include<algorithm>
using namespace std;
class add{
public:
string operator()(char const& s1,char const& s2){

string s;
s+=s1;
s+=s2;
return(s);
}};
//}
class remplir{

public:
remplir():c(64)
{}

int operator()(){

if (c==90)
c=96;
c+=1;
return c;

}
private:
char c;
int compteur;
};




class affiche{
public:
void operator()( char const& s)const {
cout<<s;
}


};




int main(){
/*
cout<<add("brahim",add("benamira","benamira"));

*/

remplir r;

vector <char> tab1(52,' ');
vector <char> tab2(52,' ');
vector <string> tab3(52," ");
generate(tab1.begin(),tab1.end(),r);
generate(tab2.begin(),tab2.end(),r);

//transform(tab1.begin(),tab1.end(),tab2.begin(),tab3.begin(),add());
//for_each(tab3.begin(),tab3.end(),affiche());
//cout<<int('a')<<endl<<int('Z');
cout<<endl<<int('a')<<endl<<int('Z')<<endl<<int('A');
/*
string s1;
char c='a';
char d='b';
s1+=c;
s1+=d;
cout<<s1;
*/
return 0;




}
