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

    struct Deleter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk90cf01;
        // NOLINTEND

    public:
        // prevent constructor by default
        Deleter& operator=(Deleter const&);
        Deleter(Deleter const&);
        Deleter();
    };

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
    // static functions
    // NOLINTBEGIN
    MCNAPI static void defaultDeleter(uchar* ptr);
    // NOLINTEND
};

} // namespace mce
