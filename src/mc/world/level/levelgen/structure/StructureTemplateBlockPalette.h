#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

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
    ::ll::UntypedStorage<4, 4>  mUnkcf39b7;
    ::ll::UntypedStorage<8, 32> mUnk7b196d;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureTemplateBlockPalette& operator=(StructureTemplateBlockPalette const&);
    StructureTemplateBlockPalette(StructureTemplateBlockPalette const&);
    StructureTemplateBlockPalette();

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
