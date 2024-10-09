#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockLegacy;
// clang-format on

namespace BlockEvents {

class BlockFallOnEventComponent {
public:
    // prevent constructor by default
    BlockFallOnEventComponent& operator=(BlockFallOnEventComponent const&);
    BlockFallOnEventComponent(BlockFallOnEventComponent const&);
    BlockFallOnEventComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockFallOnEventComponent() = default;

    MCAPI explicit BlockFallOnEventComponent(gsl::not_null<class Block*> permutation);

    MCAPI explicit BlockFallOnEventComponent(gsl::not_null<class BlockLegacy*> legacy);

    // NOLINTEND
};

}; // namespace BlockEvents
