#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/Control.h"
#include "mc/world/actor/ai/control/JumpType.h"

// auto generated forward declare list
// clang-format off
class JumpControlComponent;
class Mob;
namespace SharedTypes::v1_26_40 { struct JumpControlComponentDefinition; }
// clang-format on

class JumpControl : public ::Control {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JumpControl() /*override*/ = default;

    virtual void
    initializeInternal(::Mob& mob, ::SharedTypes::v1_26_40::JumpControlComponentDefinition const* description);

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
    MCNAPI void
    $initializeInternal(::Mob& mob, ::SharedTypes::v1_26_40::JumpControlComponentDefinition const* description);

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
