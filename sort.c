#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void swap(float *item1, float *item2) {
    float shuff = *item1;
	*item1 = *item2;
	*item2 = shuff;
}

void getPrices(float *item1, float *item2, float *item3) {

    printf("Enter the price of item 1: ");
    scanf("%f",item1);

    printf("Enter the price of item 2: ");
    scanf("%f",item2);

    printf("Enter the price of item 3: ");
    scanf("%f",item3);

    if (*item1 > *item2) {
        swap(item1, item2);
    }

    if (*item1 > *item3) {
        swap(item1, item3);
    }

    if (*item2 > *item3) {
        swap(item2, item3);
    }

}


int main() {
    float *price1;
    price1 = (float *)malloc(10 * sizeof(float));

    float *price2;
    price2 = (float *)malloc(10 * sizeof(float));
    
    float *price3;
    price3 = (float *)malloc(10 * sizeof(float));

    getPrices(price1, price2, price3);

    printf("The three price are: %.2f %.2f %.2f\n",*price1,*price2,*price3);

}
