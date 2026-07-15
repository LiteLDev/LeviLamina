#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LegacyStructureBlockInfo;
// clang-format on

namespace br::worldgen {

struct NbtStructureTemplateBlockPalette {
public:
    // NbtStructureTemplateBlockPalette inner types define
    using Data = ::std::vector<::LegacyStructureBlockInfo>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::vector<::LegacyStructureBlockInfo> const*> mNbt;
    ::ll::TypedStorage<8, 8, uint64>                                           mIndex;
    // NOLINTEND
};

} // namespace br::worldgen
