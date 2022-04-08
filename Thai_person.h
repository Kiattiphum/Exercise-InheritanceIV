class Thai_person{
	private: 
		long nat_id;
	public: 
		Thai_person(long = 0);
    void displayThai();
    ~Thai_person();
};

Thai_person::Thai_person(long x){
  nat_id=x;
  cout<<"Thai person constructor "<<nat_id<<endl;
}

void Thai_person::displayThai(){
  cout<<"Nat id: "<<nat_id<<endl;
}


Thai_person::~Thai_person(){
  cout<<"Thai person destructor "<<nat_id<<endl; 
}