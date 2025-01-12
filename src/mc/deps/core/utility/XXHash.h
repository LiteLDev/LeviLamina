#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

class XXHash {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb637e4;
    // NOLINTEND

public:
    // prevent constructor by default
    XXHash& operator=(XXHash const&);
    XXHash(XXHash const&);
    XXHash();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit XXHash(uint64 seed);

    MCAPI void _updateImpl(void const* input, uint64 length);

    MCAPI uint64 digest();

    MCFOLD void update(bool data);

    MCAPI void update(uchar);

    MCAPI void update(float data);

    MCFOLD void update(int data);

    MCAPI void update(uint);

    MCAPI ~XXHash();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static uint64 _hash64Impl(void const* input, uint64 len, uint64 seed);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint64 seed);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Util
