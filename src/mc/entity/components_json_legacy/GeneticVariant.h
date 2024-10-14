#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GeneticVariant {
public:
    // prevent constructor by default
    GeneticVariant& operator=(GeneticVariant const&);
    GeneticVariant();

public:
    // NOLINTBEGIN
    MCAPI GeneticVariant(struct GeneticVariant const&);

    MCAPI ~GeneticVariant();

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
