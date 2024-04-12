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
    // vIndex: 0, symbol: __gen_??1BlockFallOnEventComponent@BlockEvents@@UEAA@XZ
    virtual ~BlockFallOnEventComponent() = default;

    // symbol: ??0BlockFallOnEventComponent@BlockEvents@@QEAA@V?$not_null@PEAVBlock@@@gsl@@@Z
    MCAPI explicit BlockFallOnEventComponent(gsl::not_null<class Block*>);

    // symbol: ??0BlockFallOnEventComponent@BlockEvents@@QEAA@V?$not_null@PEAVBlockLegacy@@@gsl@@@Z
    MCAPI explicit BlockFallOnEventComponent(gsl::not_null<class BlockLegacy*>);

    // NOLINTEND
};

}; // namespace BlockEvents
