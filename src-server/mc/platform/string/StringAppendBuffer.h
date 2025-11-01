#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class StringAppendBuffer : public ::std::streambuf {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1dc6a9;
    // NOLINTEND

public:
    // prevent constructor by default
    StringAppendBuffer& operator=(StringAppendBuffer const&);
    StringAppendBuffer(StringAppendBuffer const&);
    StringAppendBuffer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual int overflow(int c) /*override*/;

    // vIndex: 9
    virtual int64 xsputn(char const* s, int64 n) /*override*/;

    // vIndex: 0
    virtual ~StringAppendBuffer() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $overflow(int c);

    MCNAPI int64 $xsputn(char const* s, int64 n);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
