#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockEvents {

class BlockPlaceEventComponent {
public:
    // prevent constructor by default
    BlockPlaceEventComponent& operator=(BlockPlaceEventComponent const&);
    BlockPlaceEventComponent(BlockPlaceEventComponent const&);
    BlockPlaceEventComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockPlaceEventComponent@BlockEvents@@UEAA@XZ
    virtual ~BlockPlaceEventComponent() = default;

    // NOLINTEND
};

}; // namespace BlockEvents
