#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/MemoryStreamBuffer.h"

struct MemoryStream : public ::MemoryStreamBuffer, public virtual ::std::ios, public ::std::istream {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MemoryStream() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(char const* base, uint64 size);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForMemoryStreamBuffer();

    MCNAPI static void** $vftableForBasicIstream();
    // NOLINTEND
};
