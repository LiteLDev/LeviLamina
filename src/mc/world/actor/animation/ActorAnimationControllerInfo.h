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
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::HashedString const& name);
    // NOLINTEND
};
