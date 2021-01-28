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
    public:
    virtual void setEmail(bool x)
    {

    }
    virtual void setLedStatus(bool x)
    {

    }
    
};

class EmailAlert : public IAlerter
{
    public:
        bool emailSent;
        void setEmail(bool x)
        {
            emailSent = x;
        }
};

class LEDAlert : public IAlerter
{
    public:
        bool ledGlows;
        void setLedStatus(bool x)
        {
            ledGlows =x;
        }
};

class StatsAlerter
{
    public:
    float maxThreshold;
    EmailAlert emailAlert;
    LEDAlert ledAlert;
    std::vector<IAlerter*> alerters = {&emailAlert, &ledAlert};
    std::vector<float> computeMax;
    StatsAlerter(const float maxThreshold, std::vector<IAlerter*> alerters);
    void checkAndAlert(const std::vector<float> &ar);
};
