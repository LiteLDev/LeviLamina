#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/resources/PacketCompressionAlgorithm.h"

struct NetworkSettingOptions {
public:
    uint16_t                   mCompressionThreshold;
    PacketCompressionAlgorithm mCompressionAlgorithm;
    bool                       mClientThrottleEnabled;
    int8_t                     mClientThrottleThreshold;
    float                      mClientThrottleScalar;

    // prevent constructor by default
    NetworkSettingOptions& operator=(NetworkSettingOptions const&) = delete;
    NetworkSettingOptions(NetworkSettingOptions const&)            = delete;
    NetworkSettingOptions()                                        = delete;
};
