#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\tGRADE OF A STUDENT\n");
    printf("\nEnter the marks obtained by the student : ");
    printf("\n[ Maths, Science, Social Studies, English, Language ]\n");
    int maths, science, social, english, language;
    scanf("%d%d%d%d%d", &maths, &science, &social, &english, &language);

    int t = maths + science + social + english + language;

    if ( maths > 49 && science > 49 && social > 49 && english > 49 && language > 49 )
    {
        printf("\nTotal marks obtained is %d\n",t);
        if(t >= 450)
        {
            printf("\nThe grade obtained by the student is O");
        }
        else if(t>=400)
        {
            printf("\nThe grade obtained by the student is A");
        }
        else if(t>=350)
        {
            printf("\nThe grade obtained by the student is B");
        }
        else if(t>=300)
        {
            printf("\nThe grade obtained by the student is C");
        }
    }
    else{
        printf("\nSorry, the student has failed");
    }
    printf("\n");
    return 0;
}
