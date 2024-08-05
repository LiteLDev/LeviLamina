#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockEvents {

class BlockPlayerDestroyEventComponent {
public:
    // prevent constructor by default
    BlockPlayerDestroyEventComponent& operator=(BlockPlayerDestroyEventComponent const&);
    BlockPlayerDestroyEventComponent(BlockPlayerDestroyEventComponent const&);
    BlockPlayerDestroyEventComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockPlayerDestroyEventComponent() = default;

    // NOLINTEND
};

}; // namespace BlockEvents
