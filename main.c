// Write your code in this file

#include <stdio.h>

typedef struct
{
    char name[11];
    int scores[13];
} Student;

int main()
{
    int nr_of_students = 5;
    Student students[nr_of_students];

    // zero out name arrays
    for (int i = 0; i < nr_of_students; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            students[i].name[j] = '\0';
        }
    }

    for (int i = 0; i < nr_of_students; i++)
    {
        scanf("%s %d %d %d %d %d %d %d %d %d %d %d %d %d",
              students[i].name,
              &students[i].scores[0],
              &students[i].scores[1],
              &students[i].scores[2],
              &students[i].scores[3],
              &students[i].scores[4],
              &students[i].scores[5],
              &students[i].scores[6],
              &students[i].scores[7],
              &students[i].scores[8],
              &students[i].scores[9],
              &students[i].scores[10],
              &students[i].scores[11],
              &students[i].scores[12]);

        // scanf("%s", students[i].name); // testing names
    }

    // format all names
    for (int i = 0; i < 5; i++)
    {
        // check first letter of name
        if (students[i].name[0] > 91) // larger than 90 it is lowercase
        {
            students[i].name[0] -= 32; // 32 is the ASCII table offset between upper and lowercase
        }
        for (int j = 1; j < 10; j++)
        {
            // check rest of name
            if (students[i].name[j] < 91) // 90 and under is uppercase
            {
                students[i].name[j] += 32; // 32 is the ASCII table offset between upper and lowercase
            }
        }
    }
    for (int i = 0; i < nr_of_students; i++)
    {
        printf("\n%s %d %d %d %d %d %d %d %d %d %d %d %d %d",
               students[i].name,
               students[i].scores[0],
               students[i].scores[1],
               students[i].scores[2],
               students[i].scores[3],
               students[i].scores[4],
               students[i].scores[5],
               students[i].scores[6],
               students[i].scores[7],
               students[i].scores[8],
               students[i].scores[9],
               students[i].scores[10],
               students[i].scores[11],
               students[i].scores[12]);

        // printf("\n%s", students[i].name); // testing names
    }
    return 0;
}
