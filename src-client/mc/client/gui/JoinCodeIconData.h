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
    // prevent constructor by default
    JoinCodeIconData& operator=(JoinCodeIconData const&);
    JoinCodeIconData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JoinCodeIconData(::JoinCodeIconData const&);

    MCAPI ~JoinCodeIconData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::JoinCodeIconData> const& gData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::JoinCodeIconData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
