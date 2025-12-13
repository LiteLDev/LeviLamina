#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class XoroshiroPositionalRandomFactory;
// clang-format on

class NoodleCavifierNoises {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnkf46a20;
    ::ll::UntypedStorage<8, 56> mUnked368f;
    ::ll::UntypedStorage<8, 56> mUnk7f80b0;
    ::ll::UntypedStorage<8, 56> mUnk84fa38;
    // NOLINTEND

public:
    // prevent constructor by default
    NoodleCavifierNoises& operator=(NoodleCavifierNoises const&);
    NoodleCavifierNoises();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NoodleCavifierNoises(::NoodleCavifierNoises const&);

    MCNAPI ~NoodleCavifierNoises();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::NoodleCavifierNoises make(::XoroshiroPositionalRandomFactory const& randomFactory);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NoodleCavifierNoises const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
