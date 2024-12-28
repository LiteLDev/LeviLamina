#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Player;
// clang-format on

class IGameplayUserManagerConnector {
public:
    // prevent constructor by default
    IGameplayUserManagerConnector& operator=(IGameplayUserManagerConnector const&);
    IGameplayUserManagerConnector(IGameplayUserManagerConnector const&);
    IGameplayUserManagerConnector();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::Bedrock::PubSub::Connector<void(::EntityContext&)>& getGameplayUserAddedConnector() = 0;

    // vIndex: 1
    virtual ::Bedrock::PubSub::Connector<void(::EntityContext const&)>& getGameplayUserResumedConnector() = 0;

    // vIndex: 2
    virtual ::Bedrock::PubSub::Connector<void(::EntityContext const&)>& getGameplayUserSuspendedConnector() = 0;

    // vIndex: 3
    virtual ::Bedrock::PubSub::Connector<void(::Player const&)>& getPlayerRenamedConnector() = 0;

    // vIndex: 4
    virtual ::Bedrock::PubSub::Connector<void(::EntityContext&)>& getGameplayUserRemovedConnector() = 0;

    // vIndex: 5
    virtual ::Bedrock::PubSub::Connector<void()>& getAnyGameplayUsersRemovedConnector() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
