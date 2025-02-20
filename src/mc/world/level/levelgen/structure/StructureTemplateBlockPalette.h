#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

struct StructureTemplateBlockPalette {
public:
    // StructureTemplateBlockPalette inner types define
    enum class Type : int {
        Unset       = 0,
        McStructure = 1,
        Nbt         = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkcf39b7;
    ::ll::UntypedStorage<8, 32> mUnk7b196d;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureTemplateBlockPalette& operator=(StructureTemplateBlockPalette const&);
    StructureTemplateBlockPalette(StructureTemplateBlockPalette const&);
    StructureTemplateBlockPalette();
};

} // namespace br::worldgen
