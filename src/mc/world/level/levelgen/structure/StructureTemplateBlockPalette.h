#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/levelgen/structure/McStructureTemplateBlockPalette.h"
#include "mc/world/level/levelgen/structure/NbtStructureTemplateBlockPalette.h"

// auto generated forward declare list
// clang-format off
class IUnknownBlockTypeRegistry;
class StructureTemplateData;
// clang-format on

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
        ::ll::TypedStorage<8, 32, ::br::worldgen::McStructureTemplateBlockPalette>  mcstructure;
        ::ll::TypedStorage<8, 32, ::br::worldgen::NbtStructureTemplateBlockPalette> nbt;
        ::ll::TypedStorage<8, 32, void*>                                            unset;
    } mData;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::br::worldgen::StructureTemplateBlockPalette mcstructure(
        ::StructureTemplateData const&                                 data,
        uint64                                                         paletteIndex,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> const& unknownBlockregistry
    );
    // NOLINTEND
};

} // namespace br::worldgen
