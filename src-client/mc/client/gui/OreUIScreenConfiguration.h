#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Option;
// clang-format on

namespace ui {

class OreUIScreenConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Option*>                mIsSelectedOption;
    ::ll::TypedStorage<8, 8, ::Option*>                mIsForceEnabledOption;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>> mIsSelected;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>> mIsSupported;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~OreUIScreenConfiguration();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ui
