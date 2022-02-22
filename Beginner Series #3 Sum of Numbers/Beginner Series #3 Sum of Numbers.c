int min (int a,int b){if (a>b){return b;} else {return a;}}
int max (int a,int b){if (a>b){return a;} else {return b;}}

int get_sum(int a , int b) {
  //get array of all integer between those 2 number.
 int count=0;
 int mn = min(a,b);
 int mx = max(a,b)+1;
 while (mn<mx){
  count+=mn;
  mn++;
 }
 return count;

}
 //find between a and b minimum and maximum number
  //sum all of integer in the array togethe