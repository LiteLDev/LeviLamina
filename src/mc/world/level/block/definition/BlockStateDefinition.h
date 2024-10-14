#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockStateDefinition {
public:
    // prevent constructor by default
    BlockStateDefinition();

public:
    // NOLINTBEGIN
    MCAPI BlockStateDefinition(struct BlockStateDefinition const& rhs);

    MCAPI struct BlockStateDefinition& operator=(struct BlockStateDefinition&& rhs);

    MCAPI struct BlockStateDefinition& operator=(struct BlockStateDefinition const& rhs);

    MCAPI ~BlockStateDefinition();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _copy(struct BlockStateDefinition const& rhs);

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
