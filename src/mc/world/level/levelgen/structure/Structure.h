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
    Structure(Structure const&);
    Structure();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Structure@worldgen@br@@UEAA@XZ
    virtual ~Structure();

    // vIndex: 1, symbol:
    // ?findValidGenerationPoint@JigsawStructure@worldgen@br@@UEBA?AV?$optional@VGenerationStub@worldgen@br@@@std@@AEAUGenerationContext@23@@Z
    virtual std::optional<class br::worldgen::GenerationStub>
    findValidGenerationPoint(struct br::worldgen::GenerationContext&) const = 0;

    // symbol:
    // ?generate@Structure@worldgen@br@@QEBA?AV?$shared_ptr@VStructureInstance@worldgen@br@@@std@@AEAUGenerationContext@23@@Z
    MCAPI std::shared_ptr<class br::worldgen::StructureInstance>
          generate(struct br::worldgen::GenerationContext&) const;

    // symbol: ??8Structure@worldgen@br@@QEBA_NAEBU012@@Z
    MCAPI bool operator==(struct br::worldgen::Structure const&) const;

    // NOLINTEND
};

}; // namespace br::worldgen
