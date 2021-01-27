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

//namespace Statistics {
 //  Stats ComputeStatistics(const std::vector<___>& );
//}
