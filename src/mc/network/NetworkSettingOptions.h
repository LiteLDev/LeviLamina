#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/PacketCompressionAlgorithm.h"

struct NetworkSettingOptions {
public:
    ushort                     mCompressionThreshold;             // this+0x0
    PacketCompressionAlgorithm mCompressionAlgorithm;             // this+0x2
    bool                       mClientThrottleEnabled;            // this+0x4
    int                        mClientThrottleThreshold;          // this+0x8
    float                      mClientThrottleScalar;             // this+0xc
    bool                       mRaknetJoinFloodProtectionEnabled; // this+0x10
    bool                       mEncryptionDisabled;               // this+0x11
};
