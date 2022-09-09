class Implementation;

class Interface{
	public:
		Interface(int);
		void setValue(int);
		int getValue();
	private:
		Implementation *ptr;
};
