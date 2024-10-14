#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ITickTimeManagerProxy.h"

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
    virtual void setWorldTickTime(int time);

    // vIndex: 3
    virtual int getWorldTickTime() const;

    // vIndex: 4
    virtual void incrementCurrentTick();

    // vIndex: 5
    virtual struct Tick getCurrentTick() const;

    MCAPI explicit TickTimeManagerProxy(class LevelData& levelData);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI struct Tick getCurrentTick$() const;

    MCAPI int getWorldTickTime$() const;

    MCAPI void incrementCurrentTick$();

    MCAPI void setWorldTickTime$(int time);

    MCAPI bool shouldUpdateWorldTime$() const;

    // NOLINTEND
};
