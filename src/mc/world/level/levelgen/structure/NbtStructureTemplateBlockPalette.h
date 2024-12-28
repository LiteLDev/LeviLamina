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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnked7ece;
    ::ll::UntypedStorage<8, 8> mUnk28d649;
    // NOLINTEND

public:
    // prevent constructor by default
    NbtStructureTemplateBlockPalette& operator=(NbtStructureTemplateBlockPalette const&);
    NbtStructureTemplateBlockPalette(NbtStructureTemplateBlockPalette const&);
    NbtStructureTemplateBlockPalette();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::br::worldgen::StructureBlockInfo> next();
    // NOLINTEND
};

} // namespace br::worldgen
