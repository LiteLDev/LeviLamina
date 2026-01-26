#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace texd {

class StorageBuffer {
public:
    // StorageBuffer inner types declare
    // clang-format off
    class Implementation;
    // clang-format on

    // StorageBuffer inner types define
    class Implementation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<uchar[0]>> mData;
        ::ll::TypedStorage<8, 8, uint64>                      mSize;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::texd::StorageBuffer::Implementation>> mImplementation;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(uchar const* data, uint64 size);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};

} // namespace texd
