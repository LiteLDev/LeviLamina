#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/JumpData.h"
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
    ::ll::TypedStorage<1, 1, bool>                             mJumping;
    ::ll::TypedStorage<1, 1, bool>                             mSwimming;
    ::ll::TypedStorage<4, 4, float>                            mJumpPower;
    ::ll::TypedStorage<4, 4, ::JumpType>                       mJumpType;
    ::ll::TypedStorage<4, 64, ::JumpData[4]>                   mJumpData;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::JumpControl>> mJumpControl;
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

    MCFOLD bool getJumping() const;

    MCFOLD bool getSwimming() const;

    MCAPI void initMultiTypeJumpComponent(::Mob& entity, ::ActorDefinitionDescriptor& initDescription);

    MCAPI void initializeFromDefinition(::Mob& owner, ::JumpControlDescription const* description);

    MCAPI ::JumpControlComponent& operator=(::JumpControlComponent const& other);

    MCAPI void resetSpeedModifier(::Mob& owner);

    MCFOLD void setInternalType(::std::unique_ptr<::JumpControl> type);

    MCAPI void setJumpType(::JumpType type);

    MCFOLD void setJumping(bool jumping);

    MCFOLD void setSwimming(bool swimming);

    MCAPI void update(::Mob& owner);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::JumpControlComponent const& other);
    // NOLINTEND
};
