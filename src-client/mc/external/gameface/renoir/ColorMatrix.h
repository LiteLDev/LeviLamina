#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct ColorMatrix {
public:
    // member variables
    // NOLINTBEGIN
    union {
        ::ll::UntypedStorage<4, 80> mUnkd8f94c;
        ::ll::UntypedStorage<4, 80> mUnk37f68f;
        struct {
            ::ll::UntypedStorage<4, 4> mUnkebb19b;
            ::ll::UntypedStorage<4, 4> mUnk5da823;
            ::ll::UntypedStorage<4, 4> mUnkdae1f7;
            ::ll::UntypedStorage<4, 4> mUnk8df7fa;
            ::ll::UntypedStorage<4, 4> mUnk134ebc;
            ::ll::UntypedStorage<4, 4> mUnkdc06d3;
            ::ll::UntypedStorage<4, 4> mUnkebc7f0;
            ::ll::UntypedStorage<4, 4> mUnkb68e6f;
            ::ll::UntypedStorage<4, 4> mUnkf77b07;
            ::ll::UntypedStorage<4, 4> mUnkcabca9;
            ::ll::UntypedStorage<4, 4> mUnk86eb6b;
            ::ll::UntypedStorage<4, 4> mUnk19c00a;
            ::ll::UntypedStorage<4, 4> mUnkcdd957;
            ::ll::UntypedStorage<4, 4> mUnke6c2e0;
            ::ll::UntypedStorage<4, 4> mUnk41921f;
            ::ll::UntypedStorage<4, 4> mUnke26b89;
            ::ll::UntypedStorage<4, 4> mUnk589506;
            ::ll::UntypedStorage<4, 4> mUnk314dc4;
            ::ll::UntypedStorage<4, 4> mUnkcf31ca;
            ::ll::UntypedStorage<4, 4> mUnk155bf9;
        };
    };
    // NOLINTEND

public:
    // prevent constructor by default
    ColorMatrix& operator=(ColorMatrix const&);
    ColorMatrix(ColorMatrix const&);
    ColorMatrix();
};

} // namespace renoir
