#include<stdio.h>
int main ()
{
    int choice,a,b,c,d,e,f,g,h,i;
    printf("The various kinds of offers:\n1. SMS Offer:\n2. Talk-Time Offer.\n3. Internet Offer.\n4. Monthly Plan Offer.\n5. Recharge Offer.\n6. Star Customer Offer.\n7. Gold Customer Offer.\n8. Platinum Customer Offer.\n9. Pay as you Go.");
    printf("\nChoose an offer:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("SMS Offer:Validity 7days\n1: 50 SMS. \n2: 100 SMS.\n3: 300 SMS.\nSelect Your Package:\n");
        scanf("%d",&a);
        switch (a)
        {
            case 1:
                printf("SMS Offer: 50 SMS :5.99 Taka,validity 7days.");
                break;
            case 2:
                printf("SMS Offer: 100 SMS :8.02 Taka,validity 7days.");
                break;
            case 3:
                printf("SMS Offer: 300 SMS :15.00 Taka,validity 7days.");
                break;
        }
        break ;
    case 2:
        printf("Talk-Time Offer:Validity 15days\n1: 50 Minutes.\n2: 300 Minutes.\n3: 1000 Minutes.\nSelect Your Package:\n");
        scanf("%d",&b);
        switch (b)
        {
            case 1:
                printf("Talk-Time Offer: 50 Minutes :31.95 Taka,validity 15days.");
                break ;
            case 2:
                printf("Talk-Time Offer: 300 Minutes :179.89 Taka,validity 15days.");
                break;
            case 3:
                printf("Talk-Time Offer: 1000 Minutes :599.63 Taka,validity 15days.");
                break;
        }
        break ;
    case 3:
        printf("Internet Offer:Validity 30days\n1. 100 MB.\n2. 250 MB.\n3. 1.5 GB.\nSelect Your Package:\n");
        scanf("%d",&c);
            switch(c)
            {
                case 1:
                    printf("Internet Offer: 100 MB : 42.70 Taka,validity 30days.");
                    break;
                case 2:
                    printf("Internet Offer: 250 MB : 52.37 Taka,validity 30days.");
                    break ;
                case 3:
                    printf("Internet Offer: 1.5 GB : 93.95 Taka,validity 30days.");
                    break;
            }
            break;
    case 4:
        printf("Monthly Plan Offer:Validity 30days\n1. 500 MB, 200 SMS, 100 Minutes Talk-Time.\nSelect Your Package:\n");
        scanf("%d",&d);
            switch(d)
            {
                case 1:
                    printf("Monthly Plan Offer: 500 MB, 200 SMS, 100 Minutes Talk-Time: 293.47 Taka,validity 30days.");
                    break;
            }
            break ;
    case 5:
        printf("Recharge Offer: Validity 21days\n1. 250 MB, 20 SMS.\nSelect Your Package:\n");
        scanf("%d",&e);
            switch(e)
             {
                case 1:
                    printf("Recharge Offer: 250 MB, 20 SMS,validity 21days.Recharge: 29 Taka.");
                    break ;
             }
          break;
    case 6:
         printf("Star Customer Offer:Validity 45days\n1. 3 GB, 100 Minutes, 50 SMS.\nSelect Your Package:\n");
         scanf("%d",&f);
          switch (f)
          {
              case 1:
              printf("Star Customer Offer: 3 GB, 100 Minutes, 50 SMS: 120 Taka,validity 45days.");
              break;
          }
            break;
    case 7:
        printf("Gold Customer Offer:Validity 45days\n1. 5GB, 150 Minutes, 100 SMS.\nSelect Your Package:\n");
        scanf("%d",&g);
                switch (g)
                {
                case 1:
                    printf("Gold Customer Offer: 5GB, 150 Minutes, 100 SMS: 130 Taka,validity 45days.");
                    break;
                }
        break;
    case 8:
        printf("Platinum Customer Offer:Validity 45days\n1. 9 GB, 200 Minutes, 150 SMS.\nSelect Your Package:\n");
        scanf("%d",&h);
        switch(h)
        {
        case 1:
            printf("Platinum Customer Offer: 9 GB, 200 Minutes, 150 SMS: 150 Taka,validity 45days.");
            break;
        }
        break ;
    case 9:
            printf("Pay as you Go:Validity till balance remains\n1. 0.60 Taka per second\nSelect Your Package:\n");
            scanf("%d",&i);
            switch(i)
            {
            case 1:
                printf("Pay as you Go: 0.60 Taka per second: 0.60 Taka,validity till balance remains.");
                break;
            }
            break;
    }
 return 0;
}
