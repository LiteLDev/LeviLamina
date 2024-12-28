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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ByteQueue();

    MCAPI void Clear(char const* file, uint line);

    MCAPI uint GetBytesWritten() const;

    MCAPI void IncrementReadOffset(uint length);

    MCAPI char* PeekContiguousBytes(uint* outLength) const;

    MCAPI bool ReadBytes(char* out, uint maxLengthToRead, bool peek);

    MCAPI void WriteBytes(char const* in, uint length, char const* file, uint line);

    MCAPI ~ByteQueue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace DataStructures
