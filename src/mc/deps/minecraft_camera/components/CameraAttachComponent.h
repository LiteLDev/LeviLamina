#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class HashedString;
// clang-format on

struct CameraAttachComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mAttachTo;
    ::ll::TypedStorage<8, 48, ::HashedString>             mLocator;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAttachComponent& operator=(CameraAttachComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CameraAttachComponent(::CameraAttachComponent const&);

    MCAPI ::CameraAttachComponent& operator=(::CameraAttachComponent&&);

    MCAPI ~CameraAttachComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CameraAttachComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
