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
        costTwo[i] = cost[i] + minCost(cost[i + 1], cost[i + 2]);
    }
    return minCost(costTwo[0], costTwo[1]);
}