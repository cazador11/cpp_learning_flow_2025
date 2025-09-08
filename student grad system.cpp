#include<iostream>
using namespace std;
int main() {
    string name;
    int ID;
    double scores[5];
    double avg_scores;
    int sum = 0;
    char stop = 'F';

    cout<<"Enter student name: "<<endl;
    cin>>name;
    cout<<"Enter student ID: "<<endl;
    cin>>ID;
    cout<<"Enter 5 tes scores: "<<endl;
    cout<<"Press F to stop and to get average score unless you enter five marks"<<endl;

    for(int i=0;i<5;i++){
        cin>>scores[i];
        if(scores[i] == 'F')
            break;
        sum += scores[i];
        avg_scores=sum/5;
    }

    cout << "Average score: " << avg_scores << endl;
    
    return 0;

}
