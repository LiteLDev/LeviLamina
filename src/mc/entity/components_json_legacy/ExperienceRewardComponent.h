#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExperienceRewardComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc3c919;
    ::ll::UntypedStorage<8, 24> mUnk134277;
    ::ll::UntypedStorage<1, 1>  mUnk372774;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperienceRewardComponent& operator=(ExperienceRewardComponent const&);
    ExperienceRewardComponent(ExperienceRewardComponent const&);
    ExperienceRewardComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ExperienceRewardComponent();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& mIsExperienceDropEnabledTag();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
