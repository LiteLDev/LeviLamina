#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DlcUIWrapperResult : int {
    Processing     = 0,
    ModalDisplayed = 1,
    EnteringGame   = 2,
    Error          = 3,
};
