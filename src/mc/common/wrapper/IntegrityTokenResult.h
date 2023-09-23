#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IntegrityTokenResult {
public:
    // prevent constructor by default
    IntegrityTokenResult& operator=(IntegrityTokenResult const&);
    IntegrityTokenResult(IntegrityTokenResult const&);
    IntegrityTokenResult();

public:
    // NOLINTBEGIN
    // symbol: ??0IntegrityTokenResult@@QEAA@$$QEAU0@@Z
    MCAPI IntegrityTokenResult(struct IntegrityTokenResult&&);

    // symbol: ??1IntegrityTokenResult@@QEAA@XZ
    MCAPI ~IntegrityTokenResult();

    // NOLINTEND
};
