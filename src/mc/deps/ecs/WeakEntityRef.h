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
    MCAPI explicit WeakEntityRef(::WeakRef<::EntityContext> entityRef);

    MCAPI explicit operator ::WeakRef<::EntityContext>() const;

    MCAPI bool operator!=(::WeakEntityRef entityRef) const;

    MCFOLD ::WeakEntityRef& operator=(::WeakEntityRef&&);

    MCFOLD bool operator==(::WeakEntityRef entityRef) const;

    MCAPI bool operator==(::WeakRef<::EntityContext>) const;

    MCAPI ~WeakEntityRef();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::WeakRef<::EntityContext> entityRef);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
