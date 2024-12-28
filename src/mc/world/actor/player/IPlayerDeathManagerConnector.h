#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

class IPlayerDeathManagerConnector {
public:
    // prevent constructor by default
    IPlayerDeathManagerConnector& operator=(IPlayerDeathManagerConnector const&);
    IPlayerDeathManagerConnector(IPlayerDeathManagerConnector const&);
    IPlayerDeathManagerConnector();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPlayerDeathManagerConnector();

    // vIndex: 1
    virtual ::Bedrock::PubSub::Connector<void(::Player&)>& getOnPlayerDeathConnector() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
