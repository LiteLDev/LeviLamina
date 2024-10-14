#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

class GenerationStub {
public:
    // GenerationStub inner types declare
    // clang-format off
    struct BuildResult;
    // clang-format on

    // GenerationStub inner types define
    struct BuildResult {
    public:
        // prevent constructor by default
        BuildResult& operator=(BuildResult const&);
        BuildResult(BuildResult const&);
        BuildResult();

    public:
        // NOLINTBEGIN
        MCAPI ~BuildResult();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    GenerationStub& operator=(GenerationStub const&);
    GenerationStub(GenerationStub const&);
    GenerationStub();
};

}; // namespace br::worldgen
