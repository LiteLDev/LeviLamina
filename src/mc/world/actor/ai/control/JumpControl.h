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
    // vIndex: 0
    virtual ~JumpControl() = default;

    // vIndex: 1
    virtual void initializeInternal(class Mob& mob, struct JumpControlDescription* description);

    // vIndex: 2
    virtual std::unique_ptr<class JumpControl> clone() const;

    // vIndex: 3
    virtual void tick(class JumpControlComponent& parent, class Mob& mob);

    // vIndex: 4
    virtual int getJumpDelay(class JumpControlComponent const&) const;

    // vIndex: 5
    virtual float getJumpPower(class JumpControlComponent const& parent) const;

    // vIndex: 6
    virtual ::JumpType getJumpType(class JumpControlComponent const&) const;

    // vIndex: 7
    virtual void setJumpType(class JumpControlComponent&, ::JumpType);

    // vIndex: 8
    virtual void resetSpeedModifier(class JumpControlComponent const&, class Mob&);

    MCAPI JumpControl();

    // NOLINTEND
};
