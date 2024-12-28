#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MemoryStreamBuffer : public ::std::streambuf {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkef3040;
    ::ll::UntypedStorage<8, 8> mUnk5cbf4e;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryStreamBuffer& operator=(MemoryStreamBuffer const&);
    MemoryStreamBuffer(MemoryStreamBuffer const&);
    MemoryStreamBuffer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MemoryStreamBuffer() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
