#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/events/LevelEventCoordinator.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class IGameplayUserManagerConnector;
// clang-format on

class ServerLevelEventCoordinator : public ::LevelEventCoordinator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserAddedSubscriptionServer;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserRemovedSubscriptionServer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerLevelEventCoordinator() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _onGameplayUserAdded(::EntityContext& entity);

    MCAPI void _onGameplayUserRemoved(::EntityContext& entity);

    MCAPI void registerWithGameplayUserManagerOnServer(::IGameplayUserManagerConnector& gameplayUserManagerConnector);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
