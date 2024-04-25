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
    // vIndex: 0, symbol: __gen_??1BlockTickConfigurationComponent@@UEAA@XZ
    virtual ~BlockTickConfigurationComponent() = default;

    // symbol: ?getRandomTickDelay@BlockTickConfigurationComponent@@QEBAHAEAVRandom@@@Z
    MCAPI int getRandomTickDelay(class Random&) const;

    // NOLINTEND
};
