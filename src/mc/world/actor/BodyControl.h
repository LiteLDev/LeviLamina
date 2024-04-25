#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/Control.h"

class BodyControl : public ::Control {
public:
    // prevent constructor by default
    BodyControl& operator=(BodyControl const&);
    BodyControl(BodyControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BodyControl@@UEAA@XZ
    virtual ~BodyControl();

    // vIndex: 1, symbol: ?clientTick@BodyControl@@UEAAXAEAVMob@@@Z
    virtual void clientTick(class Mob& mob);

    // symbol: ??0BodyControl@@QEAA@XZ
    MCAPI BodyControl();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?MAX_CLAMP_ANGLE@BodyControl@@0MB
    MCAPI static float const MAX_CLAMP_ANGLE;

    // NOLINTEND
};
