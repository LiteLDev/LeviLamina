#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    ::ll::UntypedStorage<8, 8> mUnk77d551;
    ::ll::UntypedStorage<4, 4> mUnk515d08;
    ::ll::UntypedStorage<1, 1> mUnk81ca02;
    // NOLINTEND

public:
    // prevent constructor by default
    BalloonComponent& operator=(BalloonComponent const&);
    BalloonComponent(BalloonComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BalloonComponent();

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void computeMaxHeight(::Actor& owner);

    MCAPI void detach(::Actor& owner);

    MCAPI ::Actor* getAttachedActor(::Actor& owner);

    MCFOLD float getMaxHeight() const;

    MCAPI void integrate(::Actor& owner);

    MCAPI void onRemoved(::Actor& owner, bool shouldPop);

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void setAttachedActor(::Actor& owner, ::Actor& toAttach);

    MCAPI bool shouldPop(::Actor& owner, bool& removeAttached);
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

    MCAPI static float const& MAX_BALLOON_RANGE();

    MCAPI static ::std::string const& MAX_HEIGHT_TAG();

    MCAPI static ::std::string const& SHOULD_DROP_TAG();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
