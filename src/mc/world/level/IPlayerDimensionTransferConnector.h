#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on

class IPlayerDimensionTransferConnector {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::PubSub::Connector<void(::DimensionType)>&
    getOnAnyPlayerChangeDimensionPreSuspendRegionConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void()>& getOnAnyPlayerChangeDimensionPrepareRegionCompleteConnector() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
