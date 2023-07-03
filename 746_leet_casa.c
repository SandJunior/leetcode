//não consegui descobrir o porquê de constar como wrong answer, não sei onde tá o problema :(

int minCost(int x, int y){
    if (x > y){
        return y;
    }
        return x;
}

int minCostClimbingStairs(int *cost, int costSize)
{
    int *costTwo = (int *)malloc(costSize * sizeof(int));
    for (int i = costSize - 3; i >= 0; i--)
    {
        costTwo[i] = cost[i] + minCost(costTwo[i + 1], costTwo[i + 2]);
    }
    return minCost(costTwo[0], costTwo[1]);
}
