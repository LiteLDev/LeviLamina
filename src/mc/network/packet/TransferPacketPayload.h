#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/config/gathering/server_configuration/GatheringsConfigurationJoinInfo.h"

struct TransferPacketPayload {
public:
    ::std::string                                                           mDestination;
    ushort                                                                  mDestinationPort;
    bool                                                                    mReloadWorld;
    ::std::optional<::ServerConfiguration::GatheringsConfigurationJoinInfo> mGatheringsConfiguration;
};
