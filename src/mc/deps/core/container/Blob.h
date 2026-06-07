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
    // prevent constructor by default
    Blob& operator=(Blob const&);
    Blob(Blob const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Blob();

    MCAPI Blob(::mce::Blob&& rhs);

    MCAPI explicit Blob(uint64 size);

#ifdef LL_PLAT_C
    MCAPI Blob(::std::unique_ptr<uchar[0], ::mce::Blob::Deleter>&& ptr, uint64 size);

    MCAPI Blob(uchar const* const ptr, uint64 size);
#endif

    MCFOLD uchar const* cbegin() const;

    MCAPI uchar const* cend() const;

#ifdef LL_PLAT_C
    MCFOLD uchar* data();
#endif

    MCFOLD bool empty() const;

#ifdef LL_PLAT_C
    MCAPI void fillBlob(uchar val);

    MCFOLD uchar const* get() const;

    MCFOLD uchar* get();
#endif

    MCAPI ::gsl::span<uchar const> getSpan() const;

#ifdef LL_PLAT_C
    MCAPI ::gsl::span<uchar> getSpan();
#endif

    MCAPI ::mce::Blob& operator=(::mce::Blob&& rhs);

#ifdef LL_PLAT_C
    MCAPI ::std::unique_ptr<uchar[0], ::mce::Blob::Deleter> release();
#endif

    MCFOLD uint64 size() const;

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

#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::unique_ptr<uchar[0], ::mce::Blob::Deleter>&& ptr, uint64 size);

    MCAPI void* $ctor(uchar const* const ptr, uint64 size);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
