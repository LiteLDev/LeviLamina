#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class Blob {
public:
    // Blob inner types declare
    // clang-format off
    struct Deleter;
    // clang-format on

    // Blob inner types define
    struct Deleter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, void (*)(uchar*)> m_func;
        // NOLINTEND
    };

    using const_iterator = uchar const*;

    using const_pointer = uchar const*;

    using const_reference = uchar const&;

    using delete_function = void (*)(uchar*);

    using difference_type = int64;

    using iterator = uchar*;

    using pointer = uchar*;

    using pointer_type = ::std::unique_ptr<uchar[0], ::mce::Blob::Deleter>;

    using reference = uchar&;

    using size_type = uint64;

    using value_type = uchar;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::unique_ptr<uchar[0], ::mce::Blob::Deleter>> mBlob;
    ::ll::TypedStorage<8, 8, uint64>                                             mSize;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void defaultDeleter(uchar* ptr);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(uint64 size);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};

} // namespace mce
