#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/BodyControl.h"

class LegacyBodyControl : public ::BodyControl {
public:
    // prevent constructor by default
    LegacyBodyControl& operator=(LegacyBodyControl const&);
    LegacyBodyControl(LegacyBodyControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LegacyBodyControl@@UEAA@XZ
    virtual ~LegacyBodyControl() = default;

    // vIndex: 1, symbol: ?clientTick@LegacyBodyControl@@UEAAXAEAVMob@@@Z
    virtual void clientTick(class Mob& mob);

    // symbol: ??0LegacyBodyControl@@QEAA@XZ
    MCAPI LegacyBodyControl();

    // NOLINTEND
};
