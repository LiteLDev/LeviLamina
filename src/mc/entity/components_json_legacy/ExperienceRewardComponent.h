#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
class ExpressionNode;
// clang-format on

class ExperienceRewardComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>> mOnBred;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>> mOnDeath;
    ::ll::TypedStorage<1, 1, bool>                             mIsExperienceDropEnabled;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCFOLD bool getIsExperienceDropEnabled() const;

    MCAPI int getOnBredExperience(::Actor& owner) const;

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
