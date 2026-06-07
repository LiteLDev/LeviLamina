#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionDescriptor;
class Mob;
class MoveControl;
struct MoveControlDescription;
// clang-format on

class MoveControlComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                              mHasWanted;
    ::ll::TypedStorage<4, 12, ::Vec3>                           mWantedPosition;
    ::ll::TypedStorage<1, 1, bool>                              mShouldBreach;
    ::ll::TypedStorage<4, 4, float>                             mMaxTurn;
    ::ll::TypedStorage<4, 4, float>                             mSpeedModifier;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MoveControl>> mMoveControl;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MoveControlComponent();

    MCAPI void _setWantedPosition(::Vec3 const& position);

    MCFOLD bool getHasWantedPosition() const;

    MCFOLD float getMaxTurn() const;

    MCFOLD bool getShouldBreach() const;

    MCFOLD float getSpeedModifier() const;

    MCFOLD ::Vec3 const& getWantedPosition() const;

    MCAPI void initMultiTypeMovementComponent(::Mob& entity, ::ActorDefinitionDescriptor& initDescription);

    MCAPI void initializeFromDefinition(::Mob& owner, ::MoveControlDescription const* description);

    MCFOLD void setHasWantedPosition(bool value);

    MCAPI void setInternalType(::std::unique_ptr<::MoveControl> type);

    MCFOLD void setMaxTurn(float angle);

    MCFOLD void setShouldBreach(bool breach);

    MCFOLD void setSpeedModifier(float speedModifier);

    MCAPI void setWantedPosition(::Mob& owner, ::Vec3 const& position, float speed);

    MCAPI void update(::Mob& owner);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
