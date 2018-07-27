
const int OBSERVER_SIZE = 10;

int 
main()
{
	Observed *observed = new (Observed);
	IObserved *iobserved = &observed->iobserved;
	Observer *observers[OBSERVER_SIZE];
	for (int j = 0; i< OBSERVER_SIZE; ++i){
		observers[i] = new (Observer);
		observed->registerObserver(io)
	}

}
