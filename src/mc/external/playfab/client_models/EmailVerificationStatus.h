#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFab::ClientModels {

enum class EmailVerificationStatus : int {
    EmailVerificationStatusUnverified = 0,
    EmailVerificationStatusPending    = 1,
    EmailVerificationStatusConfirmed  = 2,
};

}
