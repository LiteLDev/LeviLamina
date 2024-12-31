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
    // prevent constructor by default
    JumpControl& operator=(JumpControl const&);
    JumpControl(JumpControl const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~JumpControl() /*override*/ = default;

    // vIndex: 1
    virtual void initializeInternal(::Mob& mob, ::JumpControlDescription* description);

    // vIndex: 2
    virtual ::std::unique_ptr<::JumpControl> clone() const;

    // vIndex: 3
    virtual void tick(::JumpControlComponent& parent, ::Mob& mob);

    // vIndex: 4
    virtual int getJumpDelay(::JumpControlComponent const&) const;

    // vIndex: 5
    virtual float getJumpPower(::JumpControlComponent const& parent) const;

    // vIndex: 6
    virtual ::JumpType getJumpType(::JumpControlComponent const&) const;

    // vIndex: 7
    virtual void setJumpType(::JumpControlComponent&, ::JumpType);

    // vIndex: 8
    virtual void resetSpeedModifier(::JumpControlComponent const&, ::Mob&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JumpControl();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeInternal(::Mob& mob, ::JumpControlDescription* description);

    MCAPI ::std::unique_ptr<::JumpControl> $clone() const;

    MCAPI void $tick(::JumpControlComponent& parent, ::Mob& mob);

    MCAPI int $getJumpDelay(::JumpControlComponent const&) const;

    MCAPI float $getJumpPower(::JumpControlComponent const& parent) const;

    MCAPI ::JumpType $getJumpType(::JumpControlComponent const&) const;

    MCAPI void $setJumpType(::JumpControlComponent&, ::JumpType);

    MCAPI void $resetSpeedModifier(::JumpControlComponent const&, ::Mob&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
