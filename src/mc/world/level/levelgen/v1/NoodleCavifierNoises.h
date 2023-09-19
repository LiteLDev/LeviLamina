#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NoodleCavifierNoises {
public:
    // prevent constructor by default
    NoodleCavifierNoises& operator=(NoodleCavifierNoises const&);
    NoodleCavifierNoises();

public:
    // NOLINTBEGIN
    // symbol: ??0NoodleCavifierNoises@@QEAA@AEBV0@@Z
    MCAPI NoodleCavifierNoises(class NoodleCavifierNoises const&);

    // symbol: ??1NoodleCavifierNoises@@QEAA@XZ
    MCAPI ~NoodleCavifierNoises();

    // symbol: ?make@NoodleCavifierNoises@@SA?AV1@AEBVXoroshiroPositionalRandomFactory@@@Z
    MCAPI static class NoodleCavifierNoises make(class XoroshiroPositionalRandomFactory const&);

    // NOLINTEND
};
