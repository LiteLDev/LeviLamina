#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
class MapItemSavedData;
// clang-format on

class IServerMapDataManagerConnector {
public:
    // prevent constructor by default
    IServerMapDataManagerConnector& operator=(IServerMapDataManagerConnector const&);
    IServerMapDataManagerConnector(IServerMapDataManagerConnector const&);
    IServerMapDataManagerConnector();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::Bedrock::PubSub::Connector<void(::MapItemSavedData&)>& getOnCreateMapSavedDataConnector() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
