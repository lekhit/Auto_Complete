#include "iostream"
#include "sentence_auto_complete.cpp"
#include "bits/stdc++.h"
int main(){
  vector<string> s;//={"the sweet cheese","the fatty cat","the muffy funs","the kitty cat","funsss","catsss","the healthy food","i fool","foods","foodss","foodsss"};
//  vector<vector<string>> s;
//    for(auto i:s1){
//     auto t=split(i);
//  s.push_back(t);
//  cout<<mergeVector(t);
//    }
// for(auto i:s) for(auto j:i) cout<<j<<" \n";
 std::ifstream inputFile("input.txt");

    // Check if the file is open
    if (!inputFile.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return 1; // Return an error code
    }

    // Read the contents of the file line by line
    std::string line;
    while (std::getline(inputFile, line)) {
        // Process each line as needed
        s.push_back(line);
    }

    // Close the file
    inputFile.close();


    // int n;cin>>n;
    string st1;
  Trie t(4,2);
  for(auto i:s){
    if(!t.present(i))
      t.addWord(i);
  }
  t.build();
  auto ans=t.query("f",3);
  // for(auto i:ans) cout<<i<<" , ";
  while(1){
    cout<<"enter Input\n";
    string s;//cin>>s;
    getline(cin,s);
    if(s=="-1") return 0;
    
    auto ans=t.query2(s,3);


    for(auto i:ans) cout<<i<<"  "<<(i.size())<<"\n";
    cout<<endl;
  }
  return 0;
}