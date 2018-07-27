
typedef struct _IObserved IObserved;
typedef struct _IObserver IObserver;


struct _IObserved{	//商品
   void (*registerObserver)(IObserved *,IObserver *);
   void (*notifyObservers)(IObserved *);
   void (*removeObserver)(IObserved *,IObserver*);
};

struct _IObserver{	//顾客
	void (*handle)(IObserver *);
};

