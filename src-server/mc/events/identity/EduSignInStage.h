#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity {

enum class EduSignInStage : int {
    Unknown = 0,
    AttemptingActiveDirectory = 1,
    FailedActiveDirectory = 2,
    AttemptingMuts = 3,
    FailedMuts = 4,
    PresentingingEula = 5,
    Success = 6,
    RefreshingActiveDirectory = 7,
    RefreshActiveDirectorySuccess = 8,
    RefreshActiveDirectoryFailed = 9,
    AttemptingMutsDemo = 10,
    SuccessDemo = 11,
    PresentingAgeVerification = 12,
    AgeVerifyStarted = 13,
    CanceledActiveDirectory = 14,
};

}
