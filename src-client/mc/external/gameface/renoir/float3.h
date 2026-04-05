#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct float3 {
public:
    // member variables
    // NOLINTBEGIN
    union {
        struct {
            ::ll::UntypedStorage<4, 4> mUnkeb540c;
            ::ll::UntypedStorage<4, 4> mUnk50ebc2;
            ::ll::UntypedStorage<4, 4> mUnkbe6ba8;
        };
        ::ll::UntypedStorage<4, 12> mUnkc243a6;
    };
    // NOLINTEND

public:
    // prevent constructor by default
    float3& operator=(float3 const&);
    float3(float3 const&);
    float3();
};

} // namespace renoir
