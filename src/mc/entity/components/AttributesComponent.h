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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
