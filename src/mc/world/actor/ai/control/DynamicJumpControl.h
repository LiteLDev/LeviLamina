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
    // vIndex: 0
    virtual ~DynamicJumpControl() = default;

    // vIndex: 1
    virtual void initializeInternal(class Mob& mob, struct JumpControlDescription* description);

    // vIndex: 2
    virtual std::unique_ptr<class JumpControl> clone() const;

    // vIndex: 3
    virtual void tick(class JumpControlComponent& parent, class Mob& mob);

    // vIndex: 4
    virtual int getJumpDelay(class JumpControlComponent const& parent) const;

    // vIndex: 5
    virtual float getJumpPower(class JumpControlComponent const& parent) const;

    // vIndex: 6
    virtual ::JumpType getJumpType(class JumpControlComponent const& parent) const;

    // vIndex: 7
    virtual void setJumpType(class JumpControlComponent& parent, ::JumpType type);

    // vIndex: 8
    virtual void resetSpeedModifier(class JumpControlComponent const& parent, class Mob& mob);

    MCAPI DynamicJumpControl();

    // NOLINTEND
};
