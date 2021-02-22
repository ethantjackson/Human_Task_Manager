# HUMAN TASK MANAGER

 > Authors: [Christopher Chen](https://github.com/36tofu),
            [Christopher Kim](https://github.com/JimmyNoBob),
            [Ethan Jackson](https://github.com/ethantjackson)
            
 * Time management is a significant determinant of productivity. Human Task Manager helps visualize and manage your schedule, creating and displaying hierarchies of tasks and tasks list through the command line. Each task and task list has assignable features, including a title, due date, description, and done indicator. Human Task Manager will also utilize save features and user management to allow multiple users to quickly access, modify, and save their schedules for later use. Each user will have their own password and user data.
  * Human Task Manager will utilize c++, and will be able to utilize file input and output to enable reading and writing of save files.
  * Human Task Manager will receive input from text files and write to text files to implement load and save features. It will also utilize command line input and output to interface with the user. User interactions will include: adding/removing/changing users, adding/removing tasks and changing task/task list parameters, saving task lists, undoing to a previous save, outputting the task list to the terminal, and visually navigating user task hierarchies.
  * Human Task Manager will utilize the Composite and Singleton Design Patterns. 
  * The Composite design pattern will be used to implement each user's task lists. The Composite design pattern consists of leafs and composite objects. Respectfully, these components are represented as tasks and task lists. By introducing the Composite design pattern, the hierarchal nature of task lists can be best implemented, and the potential difficulty of recursive object hierarchies is addressed. Furthermore, shared behavior for tasks and task lists can be implemented through the Composite Pattern, and users can treat their tasks and tasklists identically. 
  * The Singleton design pattern will be used to implement the user management class. This design pattern is useful for user management as the program will only utilize one list of users, and will only allow one current user at a time. The program would also benefit from a global method for controlling this user list. The Singleton design pattern avoids the instantiation of multiple user lists and avoids ambiguity in how this single user list can be managed.
  
   * Composite Design Pattern: The composite design pattern is used to implement a hierarchy of tasks and task lists. The leaf Tasks and composite TaskLists inherit from a Component interface which defines shared functionality. When add() is called on a Task, the Task is replaced with a TaskList. 
 
>![Composite Diagram (3)](https://user-images.githubusercontent.com/68174967/108037816-f64be280-6fee-11eb-9cc2-3ffcf182d33a.JPG)

 * Singleton: The Singleton design pattern is used to implement the UserControl class. UserControl manages the Users of Human Task Manager, and signIn() conducts the login process when the application is running. Regarding the User class, the homeList holds the User’s entire list of tasks, while currList is used in conjunction with the navigate function to explore and manipulate the User’s different sub-tasks.

>![Singleton Diagram (3)](https://user-images.githubusercontent.com/57571449/108030581-5721ed80-6fe4-11eb-83df-3bb20ad241d0.png)
