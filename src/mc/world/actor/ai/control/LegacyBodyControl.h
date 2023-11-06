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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~LegacyBodyControl();

    // vIndex: 1, symbol: ?clientTick@LegacyBodyControl@@UEAAXAEAVMob@@@Z
    virtual void clientTick(class Mob&);

    // symbol: ??0LegacyBodyControl@@QEAA@XZ
    MCAPI LegacyBodyControl();

    // NOLINTEND
};
