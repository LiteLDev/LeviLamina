#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DlcUIState : int {
    Init                               = 0,
    Waiting                            = 1,
    CheckDlcState                      = 2,
    DownloadDlc                        = 3,
    Error                              = 4,
    FinalCallback                      = 5,
    Finished                           = 6,
    Cancelled                          = 7,
    OptionallyShowSignInProgressScreen = 8,
    WaitForSignIn                      = 9,
};
