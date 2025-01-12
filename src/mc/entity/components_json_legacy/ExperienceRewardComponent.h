#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

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
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCFOLD bool getIsExperienceDropEnabled() const;

    MCAPI int getOnDeathExperience(::Actor& owner) const;

    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);

    MCFOLD void setIsExperienceDropEnabled(bool isExperienceDropEnabled);

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
