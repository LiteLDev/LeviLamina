#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ModalFormCancelReason : char {
    UserClosed = 0x0,
    UserBusy   = 0x1,
};
