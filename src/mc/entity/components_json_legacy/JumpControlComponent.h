#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/JumpType.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionDescriptor;
class JumpControl;
class Mob;
struct JumpControlDescription;
// clang-format on

class JumpControlComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk94c1e3;
    ::ll::UntypedStorage<1, 1>  mUnk5e04b7;
    ::ll::UntypedStorage<4, 4>  mUnk21548b;
    ::ll::UntypedStorage<4, 4>  mUnkbdca45;
    ::ll::UntypedStorage<4, 64> mUnkd6355d;
    ::ll::UntypedStorage<8, 8>  mUnkbe6877;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JumpControlComponent();

    MCAPI JumpControlComponent(::JumpControlComponent const& other);

    MCAPI float _getDelayInternal() const;

    MCAPI float _getHeightInternal() const;

    MCAPI int getAnimationDuration() const;

    MCAPI float getDistanceScale() const;

    MCAPI int getJumpDelay() const;

    MCAPI float getJumpPower() const;

    MCAPI bool getJumping() const;

    MCAPI bool getSwimming() const;

    MCAPI void initMultiTypeJumpComponent(::Mob& entity, ::ActorDefinitionDescriptor& initDescription);

    MCAPI void initializeFromDefinition(::Mob& owner, ::JumpControlDescription* description);

    MCAPI ::JumpControlComponent& operator=(::JumpControlComponent const& other);

    MCAPI void resetSpeedModifier(::Mob& owner);

    MCAPI void setInternalType(::std::unique_ptr<::JumpControl> type);

    MCAPI void setJumpType(::JumpType type);

    MCAPI void setJumping(bool jumping);

    MCAPI void setSwimming(bool swimming);

    MCAPI void update(::Mob& owner);

    MCAPI ~JumpControlComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::JumpControlComponent const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
