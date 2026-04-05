#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct ObjectInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc46fa2;
    ::ll::UntypedStorage<8, 8> mUnkf31fe8;
    ::ll::UntypedStorage<8, 8> mUnk536ffe;
    // NOLINTEND

public:
    // prevent constructor by default
    ObjectInfo& operator=(ObjectInfo const&);
    ObjectInfo(ObjectInfo const&);
    ObjectInfo();
};

} // namespace cohtml
