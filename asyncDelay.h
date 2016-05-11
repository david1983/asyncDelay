#ifndef asyncDelay_h
#define asyncDelay_h

// Define a void type that will be used for the callback function
typedef void (*GeneralFunction) ();

class asyncDelay{
	public:
		asyncDelay(int refresh);
		void runJob(GeneralFunction);
	private:
		int _old, _refresh;
};

#endif
