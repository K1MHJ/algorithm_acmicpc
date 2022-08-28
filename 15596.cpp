


#include <vector>
long long sum(std::vector<int> &a) {
	long long ans = 0;
  std::vector<int>::iterator it;
  for(it = a.begin();it != a.end();++it){
      ans += *it;
  }
	return ans;
}
int main(){
    std::vector<int> a;
    a.push_back(1);
    a.push_back(2);
    return sum(a);
}
