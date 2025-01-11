#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IGameModeTimer {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IGameModeTimer() = default;

    // vIndex: 1
    virtual double getDestroyProgressSeconds() const = 0;

    // vIndex: 2
    virtual ::std::chrono::steady_clock::time_point getCurrentDestroyDelayTime() const = 0;

    // vIndex: 3
    virtual void tick() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
