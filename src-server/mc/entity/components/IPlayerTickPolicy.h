#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IPlayerTickPolicy {
public:
    // IPlayerTickPolicy inner types define
    enum class TickAction : schar {
        ProcessTick    = 0,
        StopProcessing = 1,
        SkipTick       = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPlayerTickPolicy() = default;

    // vIndex: 1
    virtual uint64 getMaxTickCount(uint64, bool) const = 0;

    // vIndex: 2
    virtual ::IPlayerTickPolicy::TickAction shouldTickPlayer(uint64, uint64) const = 0;

    // vIndex: 3
    virtual bool isStrictMovement() const = 0;

    // vIndex: 4
    virtual bool isStrictDismount() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
