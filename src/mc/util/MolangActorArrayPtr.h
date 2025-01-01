#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct MolangActorArrayPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Actor*>> mActors;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MolangActorArrayPtr(::std::vector<::Actor*> actors);

    MCAPI ~MolangActorArrayPtr();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::vector<::Actor*> actors);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
