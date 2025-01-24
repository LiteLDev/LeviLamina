#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class WeakEntityRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mWeakEntity;
    // NOLINTEND

public:
    // prevent constructor by default
    WeakEntityRef& operator=(WeakEntityRef const&);
    WeakEntityRef(WeakEntityRef const&);

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
