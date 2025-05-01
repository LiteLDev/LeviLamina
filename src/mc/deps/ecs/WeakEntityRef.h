#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/ecs/gamerefs_entity/GameRefsEntity.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class WeakEntityRef : public ::WeakRef<::EntityContext> {
public:
    WeakEntityRef(::WeakEntityRef&&)      = default;
    WeakEntityRef(::WeakEntityRef const&) = default;

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WeakEntityRef(::WeakRef<::EntityContext> entityRef);

    MCNAPI ::WeakEntityRef& operator=(::WeakEntityRef&&);

    MCNAPI ~WeakEntityRef();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WeakRef<::EntityContext> entityRef);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
