#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionDescriptor;
class Mob;
class MoveControl;
class Vec3;
struct MoveControlDescription;
// clang-format on

class MoveControlComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk4cda91;
    ::ll::UntypedStorage<4, 12> mUnk4f43ea;
    ::ll::UntypedStorage<1, 1>  mUnk2107d2;
    ::ll::UntypedStorage<4, 4>  mUnk7ca02b;
    ::ll::UntypedStorage<4, 4>  mUnkddc4cd;
    ::ll::UntypedStorage<8, 16> mUnk4c82b8;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveControlComponent& operator=(MoveControlComponent const&);
    MoveControlComponent(MoveControlComponent const&);

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

    MCAPI void initializeFromDefinition(::Mob& owner, ::MoveControlDescription* description);

    MCFOLD void setHasWantedPosition(bool value);

    MCAPI void setInternalType(::std::unique_ptr<::MoveControl> type);

    MCAPI void setMaxTurn(float angle);

    MCFOLD void setShouldBreach(bool breach);

    MCAPI void setSpeedModifier(float speedModifier);

    MCAPI void setWantedPosition(::Mob& owner, ::Vec3 const& position, float speed);

    MCAPI void update(::Mob& owner);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
