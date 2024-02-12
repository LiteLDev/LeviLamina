#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/resources/PacketCompressionAlgorithm.h"

struct NetworkSettingOptions {
public:
    ushort                     mCompressionThreshold;
    PacketCompressionAlgorithm mCompressionAlgorithm;
    bool                       mClientThrottleEnabled;
    schar                      mClientThrottleThreshold;
    float                      mClientThrottleScalar;
};
