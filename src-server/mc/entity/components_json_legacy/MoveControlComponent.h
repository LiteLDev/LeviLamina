#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionDescriptor;
class Mob;
class MoveControl;
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
    MCNAPI void initMultiTypeMovementComponent(::Mob& entity, ::ActorDefinitionDescriptor& initDescription);

    MCNAPI void setInternalType(::std::unique_ptr<::MoveControl> type);
    // NOLINTEND
};
