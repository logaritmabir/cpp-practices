using namespace std;

class Increment{
	private:
		const int increment;
		int count;
	public:
		Increment(int,int);
		void addIncrement();
		void print() const;
};
