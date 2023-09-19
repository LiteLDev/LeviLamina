#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PropertyValues {
public:
    // prevent constructor by default
    PropertyValues& operator=(PropertyValues const&);
    PropertyValues();

public:
    // NOLINTBEGIN
    // symbol: ??0PropertyValues@@QEAA@AEBU0@@Z
    MCAPI PropertyValues(struct PropertyValues const&);

    // symbol: ??4PropertyValues@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct PropertyValues& operator=(struct PropertyValues&&);

    // symbol: ?resize@PropertyValues@@QEAAX_K000@Z
    MCAPI void resize(uint64, uint64, uint64, uint64);

    // symbol: ??1PropertyValues@@QEAA@XZ
    MCAPI ~PropertyValues();

    // NOLINTEND
};
