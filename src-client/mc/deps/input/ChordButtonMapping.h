#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChordButtonMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                generatedButtonName;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> sourceButtonNames;
    ::ll::TypedStorage<4, 4, float>                         minHoldTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ChordButtonMapping();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
