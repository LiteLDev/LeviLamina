#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobEffectPane {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            id;
    ::ll::TypedStorage<8, 32, ::std::string> time;
    ::ll::TypedStorage<8, 32, ::std::string> name;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MobEffectPane();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
