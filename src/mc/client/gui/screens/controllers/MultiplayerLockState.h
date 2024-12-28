#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MultiplayerLockState {
public:
    // prevent constructor by default
    MultiplayerLockState& operator=(MultiplayerLockState const&);
    MultiplayerLockState(MultiplayerLockState const&);
    MultiplayerLockState();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MultiplayerLockState();

    // vIndex: 1
    virtual bool isLocked() const;

    // vIndex: 2
    virtual void setLockedByBehaviorPack(bool);

    // vIndex: 3
    virtual void setLockedByResourcePack(bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isLocked() const;

    MCAPI void $setLockedByBehaviorPack(bool);

    MCAPI void $setLockedByResourcePack(bool);
    // NOLINTEND
};
