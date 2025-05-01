#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
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
    MCNAPI void detach(::Actor& owner);

    MCNAPI void integrate(::Actor& owner);

    MCNAPI void onRemoved(::Actor& owner, bool shouldPop);

    MCNAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void setAttachedActor(::Actor& owner, ::Actor& toAttach);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Actor* getBalloonForActor(::Actor const& actor);
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
