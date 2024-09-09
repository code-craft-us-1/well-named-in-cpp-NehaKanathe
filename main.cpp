#include <iostream>
#include <assert.h>
#include "testColorCode.h"
using namespace TelCoColorCoder;

    int main() {

         //Testing method
        testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
        testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

        testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
        testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
        testPrintColorCodingManual();
        
       //Print color coding manual

        std::cout << TelCoColorCoder::printColorCodingManual()<<std::endl;
        return 0;
    }

