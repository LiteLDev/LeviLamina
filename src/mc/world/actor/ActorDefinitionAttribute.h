#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/FloatRange.h"

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
    MCNAPI ~ActorDefinitionAttribute();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
