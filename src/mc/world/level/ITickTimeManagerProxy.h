#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct Tick;
// clang-format on

class ITickTimeManagerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITickTimeManagerProxy() = default;

    virtual bool shouldUpdateWorldTime() const = 0;

    virtual void setWorldTickTime(int) = 0;

    virtual int getWorldTickTime() const = 0;

    virtual void incrementCurrentTick() = 0;

    virtual ::Tick getCurrentTick() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
