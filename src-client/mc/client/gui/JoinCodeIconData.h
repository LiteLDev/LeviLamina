#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JoinCodeIconData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> toolTip;
    ::ll::TypedStorage<8, 32, ::std::string> texture;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~JoinCodeIconData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::JoinCodeIconData> const& gData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
