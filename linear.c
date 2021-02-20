/* lineara linear array DATA contains n element and supposea specific ITEM of information is given, we want either to find the location LOC of ITEM in arry DATA,
or to send some message, such as loc = 0, to indicate that ITEM does not appere in DATA, the linear search algorithm solve this problam by compering ITEM,
one by one, with each element in DATA. that is we compare ITEM with DATA[1], DATA[2], and so on, until we find LOC such that ITEM = DATA[LOC] */

#include <stdio.h>
int main()
{
    int DATA[10] = {22, 65, 1, 99, 32, 17, 74, 49, 33, 2};
    int ITEM = 17;
    int N, LOC, K;
    N = 10;
    K = 0;
    LOC = -1;
    while (LOC == -1 && K < N)
    {
        if (ITEM == DATA[K])
            LOC = K;
        K = K + 1;
    }
    if (LOC == -1)
        printf("ITEM is not in the array DATA");
    else
        printf("%d is the location of ITEM", LOC);
    return 0;
}