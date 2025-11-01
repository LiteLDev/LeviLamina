#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class RtcpTypes : int {
    KRtcpTypeSR = 200,
    KRtcpTypeRR = 201,
    KRtcpTypeSDES = 202,
    KRtcpTypeBye = 203,
    KRtcpTypeApp = 204,
    KRtcpTypeRTPFB = 205,
    KRtcpTypePSFB = 206,
};

}
