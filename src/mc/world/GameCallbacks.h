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
    // vIndex: 0, symbol: ??1GameCallbacks@@UEAA@XZ
    virtual ~GameCallbacks();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1() = 0;

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2() = 0;

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3() = 0;

    // vIndex: 4, symbol: ?onBeforeSimTick@GameCallbacks@@UEAAXXZ
    virtual void onBeforeSimTick();

    // NOLINTEND
};
