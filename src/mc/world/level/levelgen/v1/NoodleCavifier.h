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
    // symbol: ??0NoodleCavifier@@QEAA@AEBVNoodleCavifierNoises@@F@Z
    MCAPI NoodleCavifier(class NoodleCavifierNoises const&, short);

    // symbol: ?getInterpolators@NoodleCavifier@@QEAA?AV?$array@PEAVNoiseCellInterpolator@@$03@std@@HH@Z
    MCAPI std::array<class NoiseCellInterpolator*, 4> getInterpolators(int, int);

    // NOLINTEND
};
