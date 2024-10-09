#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/JigsawSectionDataKey.h"

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
    MCAPI JigsawSectionData(class br::worldgen::JigsawSectionData&&);

    MCAPI JigsawSectionData(class br::worldgen::JigsawSectionData const&);

    MCAPI ::br::worldgen::JigsawSectionDataKey push(class StructurePoolElement const* element, int depth);

    MCAPI void reserve(uint64 size);

    MCAPI ~JigsawSectionData();

    // NOLINTEND
};

}; // namespace br::worldgen
