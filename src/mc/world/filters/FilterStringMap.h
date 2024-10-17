#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FilterStringMap {
public:
    // prevent constructor by default
    FilterStringMap& operator=(FilterStringMap const&);
    FilterStringMap();

public:
    // NOLINTBEGIN
    MCAPI explicit FilterStringMap(std::initializer_list<std::pair<std::string const, struct FilterInputDefinition>>);

    MCAPI FilterStringMap(struct FilterStringMap const&);

    MCAPI struct FilterStringMap& operator=(struct FilterStringMap&&);

    MCAPI ~FilterStringMap();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct FilterStringMap const&);

    MCAPI void* ctor$(std::initializer_list<std::pair<std::string const, struct FilterInputDefinition>>);

    MCAPI void dtor$();

    // NOLINTEND
};
