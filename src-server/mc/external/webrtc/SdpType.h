#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class SdpType : int {
    KOffer = 0,
    KPrAnswer = 1,
    KAnswer = 2,
    KRollback = 3,
};

}
