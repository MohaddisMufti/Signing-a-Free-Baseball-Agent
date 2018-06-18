#include<iostream>
#include<string>
using namespace std;
int main(){
cout<<"\n\n!!!!  SIGNING FREE BASE BALL AGENT  !!!!\n\n";
cout<<"!!!!  PLAYER AVAILABLE IN THE DRAFT  !!!!\n\n";
//initalizing player, positions,value and there vrop.
char player_name[20][10]={"fahad","mufti","aashir","ahmed","rafay","rameez","hamza","hammad","azhar","haris","taimour","asad","saad","waqar","usama","basit","umer","pasta","ammar","anas"};
char player_position[20]={'a','b','c','d','e','f','g','h','i','j','a','b','c','d','e','f','g','h','i','j'};
int player_value[20]={101,110,110,112,108,103,110,144,120,125,110,120,155,119,118,115,116,106,109,105};
int player_vrop[20]={15,11,12,7,8,9,11,14,12,12,11,12,15,9,8,7,6,6,9,10};
int max_value;
char choice;
char pos;int val;int vrp; 
//showing data of available player
cout<<"S.no    Name      Position   Value      Vrop\n";
for(int i=0;i<20;i++){
cout<<i+1;cout<<"\t";cout<<player_name[i];cout<<"\t  ";cout<<player_position[i];cout<<"\t     ";cout<<player_value[i];cout<<"\t";cout<<player_vrop[i];cout<<"\n";
}
restart:
//select weather want to change or hire new player	
cout<<"\nSelect weather you want to change or hire new Player: ";
cout<<"\n\nEnter 'C' or 'c' for Change: ";
cout<<"\n\nEnter 'N' or 'n' for New hiring: ";
cin>>choice;
//enter total budget
cout<<"\nEnter your total budget: ";
cin>>max_value;
//enter position, value nad vrop
switch(choice){
case'C': case'c':
cout<<"\n\nEnter position for which you want change:";cin>>pos;
cout<<"\nEnter Value of current player:";cin>>val;
cout<<"\nEnter Vrop of current player:";cin>>vrp;

for(int i=0;i<20;i++){
//check for available position	
if(player_position[i]==pos)
{
//check for min player value and max vrop
if((val>=player_value[i])&&(vrp<=player_vrop[i])){

cout<<"\n\nYou can change with:\n\n";
cout<<player_name[i];cout<<"\t  ";cout<<player_position[i];cout<<"\t     ";cout<<player_value[i];cout<<"\t";cout<<player_vrop[i];
//calculating remaining budget
max_value=max_value-player_value[i];
break;}
else{
cout<<"\n\nSorry!!! we don't have a better player .";
break;
}
}
else{
cout<<"\n\nSorry!!! we don't have a player at this position.";
break;
}
}
break;
case'N': case'n':
//enter position and budget
cout<<"\n\nEnter position for which you want to hire new player:";cin>>pos;
cout<<"\nEnter your budget:";cin>>val;
for(int i=0;i<20;i++){
//check for available position
if(pos==player_position[i]){
//check for min player value
if(val>=player_value[i]){
for(int i=0;i<20;i++){
//check for mae value/vrop ratio,player position and min player value	
if(((player_value[i]/player_vrop[i])>=(player_value[i+1]/player_vrop[i+1]))&&(player_position[i]==pos)&&(player_value[i]<=val)){
cout<<player_name[i];cout<<"\t  ";cout<<player_position[i];cout<<"\t     ";cout<<player_value[i];cout<<"\t";cout<<player_vrop[i];cout<<"\n";
max_value=max_value-player_value[i];break;}}
}
else{
cout<<"\n\nSorry!!! we don't have a player in this budjet.";
break;
}}
else{
cout<<"\n\nSorry!!! we don't have a player at this position.";
break;
}

}
break;
default:
cout<<"\nYou enter wrong choice.";
}
char ch;
cout<<"\n\nYour remaining budget is :";cout<<max_value;
//asking for again chaing or hiring new player
cout<<"\n\nIf you want to Change or Hire new player press 'Y' or 'y' else press 'N' or 'n' : ";
cin>>ch;
if(ch=='n'||'N'){goto stop;}
if(ch=='y'||'Y'){goto restart;}
stop:
	
cout<<"\n\n";
cout<<"GROUP MEMBERS  !!!!\n";
cout<<"1. MOHADDIS HASSAN (15B-089-BS)  \n";
cout<<"2. MUHAMMAD FAHAD ALI (15B-069-BS) \n";
cout<<"3. MUHAMMAD AHMED JAMIL (15B-095-BS) \n";
return 0;
}








