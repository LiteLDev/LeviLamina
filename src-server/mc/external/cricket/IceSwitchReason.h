#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

enum class IceSwitchReason : int {
    Unknown = 0,
    RemoteCandidateGenerationChange = 1,
    NetworkPreferenceChange = 2,
    NewConnectionFromLocalCandidate = 3,
    NewConnectionFromRemoteCandidate = 4,
    NewConnectionFromUnknownRemoteAddress = 5,
    NominationOnControlledSide = 6,
    DataReceived = 7,
    ConnectStateChange = 8,
    SelectedConnectionDestroyed = 9,
    IceControllerRecheck = 10,
    ApplicationRequested = 11,
};

}
