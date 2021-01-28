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

StatsAlerter::StatsAlerter(const float maxThreshold, std::vector<IAlerter*> alerters)
{
    StatsAlerter* obj = new StatsAlerter(maxThreshold,alerters);
    obj->maxThreshold = maxThreshold;
    
}

void StatsAlerter::checkAndAlert(const std::vector<float> &ar)
{
    computeMax = ar;
    float max_value = 0.0;
    if(computeMax.size()!=0)
    {
        max_value = *std::max_element(computeMax.begin(), computeMax.end());
    }
    
    //StatsAlerter obj_StatsAlerter ;
    StatsAlerter* obj_StatsAlerter = new StatsAlerter(maxThreshold,alerters);
    //StatsAlerter statsAlerter(maxThreshold, alerters);
    EmailAlert obj_EmailAlert;
    LEDAlert obj_LEDAlert;
    
    
    if(max_value>obj_StatsAlerter->maxThreshold)
    {
        obj_EmailAlert.emailSent = true;
        obj_LEDAlert.ledGlows =true;
    }
    
}
