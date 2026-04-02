#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"

struct NameAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mNameFilters;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>    mOnNamed;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void addNameFilterByName(::std::string const& name);

    MCAPI ~NameAction();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
