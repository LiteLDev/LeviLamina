#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AttributesComponent {
public:
    // prevent constructor by default
    AttributesComponent& operator=(AttributesComponent const&);

public:
    // NOLINTBEGIN
    MCAPI AttributesComponent();

    MCAPI AttributesComponent(struct AttributesComponent&& other);

    MCAPI AttributesComponent(struct AttributesComponent const& other);

    MCAPI struct AttributesComponent& operator=(struct AttributesComponent&& other);

    MCAPI ~AttributesComponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(struct AttributesComponent&& other);

    MCAPI void* ctor$(struct AttributesComponent const& other);

    MCAPI void dtor$();

    // NOLINTEND
};
