#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/ITickTimeManagerProxy.h"

class TickTimeManagerProxy : public ::ITickTimeManagerProxy {
public:
    // prevent constructor by default
    TickTimeManagerProxy& operator=(TickTimeManagerProxy const&);
    TickTimeManagerProxy(TickTimeManagerProxy const&);
    TickTimeManagerProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TickTimeManagerProxy() = default;

    // vIndex: 1
    virtual bool shouldUpdateWorldTime() const;

    // vIndex: 2
    virtual void setWorldTickTime(int);

    // vIndex: 3
    virtual int getWorldTickTime() const;

    // vIndex: 4
    virtual void incrementCurrentTick();

    // vIndex: 5
    virtual struct Tick getCurrentTick() const;

    MCAPI explicit TickTimeManagerProxy(class LevelData&);

    // NOLINTEND
};
