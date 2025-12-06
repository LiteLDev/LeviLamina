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
    using value_type = uchar;

    using delete_function = void (*)(uchar*);

    struct Deleter {};

    using pointer_type = ::std::unique_ptr<uchar[0], ::mce::Blob::Deleter>;

    using reference = uchar&;

    using const_reference = uchar const&;

    using pointer = uchar*;

    using const_pointer = uchar const*;

    using iterator = uchar*;

    using const_iterator = uchar const*;

    using difference_type = int64;

    using size_type = uint64;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::unique_ptr<uchar[0], ::mce::Blob::Deleter>> mBlob;
    ::ll::TypedStorage<8, 8, uint64>                                             mSize;
    // NOLINTEND

public:
    // prevent constructor by default
    Blob();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Blob(uint64 size);

    MCNAPI ~Blob();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void defaultDeleter(uchar* ptr);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint64 size);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
