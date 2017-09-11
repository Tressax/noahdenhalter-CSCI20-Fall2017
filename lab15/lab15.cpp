//Noah Denhalter
//9/11/2017
//Mad lib?

 #include <iostream>
 #include <string>
 using namespace std;
 
 int main()
{

    
    char name[256], place[256], place2[256], noun[256], noun2[256], past_tense_verb[256], past_tense_verb2[256], family_member[256], period_of_time[256], class_subject[256];
    
    cout<<"I need a place"<<endl;
    cin.getline(place2,256);
    cout<<"How about another place?"<<endl;
    cin.getline(place,256);
    cout<<"and a noun!"<<endl;
    cin.getline(noun,256);
    cout<<"Oh shoot, I almost forgot. What's a good name?"<<endl;
    cin.getline(name,256);
    cout<<"Okay, gimme a verb in the past tense"<<endl;
    cin.getline(past_tense_verb2,256);
    cout<<"What about a class subject?"<<endl;
    cin.getline(class_subject,256);
    cout<<"And another noun!!"<<endl;
    cin.getline(noun2,256);
    cout<<"How about another one of those sweet past tense verbs? ;)"<<endl;
    cin.getline(past_tense_verb,256);
    cout<<"A family member?"<<endl;
    cin.getline(family_member,256);
    cout<<"And lastly a period of time!"<<endl;
    cin.getline(period_of_time,256);
    cout<<"Okay!Here's a story!"<<endl;
    cout<<endl;

    cout<<"One day, "<<name<<" walked into a "<<place<<". He was alarmed to see a "<<noun<<" there, and promptly "<<past_tense_verb<<" into the nearest "<<noun2<<"."<<endl;
    cout<<"Once he got there, he quickly "<<past_tense_verb2<<" into a "<<place2<<" so as to escape. Upon arrival he saw his "<<family_member<< " and was"<<endl;
    cout<<"taken home and grounded for a "<<period_of_time<<"; "<<"he had forgotten to do his "<<class_subject<<" homework."<<endl;
}