#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FocusContainerCustomData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> otherFocusContainerName;
    ::ll::TypedStorage<8, 32, ::std::string> focusIdInside;
    // NOLINTEND

public:
    // prevent constructor by default
    FocusContainerCustomData& operator=(FocusContainerCustomData const&);
    FocusContainerCustomData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FocusContainerCustomData(::FocusContainerCustomData const&);

    MCAPI FocusContainerCustomData(::std::string const& name, ::std::string const& id);

    MCAPI ~FocusContainerCustomData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::FocusContainerCustomData const&);

    MCFOLD void* $ctor(::std::string const& name, ::std::string const& id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
