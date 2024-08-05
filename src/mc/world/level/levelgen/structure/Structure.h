#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { class GenerationStub; }
namespace br::worldgen { class StructureInstance; }
namespace br::worldgen { struct GenerationContext; }
// clang-format on

namespace br::worldgen {

struct Structure {
public:
    // prevent constructor by default
    Structure& operator=(Structure const&);
    Structure();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Structure();

    // vIndex: 1
    virtual std::optional<class br::worldgen::GenerationStub>
    findValidGenerationPoint(struct br::worldgen::GenerationContext&) const = 0;

    MCAPI Structure(struct br::worldgen::Structure const&);

    MCAPI std::shared_ptr<class br::worldgen::StructureInstance>
          generate(struct br::worldgen::GenerationContext&) const;

    MCAPI bool operator==(struct br::worldgen::Structure const&) const;

    // NOLINTEND
};

}; // namespace br::worldgen
