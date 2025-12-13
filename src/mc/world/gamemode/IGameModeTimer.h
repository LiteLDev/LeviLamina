#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IGameModeTimer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameModeTimer() = default;

    virtual double getDestroyProgressSeconds() const = 0;

    virtual ::std::chrono::steady_clock::time_point getCurrentDestroyDelayTime() const = 0;

    virtual void tick() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
