#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Poi {

struct Type {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk984de2;
    ::ll::UntypedStorage<8, 64> mUnk22d4eb;
    ::ll::UntypedStorage<8, 8>  mUnkccdce2;
    ::ll::UntypedStorage<2, 2>  mUnk3e0c48;
    ::ll::UntypedStorage<1, 1>  mUnk913a92;
    ::ll::UntypedStorage<1, 1>  mUnk1646f7;
    // NOLINTEND

public:
    // prevent constructor by default
    Type& operator=(Type const&);
    Type(Type const&);
    Type();
};

} // namespace Poi
