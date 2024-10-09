#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

struct GenerationContext {
public:
    // prevent constructor by default
    GenerationContext& operator=(GenerationContext const&);
    GenerationContext(GenerationContext const&);
    GenerationContext();

public:
    // NOLINTBEGIN
    MCAPI ~GenerationContext();

    // NOLINTEND
};

}; // namespace br::worldgen
