#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

class ByteQueue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk394508;
    ::ll::UntypedStorage<4, 4> mUnkf0c0cf;
    ::ll::UntypedStorage<4, 4> mUnk82c930;
    ::ll::UntypedStorage<4, 4> mUnka57eb6;
    // NOLINTEND

public:
    // prevent constructor by default
    ByteQueue& operator=(ByteQueue const&);
    ByteQueue(ByteQueue const&);
    ByteQueue();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void WriteBytes(char const* in, uint length, char const* file, uint line);
    // NOLINTEND
};

} // namespace DataStructures
