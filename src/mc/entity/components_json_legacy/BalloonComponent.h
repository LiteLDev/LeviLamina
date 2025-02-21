#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
struct ActorUniqueID;
// clang-format on

class BalloonComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mAttachedID;
    ::ll::TypedStorage<4, 4, float>           mMaxHeight;
    ::ll::TypedStorage<1, 1, bool>            mShouldDropAttached;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void detach(::Actor& owner);

    MCAPI void integrate(::Actor& owner);

    MCAPI void onRemoved(::Actor& owner, bool shouldPop);

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void setAttachedActor(::Actor& owner, ::Actor& toAttach);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Actor* getBalloonForActor(::Actor const& actor);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& ATTACHED_TAG();

    MCAPI static float const& FENCE_BALLOON_RANGE();

    MCAPI static ::std::string const& MAX_HEIGHT_TAG();

    MCAPI static ::std::string const& SHOULD_DROP_TAG();
    // NOLINTEND
};
