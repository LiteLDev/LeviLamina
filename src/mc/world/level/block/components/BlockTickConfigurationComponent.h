#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentBase.h"

class BlockTickConfigurationComponent : public ::BlockComponentBase {
public:
    // prevent constructor by default
    BlockTickConfigurationComponent& operator=(BlockTickConfigurationComponent const&);
    BlockTickConfigurationComponent(BlockTickConfigurationComponent const&);
    BlockTickConfigurationComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockTickConfigurationComponent() = default;

    MCAPI int getRandomTickDelay(class Random& random) const;

    // NOLINTEND
};
