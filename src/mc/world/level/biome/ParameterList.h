#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ParameterList {
public:
    // prevent constructor by default
    ParameterList& operator=(ParameterList const&);
    ParameterList(ParameterList const&);
    ParameterList();

public:
    // NOLINTBEGIN
    // symbol: ??0ParameterList@@QEAA@$$QEAV0@@Z
    MCAPI ParameterList(class ParameterList&&);

    // symbol: ??0ParameterList@@QEAA@AEBV?$vector@UBiomeNoiseTarget@@V?$allocator@UBiomeNoiseTarget@@@std@@@std@@@Z
    MCAPI explicit ParameterList(std::vector<struct BiomeNoiseTarget> const& targets);

    // symbol: ??1ParameterList@@QEAA@XZ
    MCAPI ~ParameterList();

    // NOLINTEND
};
