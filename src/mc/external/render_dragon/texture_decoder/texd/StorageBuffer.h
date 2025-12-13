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
        ::ll::UntypedStorage<8, 8> mUnk7801cd;
        ::ll::UntypedStorage<8, 8> mUnkc277eb;
        // NOLINTEND

    public:
        // prevent constructor by default
        Implementation& operator=(Implementation const&);
        Implementation(Implementation const&);
        Implementation();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk890aef;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageBuffer& operator=(StorageBuffer const&);
    StorageBuffer(StorageBuffer const&);
    StorageBuffer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C StorageBuffer(uchar const* data, uint64 size);

    MCNAPI_C ~StorageBuffer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(uchar const* data, uint64 size);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace texd
