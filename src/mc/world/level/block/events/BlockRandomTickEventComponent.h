#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockEvents {

class BlockRandomTickEventComponent {
public:
    // prevent constructor by default
    BlockRandomTickEventComponent& operator=(BlockRandomTickEventComponent const&);
    BlockRandomTickEventComponent(BlockRandomTickEventComponent const&);
    BlockRandomTickEventComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockRandomTickEventComponent@BlockEvents@@UEAA@XZ
    virtual ~BlockRandomTickEventComponent() = default;

    // NOLINTEND
};

}; // namespace BlockEvents
