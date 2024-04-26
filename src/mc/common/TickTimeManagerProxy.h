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
    // vIndex: 0, symbol: __gen_??1TickTimeManagerProxy@@UEAA@XZ
    virtual ~TickTimeManagerProxy() = default;

    // vIndex: 1, symbol: ?shouldUpdateWorldTime@TickTimeManagerProxy@@UEBA_NXZ
    virtual bool shouldUpdateWorldTime() const;

    // vIndex: 2, symbol: ?setWorldTickTime@TickTimeManagerProxy@@UEAAXH@Z
    virtual void setWorldTickTime(int);

    // vIndex: 3, symbol: ?getWorldTickTime@TickTimeManagerProxy@@UEBAHXZ
    virtual int getWorldTickTime() const;

    // vIndex: 4, symbol: ?incrementCurrentTick@TickTimeManagerProxy@@UEAAXXZ
    virtual void incrementCurrentTick();

    // vIndex: 5, symbol: ?getCurrentTick@TickTimeManagerProxy@@UEBA?AUTick@@XZ
    virtual struct Tick getCurrentTick() const;

    // symbol: ??0TickTimeManagerProxy@@QEAA@AEAVLevelData@@@Z
    MCAPI explicit TickTimeManagerProxy(class LevelData&);

    // NOLINTEND
};
