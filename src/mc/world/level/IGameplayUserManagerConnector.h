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
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::PubSub::Connector<void(::EntityContext&)>& getGameplayUserAddedConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void(::EntityContext const&)>& getGameplayUserResumedConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void(::EntityContext const&)>& getGameplayUserSuspendedConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void(::Player const&)>& getPlayerRenamedConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void(::EntityContext&)>& getGameplayUserRemovedConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void()>& getAnyGameplayUsersRemovedConnector() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
