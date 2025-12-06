#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LegacyStructureBlockInfo;
namespace br::worldgen { struct StructureBlockInfo; }
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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::br::worldgen::StructureBlockInfo> next();
    // NOLINTEND
};

} // namespace br::worldgen
