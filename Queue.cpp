/*
Self-made queue system
Version 1.0
Object Oriented Programming
*/

#include <iostream>
#include <vector>

using namespace std;

class mqueue {
	
	public:
		
 	mqueue() { 
 	
 		first = last = -1;
 	} 
 	
 	bool empty(){
 		
    	if (first == -1) return true; 
    	return false; 
 	}	
 	
 	void push(int value) {
 	
    	if (empty() == true) {
    	
       		elements.push_back(value);
	   		first = last = 0;
	   		return;
    	}
    
    	elements.push_back(value);
    	last++;
 	}	
 	
	int dequeue(){
		
   		int value;
   		
   		if (empty()){
   			
      		return value;
   		}	
   	
   		if (first == last) {
   			
      		value = elements[first];
      		first = last = -1;
	   		elements.clear();
	  		return value;
   		}
   		
   		value = elements[first];
   		first++;
		return value;
 	}
 	
 	int size(){
	
		if(last == -1) return 0;
	
      	return last - first + 1;	
 	}
 	
 	int ffirst(){
	
		return elements[first];	
 	}
 	
 	void unvisdequeue(){
		
   		int value;	
   	
   		if (first == last) {
   			
      		value = elements[first];
      		first = last = -1;
	   		elements.clear();
   		}
   		
   		value = elements[first];
   		first++;
 	}
 
 	private:
 		
 	vector<int> elements;
 	int first, last;
};	

int main(){
	
	mqueue buses;
	int value;
 
	
	
	
	// buses.push(n); - add bus (where n is an integer)
	// buses.dequeue(); - delete (with cout)
	// buses.empty();- empty
	// buses.size(); - size
	// buses.ffirst(); - first bus
	// buses.unvisdequeue(); - deletes first element
 	
	return 0;
}


	/* cout << "Size: " << buses.size() << endl;
	cout << "Empty?: " << buses.empty() << endl;
	
	buses.push(503);
	buses.push(501);
	buses.push(179);
	buses.push(185);
	buses.push(131);
	
	cout << "Empty?: " << buses.empty() << endl;
	cout << "Serviced: " << buses.dequeue() << endl;
	cout << "Serviced: " << buses.dequeue() << endl;
	
	buses.push(148);
	
	cout << "Size: " << buses.size() << endl;
	cout << "Serviced: " << buses.dequeue() << endl;
	cout << "Serviced: " << buses.dequeue() << endl;
	cout << "Empty?: " << buses.empty() << endl;
	cout << "Size: " << buses.size() << endl; */




