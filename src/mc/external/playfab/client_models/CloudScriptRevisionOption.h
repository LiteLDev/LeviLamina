#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFab::ClientModels {

enum class CloudScriptRevisionOption : int {
    CloudScriptRevisionOptionLive     = 0,
    CloudScriptRevisionOptionLatest   = 1,
    CloudScriptRevisionOptionSpecific = 2,
};

}
