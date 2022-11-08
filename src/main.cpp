#include "CMp4Encoder.h"
#include <iostream>

int main(int argc, char** argv)
{

    CMp4Encoder encoder;
    encoder.InitMp4Encoder();
    // encoder.Mp4VEncode();
    // encoder.Mp4AEncode();
    encoder.CloseMp4Encoder();

    return 0;
}