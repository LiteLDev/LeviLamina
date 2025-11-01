#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class TurnMessageType : ushort {
    StunAllocateRequest = 3,
    StunAllocateResponse = 259,
    StunAllocateErrorResponse = 275,
    TurnRefreshRequest = 4,
    TurnRefreshResponse = 260,
    TurnRefreshErrorResponse = 276,
    TurnSendIndication = 22,
    TurnDataIndication = 23,
    TurnCreatePermissionRequest = 8,
    TurnCreatePermissionResponse = 264,
    TurnCreatePermissionErrorResponse = 280,
    TurnChannelBindRequest = 9,
    TurnChannelBindResponse = 265,
    TurnChannelBindErrorResponse = 281,
};

}
