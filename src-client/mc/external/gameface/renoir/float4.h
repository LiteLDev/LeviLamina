#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct float4 {
public:
    // member variables
    // NOLINTBEGIN
    union {
        struct {
            ::ll::UntypedStorage<4, 4> mUnka61409;
            ::ll::UntypedStorage<4, 4> mUnk5feb39;
            ::ll::UntypedStorage<4, 4> mUnk40eb3b;
            ::ll::UntypedStorage<4, 4> mUnk2d495d;
        };
        ::ll::UntypedStorage<4, 16> mUnk57cda7;
    };
    // NOLINTEND

public:
    // prevent constructor by default
    float4& operator=(float4 const&);
    float4(float4 const&);
    float4();
};

} // namespace renoir
