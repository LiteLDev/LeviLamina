#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/Control.h"

class LookControl : public ::Control {
public:
    // prevent constructor by default
    LookControl& operator=(LookControl const&);
    LookControl(LookControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?initializeInternal@LookControl@@UEAAXAEAVMob@@@Z
    virtual void initializeInternal(class Mob&);

    // vIndex: 2, symbol: ?tick@LookControl@@UEAAXAEAVMob@@@Z
    virtual void tick(class Mob&);

    // symbol: ??0LookControl@@QEAA@XZ
    MCAPI LookControl();

    // NOLINTEND
};
