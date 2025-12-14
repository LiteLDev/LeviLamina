#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DeviceButtonMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> buttonName;
    ::ll::TypedStorage<4, 4, int>            buttonNum;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DeviceButtonMapping();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
