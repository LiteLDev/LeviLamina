#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PacketReliability : int {
    Unreliable                    = 0x0,
    UnreliableSequenced           = 0x1,
    Reliable                      = 0x2,
    ReliableOrdered               = 0x3,
    ReliableSequenced             = 0x4,
    UnreliableWithAckReceipt      = 0x5,
    ReliableWithAckReceipt        = 0x6,
    ReliableOrderedWithAckReceipt = 0x7,
    Count                         = 0x8,
};
