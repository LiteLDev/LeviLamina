#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDefinitionEventStackEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mEventName;
    ::ll::TypedStorage<8, 32, ::std::string> mEntityNameTag;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorDefinitionEventStackEntry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
