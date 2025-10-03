#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MultiplayerLockState {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MultiplayerLockState() = default;

    // vIndex: 1
    virtual bool isLocked() const;

    // vIndex: 2
    virtual void setLockedByBehaviorPack(bool);

    // vIndex: 3
    virtual void setLockedByResourcePack(bool);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
