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
    virtual ~IPlayerTickPolicy() = default;

    virtual uint64 getMaxTickCount(uint64, bool) const = 0;

    virtual ::IPlayerTickPolicy::TickAction shouldTickPlayer(uint64, uint64) const = 0;

    virtual bool isStrictMovement() const = 0;

    virtual bool isStrictDismount() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
