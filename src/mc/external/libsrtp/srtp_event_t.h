#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class srtp_event_t : int {
    SsrcCollision    = 0,
    KeySoftLimit     = 1,
    KeyHardLimit     = 2,
    PacketIndexLimit = 3,
};
