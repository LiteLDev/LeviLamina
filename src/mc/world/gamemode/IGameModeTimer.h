#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IGameModeTimer {
public:
    // prevent constructor by default
    IGameModeTimer& operator=(IGameModeTimer const&);
    IGameModeTimer(IGameModeTimer const&);
    IGameModeTimer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IGameModeTimer();

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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
