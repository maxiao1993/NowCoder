typedef struct _Observed Observed;

struct _Obseved{
	IObserver **observers;
	size_t count;
	size_t size;

	union{
		IObserved;
		IObserved iobserved;
	};
};

extern Observed *Observed_construct(void *);
extern void Observed_destruct(Observed *);
