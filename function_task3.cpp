/*Create a program that allows the user to enter a word. The program should display the word
in pig latin form. The rules for converting a word into pig latin form are listed below.
• When the word begins with a vowel (A, E, I, O, or U), add the string “-way” (a
dash followed by the letters w, a, and y) to the end of the word. For example, the
pig latin form of the word “ant” is “ant-way”.
• When the word does not begin with a vowel, fi rst add a dash to the end of the word.
Then continue moving the fi rst character in the word to the end of the word until
the fi rst character is the letter A, E, I, O, U, or Y. Then add the string “ay” to the
end of the word. For example, the pig latin form of the word “Chair” is “air-Chay”.
• When the word does not contain the letter A, E, I, O, U, or Y, add the string “-way”
to the end of the word. For example, the pig latin form of “56” is “56-way”.*/

#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
string get_input();
string pig_latin(string);

string get_input(){
	string word;
	cout<<"enter the word:"<<endl;
	cin>>word;
	return word;
}

string pig_latin(string word){
	string replace="-way";
    string word1=word;
	int word_len=word.length();
	 for(int i=0;i<=word_len;i++)
    {  
	  if (word[0]=='a'|| word[0]=='e'|| word[0]=='i' ||word[0]=='o'|| word[0]=='u'){
	  	return word+replace;
	  }
	  else if (isdigit(word[i])){
      return word+replace;
      }
	 else if(word[i]!='a'|| word[i]!='e'|| word[i]!='i' ||word[i]!='o'|| word[i]!='u'){
	 int len = word.length(); 
	 word=word+'-';
    int index = -1; 
    for (int i = 0; i < len; i++) { 
        if (word[i]=='a'|| word[i]=='e'|| word[i]=='i' ||word[i]=='o'|| word[i]=='u') { 
            index = i; 
            break;
        } 
    } 
  
    // Take all characters after index (including 
    // index). Append all characters which are before 
    // index. Finally append "ay" 
    return word.substr(index) + word.substr(0, index) + "ay"; 
    }
}

}
  //return word;
int main(){
	string word=get_input();
	string case1=pig_latin(word);
	cout<<"In pig latin is "<<case1<<endl;
	return 0;
}
