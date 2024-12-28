#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFab::ClientModels {

enum class TitleActivationStatus : int {
    TitleActivationStatusNone              = 0,
    TitleActivationStatusActivatedTitleKey = 1,
    TitleActivationStatusPendingSteam      = 2,
    TitleActivationStatusActivatedSteam    = 3,
    TitleActivationStatusRevokedSteam      = 4,
};

}
