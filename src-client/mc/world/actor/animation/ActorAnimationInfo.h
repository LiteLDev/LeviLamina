#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class ActorSkeletalAnimation;
// clang-format on

class ActorAnimationInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                             mName;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorSkeletalAnimation>> mPtr;
    // NOLINTEND
};
