#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

class XXHash {
public:
    // XXHash inner types declare
    // clang-format off
    struct State;
    // clang-format on

    // XXHash inner types define
    struct State {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 88> mUnk1110b4;
        // NOLINTEND

    public:
        // prevent constructor by default
        State& operator=(State const&);
        State(State const&);
        State();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc97579;
    // NOLINTEND

public:
    // prevent constructor by default
    XXHash& operator=(XXHash const&);
    XXHash(XXHash const&);
    XXHash();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit XXHash(uint64 seed);

    MCNAPI void _updateImpl(void const* input, uint64 length);

    MCNAPI uint64 digest();

    MCNAPI void update(uchar);

    MCNAPI void update(int data);

    MCNAPI void update(uint data);

    MCNAPI void update(float data);

    MCNAPI void update(bool data);

    MCNAPI ~XXHash();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint64 _hash64Impl(void const* input, uint64 len, uint64 seed);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint64 seed);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Util
