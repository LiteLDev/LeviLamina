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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    WeakEntityRef& operator=(WeakEntityRef const&);
    WeakEntityRef(WeakEntityRef const&);
    WeakEntityRef();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    WeakEntityRef(WeakEntityRef const&);
    WeakEntityRef();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WeakEntityRef(::WeakRef<::EntityContext> entityRef);

#ifdef LL_PLAT_C
    MCAPI bool operator!=(::WeakEntityRef entityRef) const;
#endif

    MCFOLD ::WeakEntityRef& operator=(::WeakEntityRef&&);

#ifdef LL_PLAT_C
    MCFOLD ::WeakEntityRef& operator=(::WeakEntityRef const&);
#endif

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
