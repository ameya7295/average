class Avg
{
public:
	Avg();
	~Avg();
	double avgIs(int *arr, int size);
	double acceptNum();
private:
	int sum=0;
	int i =0 ;		//Accepts numbers//elements
	double avg=0;
	int n;			//Accepts no. of num.
	int arr[100];
};