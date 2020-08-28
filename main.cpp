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
    String Manual = "";
    String TempManual = "";
   String PairNumberInString = "";
 
    for(int MajorColorno= 0; MajorColorno < TelCoColorCoder:: numberOfMajorColors ; MajorColorno++){
        for(int MinorColorno= 0; MinorColorno < TelCoColorCoder:: numberOfMinorColors ; MinorColorno++)
 {           TempManual = "";
       PairNumber = PairNumber + 1;
      TelCoColorCoder::ColorPair pair = TelCoColorCoder::GetColorFromPairNumber(PairNumber);
        TempManual = pair.ToString();
      PairNumberInString = std::to_string(PairNumber);
    } 
        Manual = PairNumberInString + ". " +  PairNumberInString + "\n";
    }
 cout << Manual << endl;
} 

int main() {
    TelCoColorCoder::testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    TelCoColorCoder::testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    TelCoColorCoder::testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    TelCoColorCoder::testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    ToString();
    return 0;
}
