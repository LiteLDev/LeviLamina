#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
namespace br::worldgen::processors::JigsawReplacementHelpers { struct Prop; }
// clang-format on

namespace br::worldgen::processors::JigsawReplacementHelpers {
// functions
// NOLINTBEGIN
MCNAPI ::Block const* calcFinalBlock(::CompoundTag const& tag);

MCNAPI ::std::vector<::br::worldgen::processors::JigsawReplacementHelpers::Prop> parseProps(::std::string_view src);
// NOLINTEND

} // namespace br::worldgen::processors::JigsawReplacementHelpers
