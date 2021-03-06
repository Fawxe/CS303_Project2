
#include <string>
#include <vector>
#include "Rating.h"
using namespace::std;

class Customer {
public:
	int getID() const { return ID; };
	string getName() const { return name; };
	Rating getRating(Rating r) {
		for (int i = 0; i < ratings.size(); i++) {
			if (ratings.at(i).getBookID == r.getBookID) return ratings.at(i);
		}
	};

	void setID(int x) { ID = x; };
	void setName(string n) { name = n; };
	void addRating(Rating r) { ratings.push_back(r); };

private:
	int ID;
	string name;
	vector<Rating> ratings;
};

