#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct unaligned_float4x4 {
public:
    // member variables
    // NOLINTBEGIN
    union {
        struct {
            ::ll::UntypedStorage<4, 4> mUnk9273f3;
            ::ll::UntypedStorage<4, 4> mUnkb24056;
            ::ll::UntypedStorage<4, 4> mUnk10fddb;
            ::ll::UntypedStorage<4, 4> mUnk384de3;
            ::ll::UntypedStorage<4, 4> mUnk7c37ce;
            ::ll::UntypedStorage<4, 4> mUnkc82c5b;
            ::ll::UntypedStorage<4, 4> mUnk92ab56;
            ::ll::UntypedStorage<4, 4> mUnk34508d;
            ::ll::UntypedStorage<4, 4> mUnkabdd03;
            ::ll::UntypedStorage<4, 4> mUnke8528f;
            ::ll::UntypedStorage<4, 4> mUnk641231;
            ::ll::UntypedStorage<4, 4> mUnk4dfd34;
            ::ll::UntypedStorage<4, 4> mUnk417715;
            ::ll::UntypedStorage<4, 4> mUnk425cff;
            ::ll::UntypedStorage<4, 4> mUnk986d14;
            ::ll::UntypedStorage<4, 4> mUnkca6074;
        };
        ::ll::UntypedStorage<4, 64> mUnkfc9e07;
        ::ll::UntypedStorage<4, 64> mUnke846ae;
    };
    // NOLINTEND

public:
    // prevent constructor by default
    unaligned_float4x4& operator=(unaligned_float4x4 const&);
    unaligned_float4x4(unaligned_float4x4 const&);
    unaligned_float4x4();
};

} // namespace renoir
