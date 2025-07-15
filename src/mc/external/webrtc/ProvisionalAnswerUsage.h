#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class ProvisionalAnswerUsage : int {
    KProvisionalAnswerNotUsed = 0,
    KProvisionalAnswerLocal   = 1,
    KProvisionalAnswerRemote  = 2,
    KProvisionalAnswerMax     = 3,
};

}
