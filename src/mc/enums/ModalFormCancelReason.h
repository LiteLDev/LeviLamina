#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ModalFormCancelReason : int8_t {
    UserClosed = 0x0,
    UserBusy   = 0x1,
};
