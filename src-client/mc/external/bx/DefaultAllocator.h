#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bx/AllocatorI.h"

namespace bx {

class DefaultAllocator : public ::bx::AllocatorI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DefaultAllocator() /*override*/;

    virtual void* realloc(void* _ptr, uint64 _size, uint64 _align, char const* _file, uint _line) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DefaultAllocator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void* $realloc(void* _ptr, uint64 _size, uint64 _align, char const* _file, uint _line);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace bx
