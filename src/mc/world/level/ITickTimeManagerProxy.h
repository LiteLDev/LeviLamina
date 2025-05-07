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
    // vIndex: 0
    virtual ~ITickTimeManagerProxy() = default;

    // vIndex: 1
    virtual bool shouldUpdateWorldTime() const = 0;

    // vIndex: 2
    virtual void setWorldTickTime(int) = 0;

    // vIndex: 3
    virtual int getWorldTickTime() const = 0;

    // vIndex: 4
    virtual void incrementCurrentTick() = 0;

    // vIndex: 5
    virtual ::Tick getCurrentTick() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
