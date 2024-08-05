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
    // vIndex: 0
    virtual ~GameCallbacks();

    // vIndex: 1
    virtual void __unk_vfn_1() = 0;

    // vIndex: 2
    virtual void __unk_vfn_2() = 0;

    // vIndex: 3
    virtual void __unk_vfn_3() = 0;

    // vIndex: 4
    virtual void onBeforeSimTick();

    // NOLINTEND
};
