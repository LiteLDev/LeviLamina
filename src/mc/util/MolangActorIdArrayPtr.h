#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
// clang-format on

struct MolangActorIdArrayPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>> mActorIds;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangActorIdArrayPtr& operator=(MolangActorIdArrayPtr const&);
    MolangActorIdArrayPtr(MolangActorIdArrayPtr const&);
    MolangActorIdArrayPtr();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MolangActorIdArrayPtr(::std::vector<::ActorUniqueID> actorIds);

    MCAPI ~MolangActorIdArrayPtr();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::vector<::ActorUniqueID> actorIds);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
