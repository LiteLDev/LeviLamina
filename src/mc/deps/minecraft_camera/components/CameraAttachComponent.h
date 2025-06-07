#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
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
    CameraAttachComponent(CameraAttachComponent const&);
    CameraAttachComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CameraAttachComponent& operator=(::CameraAttachComponent&&);
    // NOLINTEND
};
