#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/Control.h"
#include "mc/world/actor/ai/control/JumpType.h"

// auto generated forward declare list
// clang-format off
class JumpControlComponent;
class Mob;
struct JumpControlDescription;
// clang-format on

class JumpControl : public ::Control {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JumpControl() /*override*/ = default;

    virtual void initializeInternal(::Mob& mob, ::JumpControlDescription* description);

    virtual ::std::unique_ptr<::JumpControl> clone() const;

    virtual void tick(::JumpControlComponent& parent, ::Mob& mob);

    virtual int getJumpDelay(::JumpControlComponent const& parent) const;

    virtual float getJumpPower(::JumpControlComponent const& parent) const;

    virtual ::JumpType getJumpType(::JumpControlComponent const& parent) const;

    virtual void setJumpType(::JumpControlComponent& parent, ::JumpType type);

    virtual void resetSpeedModifier(::JumpControlComponent const& parent, ::Mob& mob);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $initializeInternal(::Mob& mob, ::JumpControlDescription* description);

    MCAPI ::std::unique_ptr<::JumpControl> $clone() const;

    MCAPI void $tick(::JumpControlComponent& parent, ::Mob& mob);

    MCFOLD int $getJumpDelay(::JumpControlComponent const& parent) const;

    MCAPI float $getJumpPower(::JumpControlComponent const& parent) const;

    MCFOLD ::JumpType $getJumpType(::JumpControlComponent const& parent) const;

    MCFOLD void $setJumpType(::JumpControlComponent& parent, ::JumpType type);

    MCFOLD void $resetSpeedModifier(::JumpControlComponent const& parent, ::Mob& mob);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
