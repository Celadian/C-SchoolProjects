

class Car {
	public:
		void setName(std::string newName){
			name = newName;
		}
		
		std::string getName(){
			return name;
		}
	private:
		std::string name;
};
