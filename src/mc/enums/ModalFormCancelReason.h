#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ModalFormCancelReason : schar {
    UserClosed = 0x0,
    UserBusy   = 0x1,
};
