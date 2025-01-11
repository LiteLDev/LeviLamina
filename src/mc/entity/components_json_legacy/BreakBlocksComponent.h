#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockLegacy;
struct BreakBlocksDescription;
// clang-format on

class BreakBlocksComponent {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void breakNearbyBlocks(::Actor& actor);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isBreakable(::BreakBlocksDescription const* description, ::BlockLegacy const& block);
    // NOLINTEND
};
