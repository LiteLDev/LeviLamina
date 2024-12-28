#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/facing/Axis.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace br::worldgen::processors { struct AlwaysTrueType; }
namespace br::worldgen::processors::BlockEntity { struct Modifier; }
namespace br::worldgen::processors::BlockRules { struct Test; }
namespace br::worldgen::processors::PosRules { struct Test; }
// clang-format on

namespace br::worldgen::processors {
// functions
// NOLINTBEGIN
MCAPI ::br::worldgen::processors::AlwaysTrueType AlwaysTrue();

MCAPI ::br::worldgen::processors::BlockEntity::Modifier AppendLoot(::std::string_view lootTable);

MCAPI ::std::optional<::br::worldgen::processors::PosRules::Test>
AxisAlignedLinear(float minChance, float maxChance, int minDist, int maxDist, ::Facing::Axis axis);

MCAPI ::br::worldgen::processors::BlockRules::Test BlockMatch(::Block const& block);

MCAPI ::br::worldgen::processors::BlockRules::Test RandomBlockMatch(::Block const& block, float probability);

MCAPI ::br::worldgen::processors::BlockRules::Test TagMatch(::std::string_view tag);
// NOLINTEND

} // namespace br::worldgen::processors
