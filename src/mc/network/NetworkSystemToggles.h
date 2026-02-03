#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/NetworkStatisticsConfig.h"
#include "mc/network/PermissionIPv6.h"
#include "mc/network/PermissionLAN.h"
#include "mc/network/RakNetServerLANVisibility.h"

struct NetworkSystemToggles {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PermissionLAN>                          permissionLAN;
    ::ll::TypedStorage<4, 4, ::PermissionIPv6>                         permissionIPv6;
    ::ll::TypedStorage<4, 4, ::NetworkStatisticsConfig>                statsConfig;
    ::ll::TypedStorage<1, 1, bool>                                     disableLanSignaling;
    ::ll::TypedStorage<1, 1, bool>                                     disableTrickleIce;
    ::ll::TypedStorage<4, 4, ::RakNetServerLANVisibility>              allowLanDiscovery;
    ::ll::TypedStorage<1, 1, bool>                                     enablePacketRateLimiting;
    ::ll::TypedStorage<8, 16, ::std::optional<::std::chrono::seconds>> netherNetTimeout;
    ::ll::TypedStorage<2, 2, ushort>                                   preferredPort;
    // NOLINTEND
};
