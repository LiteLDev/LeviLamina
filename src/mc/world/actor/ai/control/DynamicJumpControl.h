#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/JumpControl.h"
#include "mc/world/actor/ai/control/JumpType.h"

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI std::unique_ptr<class JumpControl> clone$() const;

    MCAPI int getJumpDelay$(class JumpControlComponent const& parent) const;

    MCAPI float getJumpPower$(class JumpControlComponent const& parent) const;

    MCAPI ::JumpType getJumpType$(class JumpControlComponent const& parent) const;

    MCAPI void initializeInternal$(class Mob& mob, struct JumpControlDescription* description);

    MCAPI void resetSpeedModifier$(class JumpControlComponent const& parent, class Mob& mob);

    MCAPI void setJumpType$(class JumpControlComponent& parent, ::JumpType type);

    MCAPI void tick$(class JumpControlComponent& parent, class Mob& mob);

    // NOLINTEND
};
