#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ExpressionNode;
// clang-format on

class ExperienceRewardComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>> mOnBred;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>> mOnDeath;
    ::ll::TypedStorage<1, 1, bool> mIsExperienceDropEnabled;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int getOnDeathExperience(::Actor& owner) const;

    MCNAPI ~ExperienceRewardComponent();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& mIsExperienceDropEnabledTag();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
