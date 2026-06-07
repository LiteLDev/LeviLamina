#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/PacketCompressionAlgorithm.h"

// auto generated forward declare list
// clang-format off
struct NetworkSettingOptions;
// clang-format on

struct NetworkSettingsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort>                       mCompressionThreshold;
    ::ll::TypedStorage<2, 2, ::PacketCompressionAlgorithm> mCompressionAlgorithm;
    ::ll::TypedStorage<1, 1, bool>                         mClientThrottleEnabled;
    ::ll::TypedStorage<1, 1, uchar>                        mClientThrottleThreshold;
    ::ll::TypedStorage<4, 4, float>                        mClientThrottleScalar;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkSettingsPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit NetworkSettingsPacketPayload(::NetworkSettingOptions const& options);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NetworkSettingOptions const& options);
    // NOLINTEND
};
