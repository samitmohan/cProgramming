// First sem C Programs
#include <stdio.h>
#include <math.h>

// Sparse
void sparse()
{

    int a[3][3], i, j, val = 0;
    printf("\nEnter the elements of 3*3 matrix in row major order : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
            {
                val++;
            }
        }
    }
    printf("\n The given matrix is : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", a[i][j]);
        }
    }
    if (val > (i * j) / 2) // CONDITION
    {
        printf("Given Matrix is sparse matrix");
    }
    else
    {
        printf("Not sparse matrix");
    }
}

// Palindrome + Reverse (remove temp)

void palindrome()
{
    int num, remainder, rev = 0, temp;
    printf("Enter a number : ");
    scanf("%d", &num);
    temp = num;
    while (num != 0)
    {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num = num / 10;
    }
    printf("Reverse of number : %d", rev);
    if (rev == temp)
    {
        printf("\n Palindrome!");
    }
    else
    {
        printf("\n Not Palindrome!");
    }
}

// Bubble Sort

void bubble_sort()
{
    int i, j, elements, arr[20], swap;

    printf("Enter number of elements : ");
    scanf("%d", &elements);
    for (i = 0; i < elements; i++)
    {
        printf("Enter Number : ");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < elements; i++)
    {
        for (j = 0; j < elements; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
        }
    }
    printf("\nElements in sorted order are : ");
    //to print
    for (i = 0; i < elements; ++i)
    {
        printf("%d,", arr[i]);
    }
}

//  Triangle

void pascal_triangle()
{
    int i, num, row, col, space;
    //clrscr();
    printf("Enter number of rows : ");
    scanf("%d", &num);
    for (row = 0; row < num; row++)
    {
        for (space = 1; space < num - row; space++)
        {
            printf(" ");
        }
        i = 1;
        for (col = 0; col <= row; col++)
        {
            printf("%d", i);
            i = i * (row - col) / (col + 1);
        }
    }
}

// Linear Search

void linear_search()
{
    int i, j, elements, arr[20], key, flag = 0;

    printf("Enter number of elements : ");
    scanf("%d", &elements);
    for (i = 0; i < elements; i++)
    {
        printf("Enter Number : ");
        scanf("%d", &arr[i]);
    }
    printf("\nEnter element to be searched : ");
    scanf("%d", &key);
    for (i = 0; i < elements; i++)
    {
        if (key == arr[i])
        {
            printf("\n The element %d is found in %d position", key, i + 1);
            flag++;
        }
    }
    if (flag == 0)
    {
        printf("\n The element %d is not found", key);
    }
    else
        printf("\nThe element %d is present %d times", key, flag);
}

// Calculator

void calculator()
{
    float num1, num2, result;
    char operand;
    printf("\n Enter expression : ");
    scanf("%f%c%f", &num1, &operand, &num2);

    switch (operand)
    {
    case '+':
        result = num1 + num2;
        printf("Result = %f", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result = %f", result);
        break;

    case '*':
        result = num1 * num2;
        printf("Result = %f", result);
        break;
    case '/':
        result = num1 / num2;
        if (num2 == 0)
        {
            printf("Result is infinite!");
        }
        else
            printf("Result = %f", result);
        break;
    default:
        printf("Invalid Operand");
    }
}

// Quadratic

void quadratic()
{
    float a, b, c, root1, root2, realPart, imagPart, discriminant;
    printf("Enter the coeff of a,b,c \n");
    printf("Enter value of a : ");
    scanf("%f", &a);
    printf("Enter value of b : ");
    scanf("%f", &b);
    printf("Enter value of c : ");
    scanf("%f", &c);
    discriminant = b * b - 4 * a * c;
    // condition for real and different roots
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %f and root2 = %f", root1, root2);
    }

    // condition for real and equal roots
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %f;", root1);
    }

    // if roots are not real
    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %f+%fi and root2 = %f-%fi", realPart, imagPart, realPart, imagPart);
    }
}

// Taylor

void taylor()
{
    int degree, n, i;
    float x, sum, term;
    printf("\n Enter the degree and range : ");
    scanf("%d%d", &degree, &n);
    x = (degree * 3.14) / 180;
    term = x;
    sum = term;
    for (i = 3; i <= n; i += 2)
    {
        term = (-term * pow(x, 2)) / (i * (i - 1));
        sum += term;
    }
    printf("\n Without library function : \n sin(%d) = %f", degree, sum);
    printf("\n With library function: \n sin(%d) = %f", degree, sin(x));
}

// Right Rotate

unsigned int rightrotate(unsigned int x, unsigned int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (x % 2 == 0)
        {
            x = x >> 1;
        }
        else
        {
            x = x >> 1;
            x = x + 32768;
        }
    }
    return x;
}

void right()
{

    unsigned num, n, res;
    printf("Enter the number : ");
    scanf("%u", &num);
    printf("Enter number of rotations : ");
    scanf("%u", &n);
    res = rightrotate(num, n);
    printf("right rotate(%u,%u) = %u", num, n, res);
}

// Factorial

long int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return (n * fact(n - 1));
    }
}

void factorial()
{
    int n, r, ncr;
    printf("Enter value of n and r : ");
    scanf("%d%d", &n, &r);
    ncr = (fact(n) / (fact(r) * fact(n - r)));
    printf("Factorial : %d", ncr);
}

// Files

void files()
{
    FILE *fp1, *fp2, *fp3;
    char name[20];
    int usn;
    fp1 = fopen("studentname.txt", "r");
    fp2 = fopen("usn.txt", "r");
    fp3 = fopen("output.txt", "w");

    for (;;)
    {
        if (fscanf(fp1, "%s", name) > 0)
        {
            if (fscanf(fp2, "%d", &usn) > 0)
            {
                fprintf(fp3, "%s %d \n", name, usn);
            }
            else
                break;
        }
        else
            break;
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
}

// Student USN

struct student
{
    char name[50];
    int roll;
    int marks;
    char grade[10];
};

void students()
{
    struct student s[100];
    int i, n, marks;
    printf("Enter number of students : ");
    scanf("%d", &n);
    printf("Enter information of students : ");
    for (i = 0; i < n; ++i)
    {
        printf("for %d student : ", i++);
        printf("Enter roll number : ");
        scanf("%d", &s[i].roll);
        printf("Enter name : ");
        scanf("%s", &s[i].name);
        printf("Enter marks : ");
        scanf("%d", &s[i].marks);
        printf("Enter grade : ");
        scanf("%s", &s[i].grade);
        printf("\n");
    }
    printf("Dispalying info of all students \n");
    for (i = 0; i < n; i++)
    {
        printf("for %d students : ", i + 1);
        printf("Roll number : %d", s[i].roll);
        printf("Name : %s", s[i].name);
        printf("Marks : %d", s[i].marks);
        printf("Grade : %s", s[i].grade);
        printf("\n");
    }
}

// Time

struct time
{
    int hour, minute, second;
};

void timee()
{
    struct time t1, t2, t3;
    int seconds1, seconds2, total_seconds;
    printf("Enter first time in HH:MM:SS: ");
    scanf("%d %d %d", &t1.hour, &t1.minute, &t1.second);
    printf("Enter second time in HH:MM:SSS : ");
    scanf("%d %d %d", &t2.hour, &t2.minute, &t2.second);
    seconds1 = t1.hour * 60 * 60 + t1.minute * 60 + t1.second;
    seconds2 = t2.hour * 60 * 60 + t2.minute * 60 + t2.second;
    total_seconds = seconds2 - seconds1;
    t3.minute = total_seconds / 60;
    t3.hour = t3.minute / 60;
    t3.minute = t3.minute % 60;
    t3.second = total_seconds % 60;
    printf("Time Difference is %d:%d:%d", t3.hour, t3.minute, t3.second);
}

// Sum

void summ()
{
    int i, n, sum = 0, num = 0, var;
    float mean, std_dev, variance;
    int *a;
    printf("Enter size of array : ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    printf("Enter elements of Array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + *(a + i);
        mean = (float)sum / (float)n;
    }
    for (i = 0; i < n; i++)
    {
        var = (*(a + i)) - (int)mean;
        num = num + var * var;
    }

    variance = (float)num / (float)n;
    std_dev = sqrt(variance);
    printf("Sum is %d", sum);
    printf("Mean is %f", mean);
    printf("Standard Deviation is ", std_dev);

    free(a);
}

// String

void string()
{
    char s1[10], s2[10];
    int l1, l2, option, dig;
    char *ch;
    //clrscr()
    do
    {
        printf("Enter string 1 : ");
        scanf("%s", s1);
        printf("Enter string 2 : ");
        scanf("%s", s2);
        printf(" MENU :\n 1-cpy \n 2-length \n 3-rev \n 4- concat \n 5- compare \n\n");
        printf("Enter your option : ");
        scanf("%d", *option);
        switch (option)
        {
        case 1:
            strcpy(s1, s2);
            printf("\n Copied string is : ");
            puts(s1);
            break;
        case 2:
            l1 = strlen(s1);
            l2 = strlen(s2);
            printf("Length of string 1 = %d and string 2 = %d", l1, l2);
            break;

        case 3:
            strrev(s1);
            strrev(s2);
            printf("Reverse of strings are : ");
            puts(s1);
            puts(s2);
            break;
        case 4:
            strcat(s1, s2);
            printf("Concat string is : ");
            puts(s1);
            break;
        case 5:
            dig = strcmp(s1, s2);
            if (dig == 0)
            {
                printf("Both strings are equal");
            }
            else
            {
                printf("Not equal! ");
                break;
            }
        }
        printf(" Do you want to continue? (y/n) : ");
        scanf("%c", &ch);

    } while (ch == 'y' || ch == 'Y');
}

int main()
{
    //palindrome();
    //bubble_sort();
    //pascal_triangle();
    //linear_search();
    //calculator();
    //quadratic();
    //taylor();
    //right();
    //factorial();
    //files();
    //students();
    //timee();
    //summ();
    //string();
    return 0;
}
