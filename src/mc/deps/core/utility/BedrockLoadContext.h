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
    MCAPI void* ctor$(class SemVersion const& engineVersion);

    MCAPI void dtor$();

    // NOLINTEND
};
