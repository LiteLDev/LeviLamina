#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class ThrottledFileSystemData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb5b57d;
    ::ll::UntypedStorage<8, 8>  mUnk409300;
    ::ll::UntypedStorage<1, 1>  mUnkbc305f;
    ::ll::UntypedStorage<8, 8>  mUnk7a38cb;
    ::ll::UntypedStorage<1, 1>  mUnk734119;
    ::ll::UntypedStorage<8, 16> mUnk372bdb;
    ::ll::UntypedStorage<8, 8>  mUnkda0843;
    ::ll::UntypedStorage<8, 8>  mUnka4e36b;
    // NOLINTEND

public:
    // prevent constructor by default
    ThrottledFileSystemData& operator=(ThrottledFileSystemData const&);
    ThrottledFileSystemData(ThrottledFileSystemData const&);
    ThrottledFileSystemData();
};

} // namespace Core
