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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
