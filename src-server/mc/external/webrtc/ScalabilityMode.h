#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class ScalabilityMode : uchar {
    KL1T1 = 0,
    KL1T2 = 1,
    KL1T3 = 2,
    KL2T1 = 3,
    KL2T1h = 4,
    KL2T1Key = 5,
    KL2T2 = 6,
    KL2T2h = 7,
    KL2T2Key = 8,
    KL2T2KeyShift = 9,
    KL2T3 = 10,
    KL2T3h = 11,
    KL2T3Key = 12,
    KL3T1 = 13,
    KL3T1h = 14,
    KL3T1Key = 15,
    KL3T2 = 16,
    KL3T2h = 17,
    KL3T2Key = 18,
    KL3T3 = 19,
    KL3T3h = 20,
    KL3T3Key = 21,
    KS2T1 = 22,
    KS2T1h = 23,
    KS2T2 = 24,
    KS2T2h = 25,
    KS2T3 = 26,
    KS2T3h = 27,
    KS3T1 = 28,
    KS3T1h = 29,
    KS3T2 = 30,
    KS3T2h = 31,
    KS3T3 = 32,
    KS3T3h = 33,
};

}
