#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class IceCandidateType : int {
    KHost = 0,
    KSrflx = 1,
    KPrflx = 2,
    KRelay = 3,
};

}
