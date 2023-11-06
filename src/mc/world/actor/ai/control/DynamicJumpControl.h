#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/JumpType.h"
#include "mc/world/actor/ai/control/JumpControl.h"

class DynamicJumpControl : public ::JumpControl {
public:
    // prevent constructor by default
    DynamicJumpControl& operator=(DynamicJumpControl const&);
    DynamicJumpControl(DynamicJumpControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~DynamicJumpControl();

    // vIndex: 1, symbol: ?initializeInternal@DynamicJumpControl@@UEAAXAEAVMob@@PEAUJumpControlDescription@@@Z
    virtual void initializeInternal(class Mob&, struct JumpControlDescription*);

    // vIndex: 2, symbol:
    // ?clone@DynamicJumpControl@@UEBA?AV?$unique_ptr@VJumpControl@@U?$default_delete@VJumpControl@@@std@@@std@@XZ
    virtual std::unique_ptr<class JumpControl> clone() const;

    // vIndex: 3, symbol: ?tick@DynamicJumpControl@@MEAAXAEAVJumpControlComponent@@AEAVMob@@@Z
    virtual void tick(class JumpControlComponent&, class Mob&);

    // vIndex: 4, symbol: ?getJumpDelay@DynamicJumpControl@@MEBAHAEBVJumpControlComponent@@@Z
    virtual int getJumpDelay(class JumpControlComponent const&) const;

    // vIndex: 5, symbol: ?getJumpPower@DynamicJumpControl@@MEBAMAEBVJumpControlComponent@@@Z
    virtual float getJumpPower(class JumpControlComponent const&) const;

    // vIndex: 6, symbol: ?getJumpType@DynamicJumpControl@@MEBA?AW4JumpType@@AEBVJumpControlComponent@@@Z
    virtual ::JumpType getJumpType(class JumpControlComponent const&) const;

    // vIndex: 7, symbol: ?setJumpType@DynamicJumpControl@@MEAAXAEAVJumpControlComponent@@W4JumpType@@@Z
    virtual void setJumpType(class JumpControlComponent&, ::JumpType);

    // vIndex: 8, symbol: ?resetSpeedModifier@DynamicJumpControl@@MEAAXAEBVJumpControlComponent@@AEAVMob@@@Z
    virtual void resetSpeedModifier(class JumpControlComponent const&, class Mob&);

    // symbol: ??0DynamicJumpControl@@QEAA@XZ
    MCAPI DynamicJumpControl();

    // NOLINTEND
};
