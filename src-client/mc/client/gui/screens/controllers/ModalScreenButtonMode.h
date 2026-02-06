#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ModalScreenButtonMode : int {
    ThreeButtons                   = 0,
    DestructiveThreeButtons        = 1,
    TwoButtonsCheckbox             = 2,
    TwoButtonsLeftRight            = 3,
    DestructiveTwoButtonsLeftRight = 4,
    OneButtonMiddle                = 5,
    OneButtonMiddleCheckbox        = 6,
    NoButtons                      = 7,
};
