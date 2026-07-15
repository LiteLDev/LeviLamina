#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class StringAppendBuffer : public ::std::streambuf {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb33ce2;
    // NOLINTEND

public:
    // prevent constructor by default
    StringAppendBuffer& operator=(StringAppendBuffer const&);
    StringAppendBuffer(StringAppendBuffer const&);
    StringAppendBuffer();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual int overflow(int) /*override*/;
#else // LL_PLAT_C
    virtual int overflow(int c) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual int64 xsputn(char const*, int64) /*override*/;
#else // LL_PLAT_C
    virtual int64 xsputn(char const* s, int64 n) /*override*/;
#endif

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI int $overflow(int c);

    MCNAPI int64 $xsputn(char const* s, int64 n);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
