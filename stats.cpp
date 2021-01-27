#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include "stats.h"
using namespace std;


Statistics::ComputeStatistics::ComputeStatistics(const std::vector<float> &ar)
{
    float sum;
    computeStatistics = ar;
    
    if(computeStatistics.size() == 0)
    {
    average = NAN;
    min = NAN;
    max = NAN;
    }
    else
    {
        min = *std::min_element(computeStatistics.begin(), computeStatistics.end());
        max = *std::max_element(computeStatistics.begin(), computeStatistics.end());
        for(std::size_t i = 0; i < computeStatistics.size(); i++)
        {
            sum += computeStatistics.at(i);
            average =  sum/computeStatistics.size();
        }
    }
}
