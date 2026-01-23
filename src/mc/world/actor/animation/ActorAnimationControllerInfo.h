#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationController;
// clang-format on

class ActorAnimationControllerInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                               mName;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorAnimationController>> mPtr;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationControllerInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C explicit ActorAnimationControllerInfo(::HashedString const& name);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::HashedString const& name);
    // NOLINTEND
};
