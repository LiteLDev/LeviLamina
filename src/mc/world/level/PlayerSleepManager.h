#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PlayerSleepStatus;
// clang-format on

class PlayerSleepManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk813b02;
    ::ll::UntypedStorage<8, 16> mUnkb2ca62;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerSleepManager& operator=(PlayerSleepManager const&);
    PlayerSleepManager(PlayerSleepManager const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerSleepManager();

    // vIndex: 1
    virtual void updateSleepingPlayerList();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerSleepManager();

    MCAPI ::PlayerSleepStatus const& getPlayerSleepStatus() const;

    MCAPI void setSleepStatus(::PlayerSleepStatus const& sleepStatus);
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
    MCAPI void $updateSleepingPlayerList();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
