#include <vector>
#include <math.h>
#include <iostream>
using namespace std;

namespace Statistics {
    class ComputeStatistics; 
}
class ComputeStatistics {
   public:
    std::vector<float> computeStatistics;
    float maximum;
    float minimum;
    float average;
   ComputeStatistics(const std::vector<float> &ar);
};

//namespace Statistics {
 //  Stats ComputeStatistics(const std::vector<___>& );
//}
