#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/JumpControl.h"
#include "mc/world/actor/ai/control/JumpType.h"

// auto generated forward declare list
// clang-format off
class JumpControlComponent;
class Mob;
struct JumpControlDescription;
// clang-format on

class DynamicJumpControl : public ::JumpControl {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void initializeInternal(::Mob& mob, ::JumpControlDescription* description) /*override*/;

    // vIndex: 2
    virtual ::std::unique_ptr<::JumpControl> clone() const /*override*/;

    // vIndex: 3
    virtual void tick(::JumpControlComponent& parent, ::Mob& mob) /*override*/;

    // vIndex: 4
    virtual int getJumpDelay(::JumpControlComponent const& parent) const /*override*/;

    // vIndex: 5
    virtual float getJumpPower(::JumpControlComponent const& parent) const /*override*/;

    // vIndex: 6
    virtual ::JumpType getJumpType(::JumpControlComponent const& parent) const /*override*/;

    // vIndex: 7
    virtual void setJumpType(::JumpControlComponent& parent, ::JumpType type) /*override*/;

    // vIndex: 8
    virtual void resetSpeedModifier(::JumpControlComponent const& parent, ::Mob& mob) /*override*/;

    // vIndex: 0
    virtual ~DynamicJumpControl() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $initializeInternal(::Mob& mob, ::JumpControlDescription* description);

    MCAPI ::std::unique_ptr<::JumpControl> $clone() const;

    MCAPI void $tick(::JumpControlComponent& parent, ::Mob& mob);

    MCAPI int $getJumpDelay(::JumpControlComponent const& parent) const;

    MCAPI float $getJumpPower(::JumpControlComponent const& parent) const;

    MCAPI ::JumpType $getJumpType(::JumpControlComponent const& parent) const;

    MCAPI void $setJumpType(::JumpControlComponent& parent, ::JumpType type);

    MCAPI void $resetSpeedModifier(::JumpControlComponent const& parent, ::Mob& mob);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
