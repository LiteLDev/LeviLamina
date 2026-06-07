#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/config/gathering/server_configuration/PresenceConfiguration.h"

struct ServerPresenceInfoPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::std::optional<::ServerConfiguration::PresenceConfiguration>> mPresenceConfiguration;
    // NOLINTEND
};
