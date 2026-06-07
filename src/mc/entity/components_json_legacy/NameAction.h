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
    // prevent constructor by default
    NameAction& operator=(NameAction const&);
    NameAction(NameAction const&);
    NameAction();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NameAction(::NameAction&&);

    MCAPI void addNameFilterByName(::std::string const& name);

    MCAPI ~NameAction();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NameAction&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
