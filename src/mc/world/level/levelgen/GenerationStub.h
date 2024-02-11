#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace br::worldgen { struct GenerationContext; }
// clang-format on

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
        // symbol: ??1BuildResult@GenerationStub@worldgen@br@@QEAA@XZ
        MCAPI ~BuildResult();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    GenerationStub& operator=(GenerationStub const&);
    GenerationStub(GenerationStub const&);
    GenerationStub();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0GenerationStub@worldgen@br@@QEAA@VBlockPos@@$$QEAV?$function@$$A6A?AUBuildResult@GenerationStub@worldgen@br@@AEAUGenerationContext@34@VBlockPos@@@Z@std@@@Z
    MCAPI
    GenerationStub(class BlockPos, std::function<struct br::worldgen::GenerationStub::BuildResult(struct br::worldgen::GenerationContext&, class BlockPos)>&&);

    // NOLINTEND
};

}; // namespace br::worldgen
