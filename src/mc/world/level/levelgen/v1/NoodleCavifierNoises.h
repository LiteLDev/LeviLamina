#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NoodleCavifierNoises {
public:
    // prevent constructor by default
    NoodleCavifierNoises& operator=(NoodleCavifierNoises const&);
    NoodleCavifierNoises();

public:
    // NOLINTBEGIN
    MCAPI NoodleCavifierNoises(class NoodleCavifierNoises const&);

    MCAPI ~NoodleCavifierNoises();

    MCAPI static class NoodleCavifierNoises make(class XoroshiroPositionalRandomFactory const& randomFactory);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class NoodleCavifierNoises const&);

    MCAPI void dtor$();

    // NOLINTEND
};
