#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
struct DimensionType;
struct NetworkIdentifierWithSubId;
// clang-format on

class IPlayerDimensionTransferConnector {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::PubSub::Connector<void(::DimensionType)>&
    getOnAnyPlayerChangeDimensionPreSuspendRegionConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void()>& getOnAnyPlayerChangeDimensionPrepareRegionCompleteConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void(::ActorUniqueID, ::DimensionType)>&
    getOnAnyPlayerChangeDimensionCompleteConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void(::NetworkIdentifierWithSubId const&, ::DimensionType)>&
    getOnPlayerLeftDimensionConnector() = 0;
    // NOLINTEND
};
