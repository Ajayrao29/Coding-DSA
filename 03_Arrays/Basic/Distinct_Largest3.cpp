vector<int>distinctlargest3(vector<int>&a){
vector<int>res;
int first=INT_MIN;
int sec=INT_MIN;
int third=INT_MIN;

for(int x:a){
if(x>first){
third=sec;
sec=first;
first=x;
}
else if(x>sec && x!=first){
third=sec;
sec=x;
}
else if(x>third && x!=first&& x!=sec){
third=x;
}
}
if(first!=INT_MIN){
 res.push_back(first);
}
if (sec != INT_MIN){
 res.push_back(sec);
}
if (third != INT_MIN){
  res.push_back(third);
}

return res;
}