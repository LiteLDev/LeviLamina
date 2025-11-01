#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

class BytePool {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk82ed3d;
    ::ll::UntypedStorage<8, 32> mUnk44850d;
    ::ll::UntypedStorage<8, 32> mUnk7a1a11;
    ::ll::UntypedStorage<8, 32> mUnk51f8e9;
    // NOLINTEND

public:
    // prevent constructor by default
    BytePool& operator=(BytePool const&);
    BytePool(BytePool const&);
    BytePool();

};

}
