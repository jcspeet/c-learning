#include <stdio.h>
#include <string.h>

#define MAX_TASKS 30

char tasks[MAX_TASKS][50];
int task_count = 0;
void addTask();
void deleteTask();

int main() {
    int choice;
    printf("1. Add a task\n");
    printf("2. View all tasks\n");
    printf("3. Delete a task\n");
    printf("4. Exit\n");
    scanf("%d", &choice);

    printf("You chose %d\n", choice);

    if (choice == 1) {
        addTask();
    }
    


}

 void addTask(){
    char task[50];
    printf("What task do you wish to add?\n");
    scanf("%s", task);

    strcpy(tasks[task_count], task);

}


 void deleteTask(){
 }
