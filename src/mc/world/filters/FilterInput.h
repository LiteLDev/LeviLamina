#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FilterInput {
public:
    // prevent constructor by default
    FilterInput(FilterInput const&);
    FilterInput();

public:
    // NOLINTBEGIN
    // symbol: ??0FilterInput@@QEAA@H@Z
    MCAPI explicit FilterInput(int);

    // symbol: ??4FilterInput@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class FilterInput& operator=(class FilterInput&&);

    // symbol: ??4FilterInput@@QEAAAEAV0@AEBV0@@Z
    MCAPI class FilterInput& operator=(class FilterInput const&);

    // symbol: ??1FilterInput@@QEAA@XZ
    MCAPI ~FilterInput();

    // NOLINTEND
};
