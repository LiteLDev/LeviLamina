#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/McStructureTemplateBlockPalette.h"
#include "mc/world/level/levelgen/structure/NbtStructureTemplateBlockPalette.h"

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
    ::ll::TypedStorage<4, 4, ::br::worldgen::StructureTemplateBlockPalette::Type> mType;
    union {
        ::ll::TypedStorage<8, 32, void*>                                            unset;
        ::ll::TypedStorage<8, 32, ::br::worldgen::McStructureTemplateBlockPalette>  mcstructure;
        ::ll::TypedStorage<8, 32, ::br::worldgen::NbtStructureTemplateBlockPalette> nbt;
    } mData;
    // NOLINTEND
};

} // namespace br::worldgen
