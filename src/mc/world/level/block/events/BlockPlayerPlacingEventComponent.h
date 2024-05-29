#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockEvents {

class BlockPlayerPlacingEventComponent {
public:
    // prevent constructor by default
    BlockPlayerPlacingEventComponent& operator=(BlockPlayerPlacingEventComponent const&);
    BlockPlayerPlacingEventComponent(BlockPlayerPlacingEventComponent const&);
    BlockPlayerPlacingEventComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockPlayerPlacingEventComponent@BlockEvents@@UEAA@XZ
    virtual ~BlockPlayerPlacingEventComponent() = default;

    // NOLINTEND
};

}; // namespace BlockEvents
