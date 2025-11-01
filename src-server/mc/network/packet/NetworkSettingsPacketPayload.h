#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/PacketCompressionAlgorithm.h"

struct NetworkSettingsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mCompressionThreshold;
    ::ll::TypedStorage<2, 2, ::PacketCompressionAlgorithm> mCompressionAlgorithm;
    ::ll::TypedStorage<1, 1, bool> mClientThrottleEnabled;
    ::ll::TypedStorage<1, 1, uchar> mClientThrottleThreshold;
    ::ll::TypedStorage<4, 4, float> mClientThrottleScalar;
    // NOLINTEND

};
