#include <iostream>
#include <string>
using namespace std;


class reserve{
struct node{
	string name="NULL";
	string phone_number="NULL";
	int date_time[4]={0,0,0,0};
	int pax_number; node *link;
}*head;
	public:
		reserve(){
			head=NULL;
		}
		void insert(string n, string p_n, int d_t[], int p){
			int check=0;
			node *newNode=new node;
		
			
			
			newNode->name=n;
			newNode->phone_number=p_n;
			for (int i = 0 ; i<4 ; i++)
			{
			newNode->date_time[i]=d_t[i];}
			newNode->pax_number=p;	
			
			
			
			if(head==NULL){
				head=newNode; newNode->link=NULL;
				cout<<"Succeed ! \n"<<endl;
			}
			
	
				else
				{bool truefalse=false;
					node *r=newNode, *q;
			q=head;
			//if (q->date_time[0]<newNode->date_time[0]){
			//		check=1;
			/*	}
		
			*/
			check=1;
			while (q!=NULL &&check==1){
				if (q->date_time[0]<newNode->date_time[0]){
					r=q;q=q->link;
				}
				
			else if(q->date_time[0]==newNode->date_time[0]){
			if(q->date_time[1]<newNode->date_time[1]){
				r=q;q=q->link;}
			else if(q->date_time[1]==newNode->date_time[1]){
				
			
			if(q->date_time[2]<newNode->date_time[2]){
					r=q;q=q->link;
			}
			else if (q->date_time[2]==newNode->date_time[2]){
			if (q->date_time[3]<newNode->date_time[3])
			{r=q;q=q->link;
			}
			else if (q->date_time[3]==newNode->date_time[3]){
				r=q;q=q->link;
			}
			
				else
				{
			
			check-=1;
			}}
			else{
				
				check=0;
			}}
			else{
			check=0;
			}}else{
				
				check=check-1;
			}
		if (check==1)
		truefalse=true;	
	}  
		if (truefalse==true){r->link=newNode;
			newNode->link=q;
			cout<<"Succeed ! \n"<<"\n";
		}
		else 
		{
			head=newNode;
			newNode->link=q;
			cout<<"Succeed !\n"<<"\n";
		}
		
			}
			}
				
	
		
		
		
		
        void updateName(string n,int c){
        	
        	node *a = new node;
        	node *p , *q= head;
        
        	int i=1,b=0  ;
        	while (q!=NULL&&i<c-0){
        		p=q;
        		q=q->link;
        		i++;
        		b++;
			}
			if (q!=NULL){	q->name=n
			;
			}
			else cout<<"Nothing found according to the index number     \n" ;
		
		}
		void updatePhone_Number(string p_n, int c){
		
			node *p, *q = head;
	
			int b = 0, i = 1 ; 
			while (q!=NULL && i< c-0){
				p=q;
				q=q->link;
				i++;
				
			}
			if (q!=NULL){
				q->phone_number=p_n;
			}
			else
			cout<<"Cannot find: No record "<<endl;
		}
			void updatedate_time(int d_t[], int c){
		
			node *p, *q = head;
		
			int b = 0, i = 1 ; 
			while (q!=NULL && i< c-0){
				p=q;
				q=q->link;
				i++;
				b++;
			}
			if (q!=NULL){
				for (int i_2=0; i_2<4; i_2++)
			   q->date_time[i_2]=d_t[i_2];
			}else cout<<
			"Cannot find: No record in the index number "<<endl;
		}
		
		void updatepaxnumber(int p, int c){
		
			node  *q = head;
		
			int b = 0, i = 1 ; 
			while (q!=NULL && i< c-0){
				
				q=q->link;
				i++;
				b++;
			}
			if (q!=NULL){
				for (int i_2=0; i_2<4; i_2++)
			   q->pax_number=p;
			}else cout<<
			"Cannot find: No record in the index number "<<endl;
		}
		
		
		void remove(int c){
			node *p, *q = head, *z=head;
			int i = 1 ;
			int count=0;
			
		
			
				while (z!=NULL){
			z=z->link;
				count=count+1;
			}
			
			if (c>0&&count>=c){
			
			while (q->link!=NULL&&i<c&&count>=c){
				p=q;
				q=q->link;
				i++;
				
			}}
			if (q!=NULL&&count>=c&&c>0){
				if (i>1){
				
				p->link=q->link;
				delete q;}
				else {
					head=q->link;
					delete q;
				}
				cout<<"deleted "<<endl<<endl;
			}
			else
			cout<<"Nothing deleted because Out of range. "<<endl;
		}
	void display(){
		int a = 0;
		node *q=head, *p= head;
		
		
		cout<<"Records: \n";
		while (q!=NULL){
			a++;
			q=q->link;
		}
		if (a==0){
			cout<<"No records to display. \n"<<endl;
		}
		for (int b = 0; b<a ;  b++){
			cout<<"Number :"<<b+1<<endl<<"Name: "<<p->name<<endl
			<<"Phone number: "<<p->phone_number<<endl
			<<"Date: "<<p->date_time[0]<<"/"<<p->date_time[1]<<"/"<<p->date_time[2]<<endl
			<<"Time(24hours): "
			;if (p->date_time[3]<1000&&p->date_time[3]>99)
			cout<<"0"<<p->date_time[3]<<
			endl;
			else if (p->date_time[3]<100&&p->date_time[3]>9)
			cout<<"00"<<p->date_time[3]<<endl;
			else if (p->date_time[3]<10)
			cout<<"000"<<p->date_time[3]<<endl;
			else cout
			<<p->date_time[3]<<endl;
			cout<<"PaxNumber: "<<p->pax_number<<endl
			<<"______________________________________________________"<<endl<<endl;
			p=p->link;
			
		}
	}
	
	void test(){
		cout<<head->name;
		cout<<head->date_time[0];
	}
	void test2(){
			node *q=head;
			q=q->link;
		cout<<q->name;
		cout<<q->date_time[0];
	}
};
	

void mainmenu();




int main(){

	string n, p ;int d[4]={1,1,1,3}, P;
	
	int choice=0;
	char choice_c='Y';
	reserve reservation;


	do {
		mainmenu();
		
		cin>>choice;
		cout<<"                                       "<< endl;
		if (choice==1){
			cout<<"Please enter the name. ";
			cin>>n;
			cout<<"Please enter the phone number. ";
			cin>>p;
			cout<<"Please enter the year for date. ";
			cin>>d[0];
			cout<<"Please enter the month for date. ";
			cin>>d[1];
			cout<<"Please enter the day for date. ";
			cin>>d[2];
			cout<<"Please enter the time for date(eg:1200, 2315) ";
			cin>>d[3];
			cout<<"Please enter the pax number. ";
			cin>>P;
			cout<<endl;
			reservation.insert(n,p,d,P) ;
			cout<<"Do you want to continue? y/n";
			cin>>choice_c;
		}
		else if (choice==2){
			reservation.display();
			cout<<"Which data do you want to update? ";
			int choice2=0;
			cin>>choice2;
			
			int choice2_1=0;
			cout<<"Please choose what you want to update. "<<endl
			<<"1.Name. "<<endl
			<<"2. Phone Number. "<<endl
			<<"3. Date. "<<endl
			<<"4. Pax Number. ";
			cin>>choice2_1;
			cout<<endl;
			if (choice2_1==1){
				cout<<"Please enter the name. ";
				cin>>n;
				reservation.updateName(n,choice2);
					cout<<"Do you want to continue? y/n";
			cin>>choice_c;
			
			}
			else if (choice2_1==2){
				cout<<"Please enter the phone number. ";
				cin>>p;
			reservation.updatePhone_Number(p,choice2);
				cout<<"Do you want to continue? y/n";
			cin>>choice_c;
			}
			else if (choice2_1==3){
				cout<<"Please enter the year for date. ";
				cin>>d[0];
				cout<<"Please enter the month for date. ";
				cin>>d[1];
				cout<<"Please enter the day for date. ";
				cin>>d[2];
				cout<<"Please enter the time for date.(eg:1200,2315) ";
				cin>>d[3];	
				
				reservation.updatedate_time(d,choice2);
					cout<<"Do you want to continue? y/n";
			cin>>choice_c;
			}else if (choice2_1==4){
				cout<<"Please enter the pax number. "
				;
				cin>>P;
				reservation.updatepaxnumber(P,choice2);
					cout<<"Do you want to continue? y/n";
			cin>>choice_c;
			}
			else 
			cout<<"Out of range. "<<endl;
		}
		else if (choice==3){
			reservation.display();
			cout<<"Which data you want to delete ? ";
			int choice2=0;
			cin>>choice2;
			reservation.remove(choice2);
				cout<<"Do you want to continue? y/n";
			cin>>choice_c;
		}
		else if (choice==4){
			reservation.display();
				cout<<"Do you want to continue? y/n";
			cin>>choice_c;
		}
		else if (choice!=5)
		cout<<"Choice out of range. ";
		if (choice_c!='Y'&&choice_c!='y')
		choice=5;	
	}while(choice!=5);
	system ("pause"); return 0;

}

void mainmenu(){
cout<<"Main Menu"<<endl;
cout<<"1.Insert reservation record"<<endl;
cout<<"2.update reservation record"<<endl;
cout<<"3.Delete reservation record"<<endl;
cout<<"4.View reservation record"<<endl;
cout<<"5.End program"<<endl;
cout<<"Please choose your option according number "<<endl;
cout<<"-------------------------------------------"<<endl;
}

