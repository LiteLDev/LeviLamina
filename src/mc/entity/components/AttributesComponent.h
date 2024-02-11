#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AttributesComponent {
public:
    // prevent constructor by default
    AttributesComponent& operator=(AttributesComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0AttributesComponent@@QEAA@XZ
    MCAPI AttributesComponent();

    // symbol: ??0AttributesComponent@@QEAA@$$QEAU0@@Z
    MCAPI AttributesComponent(struct AttributesComponent&& other);

    // symbol: ??0AttributesComponent@@QEAA@AEBU0@@Z
    MCAPI AttributesComponent(struct AttributesComponent const& other);

    // symbol: ??4AttributesComponent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct AttributesComponent& operator=(struct AttributesComponent&& other);

    // symbol: ??1AttributesComponent@@QEAA@XZ
    MCAPI ~AttributesComponent();

    // NOLINTEND
};
