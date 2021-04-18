#include <iostream>
using namespace std;

int main() {
char entrada[50];
cout<<"Digite a palavra que deseja que seja convertida"<<endl;
cin>>entrada;
for(int i=0;i<50;i++){

  switch (entrada[i]){
    case 'a':
    case 'b':
    case 'c':
    if(entrada[i]=='a'){
      cout<<"#2=1"<<endl;
    }else if(entrada[i]=='b'){
      cout<<"#2=2"<<endl;
    }else{
      cout<<"#2=3"<<endl;
    }
    break;

    case 'd':
    case 'e':
    case 'f':
    if(entrada[i]=='d'){
      cout<<"#3=1"<<endl;
    }else if(entrada[i]=='e'){
      cout<<"#3=2"<<endl;
    }else{
      cout<<"#3=3"<<endl;
    }
    break;

    case 'g':
    case 'h':
    case 'i':
    if(entrada[i]=='g'){
      cout<<"#4=1"<<endl;
    }else if(entrada[i]=='h'){
      cout<<"#4=2"<<endl;
    }else{
      cout<<"#4=3"<<endl;
    }
    break;

    case 'j':
    case 'k':
    case 'l':
    if(entrada[i]=='j'){
      cout<<"#5=1"<<endl;
    }else if(entrada[i]=='k'){
      cout<<"#5=2"<<endl;
    }else{
      cout<<"#5=3"<<endl;
    }
    break;

    case 'm':
    case 'n':
    case 'o':
    if(entrada[i]=='m'){
      cout<<"#6=1"<<endl;
    }else if(entrada[i]=='n'){
      cout<<"#6=2"<<endl;
    }else{
      cout<<"#6=3"<<endl;
    }
    break;

    case 'p':
    case 'q':
    case 'r':
    case 's':
    if(entrada[i]=='p'){
      cout<<"#7=1"<<endl;
    }else if(entrada[i]=='q'){
      cout<<"#7=2"<<endl;
    }else if(entrada[i]=='r'){
      cout<<"#7=3"<<endl;
    }else{
      cout<<"#7=4"<<endl;
    }
    break;

    case 't':
    case 'u':
    case 'v':
    if(entrada[i]=='t'){
      cout<<"#8=1"<<endl;
    }else if(entrada[i]=='u'){
      cout<<"#8=2"<<endl;
    }else{
      cout<<"#8=3"<<endl;
    }
    break;

    case 'w':
    case 'x':
    case 'y':
    case 'z':
    if(entrada[i]=='w'){
      cout<<"#9=1"<<endl;
    }else if(entrada[i]=='x'){
      cout<<"#9=2"<<endl;
    }else if(entrada[i]=='y'){
      cout<<"#9=3"<<endl;
    }else{
      cout<<"#9=4"<<endl;
    }
    break;

  default:
  i=49;
  } 
}
}