#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"

struct PacketViolation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                    mTotalCount;
    ::ll::TypedStorage<4, 4, float>                                   mTotalScore;
    ::ll::TypedStorage<4, 4, ::MinecraftPacketIds>                    mLastPacketId;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::error_code>>     mLastResult;
    ::ll::TypedStorage<4, 4, ::PacketViolationResponse>               mLastResponse;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastViolationTime;
    // NOLINTEND
};
