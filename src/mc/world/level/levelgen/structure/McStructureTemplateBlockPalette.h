#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct StructureBlockInfo; }
// clang-format on

namespace br::worldgen {

struct McStructureTemplateBlockPalette {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb1edc9;
    ::ll::UntypedStorage<8, 8> mUnk526a15;
    ::ll::UntypedStorage<8, 8> mUnkff1cc7;
    ::ll::UntypedStorage<8, 8> mUnkb9fce8;
    // NOLINTEND

public:
    // prevent constructor by default
    McStructureTemplateBlockPalette& operator=(McStructureTemplateBlockPalette const&);
    McStructureTemplateBlockPalette(McStructureTemplateBlockPalette const&);
    McStructureTemplateBlockPalette();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::br::worldgen::StructureBlockInfo> next();
    // NOLINTEND
};

} // namespace br::worldgen
