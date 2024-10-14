#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPatternEvent {
public:
    // prevent constructor by default
    BlockPatternEvent& operator=(BlockPatternEvent const&);
    BlockPatternEvent();

public:
    // NOLINTBEGIN
    MCAPI BlockPatternEvent(struct BlockPatternEvent const&);

    MCAPI ~BlockPatternEvent();

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
