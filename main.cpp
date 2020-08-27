#include <iostream>
#include<string>
#include <assert.h>
#include "MajorMinor.h"
#include "MajorMinorfunc.h"
#include "TeleColorTest.h"

using namespace TelCoColorCoder;

void ToString()
{   
    for(int pair_numb= 1; pair_numb < 26; pair_numb++){
        TelCoColorCoder::ColorPair pair = TelCoColorCoder::GetColorFromPairNumber(pair_numb);
        std::cout<<"Pair number: "<<pair_numb<<" "<<"Color Pair: "<<pair.ToString()<<std::endl;
    }
}

int main() {
    TelCoColorCoder::testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    TelCoColorCoder::testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    TelCoColorCoder::testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    TelCoColorCoder::testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    ToString();
    return 0;
}
