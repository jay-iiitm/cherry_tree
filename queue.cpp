#include<iostream>
#include<string.h>

using namespace std;

class student
{
	private:
		string rollno[3];
		int total;
		string name[3];
		float avg[3];
		
	public :
		void getdata(){
			int M1,M2,M3;
			
			cout << "Enter student 1 name " << endl;
			cin >> name[0];
			cout << "Enter rollno. " << endl;
			cin >> rollno[0];
			cin >> M1;
			cin >> M2;
			cin >> M3;
			avg[0] = (M1+M2+M3)/3;
			cout << "Enter student 2 name " << endl;
			cin >> name[0];
			cout << "Enter rollno. " << endl;
			cin >> rollno[1];
			cin >> M1;
			cin >> M2;
			cin >> M3;
			avg[1] = (M1+M2+M3)/3;
			cout << "Enter student 3 name " << endl;
			cin >> name[0];
			cout << "Enter rollno. " << endl;
			cin >> rollno[2];
			cin >> M1;
			cin >> M2;
			cin >> M3;
			avg[2] = (M1+M2+M3)/3;
			
			int i,j;
			for(i=0;i<3;i++){
				for(j=i;j<3;j++){
					if(avg[i] < avg[j]){
						int temp;
						temp = avg[i];
						avg[i] = avg[j];
						avg[j] = temp;
						
						string b;
						b = name[i];
						name[i] = name[j];
						name[j] = b;
						
						string c;
						c = rollno[i];
						rollno[i] = rollno[j];
						rollno[j] = c;
					}
				}
			}
			
		}
		void displaydata(){
			int i;
			for(i=0;i<3;i++){
				cout << "Rank " << i+1 << "name " << name[i] << "rollno. " << rollno[i] << "average " << avg[i] << endl;
			}
		}
	
};



int main(){
	student st;
	st.getdata();
	st.displaydata();
	
	
	return 0;
}



