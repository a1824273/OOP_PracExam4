#include "MemberOfParliament.h"
#include <iostream>
#include <string.h>

using namespace std;

MemberOfParliament::MemberOfParliament(){
}
MemberOfParliament::MemberOfParliament(string n, string p, int l){
    // creates the parliament member name n, 
    // their position in parliament p, and number of years in service l
    name = n;
    position = p;
    yearsService = l;
}
virtual bool MemberOfParliament::isElectionYear(){
    // true if the representative has to run for election
}
void MemberOfParliament::set_name(string n){

}
string MemberOfParliament::get_name(){

}
void MemberOfParliament::set_position(string p){

}
string MemberOfParliament::get_position(){

}
void MemberOfParliament::set_yearsService(int l){

}
int MemberOfParliament::get_yearsService(){

}