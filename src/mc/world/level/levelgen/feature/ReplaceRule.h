#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ReplaceRule {
public:
    // prevent constructor by default
    ReplaceRule& operator=(ReplaceRule const&);
    ReplaceRule(ReplaceRule const&);
    ReplaceRule();

public:
    // NOLINTBEGIN
    MCAPI ReplaceRule(class BlockDescriptor, std::vector<class BlockDescriptor>);

    MCAPI ~ReplaceRule();

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
