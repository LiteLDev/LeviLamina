#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MultiplayerLockState {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MultiplayerLockState() = default;

    virtual bool isLocked() const;

    virtual void setLockedByBehaviorPack(bool isLocked);

    virtual void setLockedByResourcePack(bool isLocked);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isLocked() const;

    MCFOLD void $setLockedByBehaviorPack(bool isLocked);

    MCFOLD void $setLockedByResourcePack(bool isLocked);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
