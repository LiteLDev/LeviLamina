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
    // prevent constructor by default
    Blob& operator=(Blob const&);
    Blob(Blob const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Blob();

    MCAPI Blob(::mce::Blob&& rhs);

    MCAPI explicit Blob(uint64 size);

    MCAPI uchar const* cbegin() const;

    MCAPI uchar const* cend() const;

    MCAPI bool empty() const;

    MCAPI ::mce::Blob& operator=(::mce::Blob&& rhs);

    MCAPI ~Blob();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void defaultDeleter(uchar* ptr);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::mce::Blob&& rhs);

    MCAPI void* $ctor(uint64 size);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
