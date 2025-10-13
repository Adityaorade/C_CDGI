#include <stdio.h>

int main()
{
    printf("~🙏suswagatam🙏~ \n ~from Fatema.");
    float physics, chemistry, maths, computer, biology, percentage;

    printf("\nenter the obtained marks of physics ");
    scanf("%f", &physics);

    printf("enter the obtained marks of chemistry");
    scanf("%f", &chemistry);

    printf("enter the obtained marks of maths");
    scanf("%f", &maths);

    printf("enter the obtained marks of english");
    scanf("%f", &computer); // Yeh kya hua bhai! “english” likha, par variable ka naam “computer” hai. Naam aur kaam alag chal rahe hain!

    printf("enter the obtained marks of hindi");
    scanf("%f", &biology); // Yahaan bhi wahi kahani — “hindi” puchh rahe ho par data “biology” me jaa raha hai!

    percentage = (physics + chemistry + maths + computer + biology) * 100 / 500; // Formula sahi hai, par agar 500.0 likh do to aur safe ho jaayega (float division ke liye).

    printf("total scored percentage is:%f \n", percentage); // ye chalega, par output me 6 decimal aa jayenge. Agar smart lagna hai to “%.2f” likho.

    if (percentage >= 90)
        printf("grade A");
    else
    {
        if (percentage >= 80)
            ; //  Arre bhai! Ye semicolon laga kar if ka gala ghont diya! Ab ye if kuch kaam nahi karega.
        printf("grade B");
    } //  Ye toh har baar chalega, chahe percentage kuch bhi ho!
    else
    { //  Compiler yahan confuse ho gaya — pehle wale if ka toh end hi ho gaya semicolon se!
        if (percentage >= 70)
            ; //  Fir se semicolon daal diya — ab ye bhi bekaar ho gaya.
        printf("grade C");
    } //  Ye bhi hamesha chalega.
    else
    { //  Ye toh ek ke upar ek else lag rahe hain, jaise “if” kidhar gaya hi nahi.
        if (percentage >= 60)
            ; //  Same semicolon wala dukh.
        printf("grade D");
    } //  Chalti firti line — hamesha print ho jayegi.
    else
    { //  Nested if-else ka structure pura hil gaya hai.
        if (percentage >= 40)
            ; // Aur semicolon maar diya!
        printf("grade E");
    } //  Ye bhi sab time chalega.
    else
    {
        printf("grade F"); //  Ye line sahi hai, par upar ke sab error ke chakkar me kabhi chal nahi paayegi!
    }
    return 0;
}

//**************YAHA SE MERE 2 CODE HE  COMPARE KER KE DEKHNA KYA MISTAKE HE 22, 25, 28, 31,21–35,24, 27, 30, 33,13, 15,17,16,35 in line no me ****************

// by using the leader
// #include <stdio.h>

// int main()
// {
//     printf("~🙏 Suswagatam 🙏~ \n~From Fatema~\n");

//     float physics, chemistry, maths, english, hindi, percentage;

//     // Taking marks input
//     printf("\nEnter the obtained marks of Physics: ");
//     scanf("%f", &physics);

//     printf("Enter the obtained marks of Chemistry: ");
//     scanf("%f", &chemistry);

//     printf("Enter the obtained marks of Maths: ");
//     scanf("%f", &maths);

//     printf("Enter the obtained marks of English: ");
//     scanf("%f", &english);

//     printf("Enter the obtained marks of Hindi: ");
//     scanf("%f", &hindi);

//     // Calculating percentage
//     percentage = (physics + chemistry + maths + english + hindi) * 100 / 500;

//     printf("\nTotal scored percentage is: %.2f%%\n", percentage);

//     // Grade evaluation
//     if (percentage >= 90)
//         printf("Grade A\n");
//     else if (percentage >= 80)
//         printf("Grade B\n");
//     else if (percentage >= 70)
//         printf("Grade C\n");
//     else if (percentage >= 60)
//         printf("Grade D\n");
//     else if (percentage >= 40)
//         printf("Grade E\n");
//     else
//         printf("Grade F\n");

//     return 0;
// }

// by using the if else nesting


// #include <stdio.h>

// int main()
// {
//     printf("~🙏 Suswagatam 🙏~ \n~From Fatema~\n");

//     float physics, chemistry, maths, english, hindi, percentage;

//     // Taking input
//     printf("\nEnter the obtained marks of Physics: ");
//     scanf("%f", &physics);

//     printf("Enter the obtained marks of Chemistry: ");
//     scanf("%f", &chemistry);

//     printf("Enter the obtained marks of Maths: ");
//     scanf("%f", &maths);

//     printf("Enter the obtained marks of English: ");
//     scanf("%f", &english);

//     printf("Enter the obtained marks of Hindi: ");
//     scanf("%f", &hindi);

//     // Calculate percentage
//     percentage = (physics + chemistry + maths + english + hindi) * 100 / 500;

//     printf("\nTotal scored percentage is: %.2f%%\n", percentage);

//     // NESTED IF LOGIC
//     if (percentage >= 90)
//     {
//         printf("Grade A\n");
//     }
//     else
//     {
//         if (percentage >= 80)
//         {
//             printf("Grade B\n");
//         }
//         else
//         {
//             if (percentage >= 70)
//             {
//                 printf("Grade C\n");
//             }
//             else
//             {
//                 if (percentage >= 60)
//                 {
//                     printf("Grade D\n");
//                 }
//                 else
//                 {
//                     if (percentage >= 40)
//                     {
//                         printf("Grade E\n");
//                     }
//                     else
//                     {
//                         printf("Grade F\n");
//                     }
//                 }
//             }
//         }
//     }

//     return 0;
// }
