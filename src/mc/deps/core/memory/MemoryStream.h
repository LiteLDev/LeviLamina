#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/MemoryStreamBuffer.h"

struct MemoryStream : public ::MemoryStreamBuffer, public ::std::istream, public virtual ::std::ios {
public:
    // prevent constructor by default
    MemoryStream& operator=(MemoryStream const&);
    MemoryStream(MemoryStream const&);
    MemoryStream();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MemoryStream() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};
