#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerStatsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk17d37b;
    ::ll::UntypedStorage<4, 4> mUnk4834a2;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerStatsPacketPayload& operator=(ServerStatsPacketPayload const&);
    ServerStatsPacketPayload(ServerStatsPacketPayload const&);
    ServerStatsPacketPayload();
};
