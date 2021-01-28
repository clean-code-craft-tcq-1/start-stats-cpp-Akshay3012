#include <vector>
#include <math.h>
#include <iostream>
using namespace std;

namespace Statistics {
  
class ComputeStatistics {
   public:
    std::vector<float> computeStatistics;
    float max;
    float min;
    float average;
   ComputeStatistics(const std::vector<float> &ar);
};
}

class IAlerter
{
    
};

class EmailAlert : public IAlerter
{
    public:
        bool emailSent;
};

class LEDAlert : public IAlerter
{
    public:
        bool ledGlows;
};

class StatsAlerter
{
    public:
    float maxThreshold;
    EmailAlert emailAlert;
    LEDAlert ledAlert;
    std::vector<IAlerter*> alerters = {&emailAlert, &ledAlert};
    std::vector<float> computeMax;
    //StatsAlerter();
    StatsAlerter(const float maxThreshold, std::vector<IAlerter*> alerters);
    void checkAndAlert(const std::vector<float> &ar);
};

//namespace Statistics {
 //  Stats ComputeStatistics(const std::vector<___>& );
//}
