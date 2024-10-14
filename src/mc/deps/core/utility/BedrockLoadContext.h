#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BedrockLoadContext {
public:
    // prevent constructor by default
    BedrockLoadContext& operator=(BedrockLoadContext const&);
    BedrockLoadContext(BedrockLoadContext const&);
    BedrockLoadContext();

public:
    // NOLINTBEGIN
    MCAPI explicit BedrockLoadContext(class SemVersion const& engineVersion);

    MCAPI ~BedrockLoadContext();

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
