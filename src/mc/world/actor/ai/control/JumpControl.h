#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/JumpType.h"
#include "mc/world/actor/ai/control/Control.h"

class JumpControl : public ::Control {
public:
    // prevent constructor by default
    JumpControl& operator=(JumpControl const&);
    JumpControl(JumpControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1JumpControl@@UEAA@XZ
    virtual ~JumpControl() = default;

    // vIndex: 1, symbol: ?initializeInternal@JumpControl@@UEAAXAEAVMob@@PEAUJumpControlDescription@@@Z
    virtual void initializeInternal(class Mob& mob, struct JumpControlDescription* description);

    // vIndex: 2, symbol:
    // ?clone@JumpControl@@UEBA?AV?$unique_ptr@VJumpControl@@U?$default_delete@VJumpControl@@@std@@@std@@XZ
    virtual std::unique_ptr<class JumpControl> clone() const;

    // vIndex: 3, symbol: ?tick@JumpControl@@MEAAXAEAVJumpControlComponent@@AEAVMob@@@Z
    virtual void tick(class JumpControlComponent& parent, class Mob& mob);

    // vIndex: 4, symbol: ?getJumpDelay@JumpControl@@MEBAHAEBVJumpControlComponent@@@Z
    virtual int getJumpDelay(class JumpControlComponent const&) const;

    // vIndex: 5, symbol: ?getJumpPower@JumpControl@@MEBAMAEBVJumpControlComponent@@@Z
    virtual float getJumpPower(class JumpControlComponent const& parent) const;

    // vIndex: 6, symbol: ?getJumpType@JumpControl@@MEBA?AW4JumpType@@AEBVJumpControlComponent@@@Z
    virtual ::JumpType getJumpType(class JumpControlComponent const&) const;

    // vIndex: 7, symbol: ?setJumpType@JumpControl@@MEAAXAEAVJumpControlComponent@@W4JumpType@@@Z
    virtual void setJumpType(class JumpControlComponent&, ::JumpType);

    // vIndex: 8, symbol: ?resetSpeedModifier@JumpControl@@MEAAXAEBVJumpControlComponent@@AEAVMob@@@Z
    virtual void resetSpeedModifier(class JumpControlComponent const&, class Mob&);

    // symbol: ??0JumpControl@@QEAA@XZ
    MCAPI JumpControl();

    // NOLINTEND
};
