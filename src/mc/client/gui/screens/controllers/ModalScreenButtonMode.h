#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ModalScreenButtonMode : int {
    ThreeButtons                   = 0,
    DestructiveThreeButtons        = 1,
    TwoButtonsLeftRight            = 2,
    DestructiveTwoButtonsLeftRight = 3,
    OneButtonMiddle                = 4,
    NoButtons                      = 5,
};
