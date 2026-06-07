#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/PlayerSleepStatus.h"

class PlayerSleepManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::PlayerSleepStatus>             mPlayerSleepStatus;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnAnyGameplayUsersRemovedSubscription;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerSleepManager();

    virtual void updateSleepingPlayerList();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerSleepManager();

    MCFOLD ::PlayerSleepStatus const& getPlayerSleepStatus() const;

    MCFOLD void setSleepStatus(::PlayerSleepStatus const& sleepStatus);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $updateSleepingPlayerList();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
