// Print Course List and Sort Alphanumerical Order
void PrintCourseList() {

	if (node.size() > 0) { //Validate data from file
		for (int x = 0; x < node.size() - 1; x++) { //sort all course alphanumerically
			for (int y = 0; y < node.size() - x - 1; y++) {
				if (node[y].courseNumber > node[y + 1].courseNumber) {
					swap(node[y + 1], node[y]);
				}
			}
		}
		cout << "Here is a sample schedule:" << endl; //Prints course number and name
		cout << endl;
		for (int x = 0; x < node.size(); x++) {
			cout << node[x].courseNumber << ", ";
			cout << node[x].courseName << endl;
		}
		cout << endl;
	}
}