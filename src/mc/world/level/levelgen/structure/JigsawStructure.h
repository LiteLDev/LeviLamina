#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/Structure.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { class GenerationStub; }
namespace br::worldgen { struct GenerationContext; }
namespace br::worldgen { struct Structure; }
// clang-format on

namespace br::worldgen {

struct JigsawStructure : public ::br::worldgen::Structure {
public:
    // prevent constructor by default
    JigsawStructure& operator=(JigsawStructure const&);
    JigsawStructure(JigsawStructure const&);
    JigsawStructure();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1JigsawStructure@worldgen@br@@UEAA@XZ
    virtual ~JigsawStructure();

    // vIndex: 1, symbol:
    // ?findValidGenerationPoint@JigsawStructure@worldgen@br@@UEBA?AV?$optional@VGenerationStub@worldgen@br@@@std@@AEAUGenerationContext@23@@Z
    virtual std::optional<class br::worldgen::GenerationStub>
    findValidGenerationPoint(struct br::worldgen::GenerationContext&) const;

    // symbol: ??0JigsawStructure@worldgen@br@@QEAA@$$QEAU012@@Z
    MCAPI JigsawStructure(struct br::worldgen::JigsawStructure&&);

    // NOLINTEND
};

}; // namespace br::worldgen
