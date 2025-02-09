#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct FloatRange;
// clang-format on

struct ActorDefinitionAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> name;
    ::ll::TypedStorage<4, 4, float>          min;
    ::ll::TypedStorage<4, 4, float>          max;
    ::ll::TypedStorage<4, 8, ::FloatRange>   value;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorDefinitionAttribute();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
