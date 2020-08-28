#include <iostream>
#include<string>
#include <assert.h>
#include "MajorMinor.h"
#include "MajorMinorfunc.h"
#include "TeleColorTest.h"
using namespace std;
using namespace TelCoColorCoder;

void ToString()
{   int PairNumber = 0;
    string Manual = "";
   string PairNumberInString = "";
 
    for(int MajorColorno= 0; MajorColorno < TelCoColorCoder:: numberOfMajorColors ; MajorColorno++){
        for(int MinorColorno= 0; MinorColorno < TelCoColorCoder:: numberOfMinorColors ; MinorColorno++)
 {   string majorcolorName = TelCoColorCoder::MajorColorNames[ MajorColorno];
     string minorcolorName = TelCoColorCoder::MinorColorNames[MinorColorno];      
       PairNumber = PairNumber + 1;
      PairNumberInString = to_string(PairNumber);
      Manual = Manual + PairNumberInString + ". " + "Major: " + majorcolorName + ", Minor: " + minorcolorName + "\n";
    }
    }
 cout << Manual << endl;
} 

int main() {
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    ToString();
    return 0;
}
