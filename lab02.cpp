#include "Student.cpp"

int main()
{
  // Declare variables
  int capacity = 0, size = 0, id =0;
  string name;

  cout << "Enter the capacity of dynamic array(int): ";
  cin >> capacity;    
  Student* groups = new Student[capacity];
  std::cout << "\nEnter the student id (int) and name (string): ";
  std::cin >> id >> name;

  //Adding new student objects to the array
  while(id != 0)
  {
    Student newStudent(id, name);
    groups[size] = newStudent;
    size++;
    std::cout << "Enter the student id (int) and name (string): ";
    std::cin >> id >> name;
  }

  for(int i =0; i<size; i++)
    {
      std::cout << "\nThe Students are: " << std::endl;
      groups[i].print_student();
    }

        return 0;
}
