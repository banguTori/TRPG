#ifndef PCH_H
#define PCH_H

#include<iostream>
#include<random>
using namespace std;

//TODO : 함수 객체로도 다루기 
#define SAFE_DELETE(p) {if(p) delete(p); p= nullptr;}
#define SAFE_DELETE_ARRAY {if(p) delete[] p; p = nullptr;}


#endif //PCH_H
