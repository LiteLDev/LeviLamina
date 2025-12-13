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
    virtual void initializeInternal(::Mob& mob, ::JumpControlDescription* description) /*override*/;

    virtual ::std::unique_ptr<::JumpControl> clone() const /*override*/;

    virtual void tick(::JumpControlComponent& parent, ::Mob& mob) /*override*/;

    virtual int getJumpDelay(::JumpControlComponent const& parent) const /*override*/;

    virtual float getJumpPower(::JumpControlComponent const& parent) const /*override*/;

    virtual ::JumpType getJumpType(::JumpControlComponent const& parent) const /*override*/;

    virtual void setJumpType(::JumpControlComponent& parent, ::JumpType type) /*override*/;

    virtual void resetSpeedModifier(::JumpControlComponent const& parent, ::Mob& mob) /*override*/;

    virtual ~DynamicJumpControl() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeInternal(::Mob& mob, ::JumpControlDescription* description);

    MCNAPI ::std::unique_ptr<::JumpControl> $clone() const;

    MCNAPI void $tick(::JumpControlComponent& parent, ::Mob& mob);

    MCNAPI int $getJumpDelay(::JumpControlComponent const& parent) const;

    MCNAPI float $getJumpPower(::JumpControlComponent const& parent) const;

    MCNAPI ::JumpType $getJumpType(::JumpControlComponent const& parent) const;

    MCNAPI void $setJumpType(::JumpControlComponent& parent, ::JumpType type);

    MCNAPI void $resetSpeedModifier(::JumpControlComponent const& parent, ::Mob& mob);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
