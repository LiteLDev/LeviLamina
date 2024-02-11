#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/JigsawSectionDataKey.h"

// auto generated forward declare list
// clang-format off
class StructurePoolElement;
// clang-format on

namespace br::worldgen {

class JigsawSectionData {
public:
    // prevent constructor by default
    JigsawSectionData& operator=(JigsawSectionData const&);
    JigsawSectionData();

public:
    // NOLINTBEGIN
    // symbol: ??0JigsawSectionData@worldgen@br@@QEAA@$$QEAV012@@Z
    MCAPI JigsawSectionData(class br::worldgen::JigsawSectionData&&);

    // symbol: ??0JigsawSectionData@worldgen@br@@QEAA@AEBV012@@Z
    MCAPI JigsawSectionData(class br::worldgen::JigsawSectionData const&);

    // symbol: ?push@JigsawSectionData@worldgen@br@@QEAA?AW4JigsawSectionDataKey@23@PEBVStructurePoolElement@@H@Z
    MCAPI ::br::worldgen::JigsawSectionDataKey push(class StructurePoolElement const*, int);

    // symbol: ?reserve@JigsawSectionData@worldgen@br@@QEAAX_K@Z
    MCAPI void reserve(uint64);

    // symbol: ??1JigsawSectionData@worldgen@br@@QEAA@XZ
    MCAPI ~JigsawSectionData();

    // NOLINTEND
};

}; // namespace br::worldgen
