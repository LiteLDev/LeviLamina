#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct ArrayInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf5e92a;
    ::ll::UntypedStorage<8, 8> mUnk27f00e;
    ::ll::UntypedStorage<8, 8> mUnk14b956;
    ::ll::UntypedStorage<8, 8> mUnk35bee8;
    ::ll::UntypedStorage<8, 8> mUnk160749;
    // NOLINTEND

public:
    // prevent constructor by default
    ArrayInfo& operator=(ArrayInfo const&);
    ArrayInfo(ArrayInfo const&);
    ArrayInfo();
};

} // namespace cohtml
