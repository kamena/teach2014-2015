#include <iostream>
#include <list>

using namespace std;


int main() {
	list<int> l;
	cin.exceptions(ios_base::eofbit | ios_base::badbit | ios_base::failbit);
	
	try {
		int i=0;
		for(;;) {
			cin >> i;
			l.push_back(i);
		}
	
	} catch(const ios_base::failure& ex) {
		cout << "ios exception catched..." << endl;
	}

	for(list<int>::iterator it=l.begin(); it!=l.end();++it) {
		cout << *it << ' ';
	}
	cout << endl;

	return 0;
}
