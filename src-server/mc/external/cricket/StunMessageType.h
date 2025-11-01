#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class StunMessageType : ushort {
    StunInvalidMessageType = 0,
    StunBindingRequest = 1,
    StunBindingIndication = 17,
    StunBindingResponse = 257,
    StunBindingErrorResponse = 273,
    GoogPingRequest = 512,
    GoogPingResponse = 768,
    GoogPingErrorResponse = 784,
};

}
