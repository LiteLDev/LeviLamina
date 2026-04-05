#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct float2 {
public:
    // member variables
    // NOLINTBEGIN
    union {
        struct {
            ::ll::UntypedStorage<4, 4> mUnkcd4340;
            ::ll::UntypedStorage<4, 4> mUnk400b56;
        };
        ::ll::UntypedStorage<4, 8> mUnk98c3f1;
    };
    // NOLINTEND

public:
    // prevent constructor by default
    float2& operator=(float2 const&);
    float2(float2 const&);
    float2();
};

} // namespace renoir
