#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

struct FloatAttributeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb4158d;
    ::ll::UntypedStorage<4, 4> mUnk9ad6f3;
    ::ll::UntypedStorage<4, 8> mUnkb5e228;
    ::ll::UntypedStorage<4, 8> mUnkcb6a3e;
    // NOLINTEND

public:
    // prevent constructor by default
    FloatAttributeData& operator=(FloatAttributeData const&);
    FloatAttributeData(FloatAttributeData const&);
    FloatAttributeData();
};

} // namespace EAS
