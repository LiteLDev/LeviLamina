#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {

class PathArgument {
public:
    // PathArgument inner types define
    enum class Kind : int {
        KindNone  = 0,
        KindIndex = 1,
        KindKey   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6949f6;
    ::ll::UntypedStorage<4, 4>  mUnkbd0085;
    ::ll::UntypedStorage<4, 4>  mUnkb7a133;
    // NOLINTEND

public:
    // prevent constructor by default
    PathArgument& operator=(PathArgument const&);
    PathArgument(PathArgument const&);
    PathArgument();
};

} // namespace Json
