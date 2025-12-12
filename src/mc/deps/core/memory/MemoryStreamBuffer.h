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
#ifdef LL_PLAT_S
    virtual ~MemoryStreamBuffer() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~MemoryStreamBuffer() /*override*/;
#endif

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
