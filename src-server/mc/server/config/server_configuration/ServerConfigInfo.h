#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/config/server_configuration/ServerConfigurationJoinInfo.h"

namespace ServerConfiguration {

struct ServerConfigInfo : public ::ServerConfiguration::ServerConfigurationJoinInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnk8a1a69;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerConfigInfo& operator=(ServerConfigInfo const&);
    ServerConfigInfo(ServerConfigInfo const&);
    ServerConfigInfo();
};

} // namespace ServerConfiguration
