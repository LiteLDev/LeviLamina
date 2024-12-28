#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

class IServerPlayerSleepManagerConnector {
public:
    // prevent constructor by default
    IServerPlayerSleepManagerConnector& operator=(IServerPlayerSleepManagerConnector const&);
    IServerPlayerSleepManagerConnector(IServerPlayerSleepManagerConnector const&);
    IServerPlayerSleepManagerConnector();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::Bedrock::PubSub::Connector<void(::Player&)>& getPlayerWakeUpConnector() = 0;

    // vIndex: 1
    virtual ::Bedrock::PubSub::Connector<void()>& getOnWakeUpAllPlayersConnector() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
