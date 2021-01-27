#include "stats.h"

class Statistics::ComputeStatistics {
    private:
        std::vector<float> computeStatistics;

   public:
    float maximum;
    float minimum;
    float average;
   ComputeStatistics(const std::vector<float> &ar);
};

Statistics::ComputeStatistics::ComputeStatistics(const std::vector<float> &ar)
{
    float sum;
    computeStatistics = ar;
    
    if(computeStatistics.size() == 0)
    {
    average = NAN;
    minimum = NAN;
    maximum = NAN;
    }
    else
    {
        minimum = *std::min_element(computeStatistics.begin(), computeStatistics.end());
        maximum = *std::max_element(computeStatistics.begin(), computeStatistics.end());
        for(std::size_t i = 0; i < computeStatistics.size(); i++)
            sum += computeStatistics.at(i);
            average =  sum/computeStatistics.size();
    }
}
