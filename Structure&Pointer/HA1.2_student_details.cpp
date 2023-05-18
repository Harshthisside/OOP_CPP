#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int roll;
    float marks[5];
};

void swap(struct student s[], int a, int b)
{
    struct student temp = s[a];
    s[a] = s[b];
    s[b] = temp;
}

void swap_arr(float s[], int a, int b)
{
    float temp = s[a];
    s[a] = s[b];
    s[b] = temp;
}

void total_marks(struct student s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        float total = 0;
        for (int j = 0; j < 5; j++)
        {
            total = total + s[i].marks[j];
        }
        float percentage = (total / 500) * 100;
        cout << "Total marks of " << s[i].name << " is: " << total << endl;
        cout << "Percantage of " << s[i].name << " is: " << percentage << "%" << endl;
    }
}

void display(struct student s[], int n, int search)
{
    for (int i = 0; i < n; i++)
    {
        if (s[i].roll == search)
        {
            cout << "The name of the student is " << s[i].name << endl;
            cout << "Marks obtained in 5 subjects: " << endl;
            for (int j = 0; j < 5; j++)
            {
                cout << "Marks in subject " << j + 1 << " :" << s[i].marks[j] << endl;
            }
            return;
        }
    }
    cout << "Student not found!" << endl;
}

void display_students(struct student s[], int n, int start, int end)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        float total = 0;
        for (int j = 0; j < 5; j++)
        {
            total = total + s[i].marks[j];
        }
        float percentage = (total / 500) * 100;

        if (percentage >= start && percentage <= end)
        {
            c++;
            cout << "The name of the student is " << s[i].name << endl;
            cout << "The roll of the student is " << s[i].roll << endl;
            cout << "Marks obtained in 5 subjects: " << endl;
            for (int j = 0; j < 5; j++)
            {
                cout << "Marks in subject " << j + 1 << " :" << s[i].marks[j] << endl;
            }
        }
    }
    if (c == 0)
        cout << "Student not found!" << endl;
}

void sort(struct student s[], int n)
{
    float total[1000];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            total[i] = total[i] + s[i].marks[j];
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (total[j] > total[j + 1])
            {
                swap(s, j, j + 1);
                swap_arr(total, j, j + 1);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " - " << total[i] << " marks" << endl;
    }
}

int main()
{
    struct student s[100];
    int n;

    cout << "Enter the number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "For student " << i + 1 << ": " << endl;
        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter roll number: ";
        cin >> s[i].roll;

        for (int j = 0; j < 5; j++)
        {
            cout << "Enter marks of subject " << j + 1 << ": ";
            cin >> s[i].marks[j];
        }
    }
    cout << endl;
    total_marks(s, n);

    cout << endl;
    int search;
    cout << "Enter a roll number: ";
    cin >> search;
    cout << endl;
    display(s, n, search);

    int start, end;
    cout << endl;
    cout << "Enter the range: ";
    cin >> start >> end;
    cout << endl;
    cout << "Students with percentage in the range of " << start << " and " << end << " are:" << endl
         << endl;
    display_students(s, n, start, end);

    cout << endl;
    cout << "The student name in ascending order of their marks is as follows: " << endl
         << endl;
    sort(s, n);
}