#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockEvents {

class BlockPlayerInteractEventComponent {
public:
    // prevent constructor by default
    BlockPlayerInteractEventComponent& operator=(BlockPlayerInteractEventComponent const&);
    BlockPlayerInteractEventComponent(BlockPlayerInteractEventComponent const&);
    BlockPlayerInteractEventComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockPlayerInteractEventComponent@BlockEvents@@UEAA@XZ
    virtual ~BlockPlayerInteractEventComponent() = default;

    // NOLINTEND
};

}; // namespace BlockEvents
