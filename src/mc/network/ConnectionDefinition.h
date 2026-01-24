#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ConnectionDefinition {
public:
    // ConnectionDefinition inner types define
    enum class PortBusyFallbackPolicy : int {
        UseRandom = 0,
        Fail      = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort>                                         ipv4Port;
    ::ll::TypedStorage<2, 2, ushort>                                         ipv6Port;
    ::ll::TypedStorage<4, 4, ::ConnectionDefinition::PortBusyFallbackPolicy> fallback;
    ::ll::TypedStorage<4, 4, int>                                            maxNumPlayers;
    ::ll::TypedStorage<4, 4, int>                                            maxNumConnections;
    ::ll::TypedStorage<1, 1, bool>                                           isServerVisibleToLanDiscovery;
    ::ll::TypedStorage<1, 1, bool>                                           allowUnconnectedPongs;
    // NOLINTEND
};
