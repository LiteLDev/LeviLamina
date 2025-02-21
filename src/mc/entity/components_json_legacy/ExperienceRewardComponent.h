#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
