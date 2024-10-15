#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NoodleCavifier {
public:
    // prevent constructor by default
    NoodleCavifier& operator=(NoodleCavifier const&);
    NoodleCavifier(NoodleCavifier const&);
    NoodleCavifier();

public:
    // NOLINTBEGIN
    MCAPI NoodleCavifier(class NoodleCavifierNoises const& noises, short minWorldHeight);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class NoodleCavifierNoises const& noises, short minWorldHeight);

    // NOLINTEND
};
