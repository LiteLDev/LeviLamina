#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameCallbacks {
public:
    // prevent constructor by default
    GameCallbacks& operator=(GameCallbacks const&);
    GameCallbacks(GameCallbacks const&);
    GameCallbacks();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1() = 0;

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: ?onBeforeSimTick@GameCallbacks@@UEAAXXZ
    virtual void onBeforeSimTick();

    // symbol: ??1GameCallbacks@@UEAA@XZ
    MCVAPI ~GameCallbacks();

    // NOLINTEND
};
