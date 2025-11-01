#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/DevConnectionQuality.h"
#include "mc/network/PacketCompressionAlgorithm.h"

struct NetworkSettingOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mCompressionThreshold;
    ::ll::TypedStorage<2, 2, ::PacketCompressionAlgorithm> mCompressionAlgorithm;
    ::ll::TypedStorage<1, 1, bool> mClientThrottleEnabled;
    ::ll::TypedStorage<1, 1, uchar> mClientThrottleThreshold;
    ::ll::TypedStorage<4, 4, float> mClientThrottleScalar;
    ::ll::TypedStorage<1, 1, bool> mRaknetJoinFloodProtectionEnabled;
    ::ll::TypedStorage<1, 1, bool> mEncryptionDisabled;
    ::ll::TypedStorage<4, 4, ::DevConnectionQuality> mDevConnectionQuality;
    // NOLINTEND

};
