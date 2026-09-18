#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
struct DimensionType;
struct NetworkIdentifierWithSubId;
// clang-format on

class IPlayerConnectionConnector {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPlayerConnectionConnector() = default;

    virtual ::Bedrock::PubSub::Connector<void(::NetworkIdentifierWithSubId const&)>&
    getOnPlayerNetworkDisconnectedConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<
        void(::NetworkIdentifierWithSubId const&, ::BlockPos const&, uint, ::DimensionType)>&
    getOnPlayerNetworkConnectedConnector() = 0;
    // NOLINTEND
};
