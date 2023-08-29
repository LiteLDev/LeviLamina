#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BlockComponentBase.h"
#include "mc/world/level/block/utils/BlockProperty.h"

struct BlockPropertyComponent : public ::BlockComponentBase {

public:
    // prevent constructor by default
    BlockPropertyComponent& operator=(BlockPropertyComponent const&) = delete;
    BlockPropertyComponent(BlockPropertyComponent const&)            = delete;
    BlockPropertyComponent()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getProperty\@BlockPropertyComponent\@\@QEBA_NW4BlockProperty\@\@\@Z
     */
    MCAPI bool getProperty(enum class BlockProperty) const;
    /**
     * @symbol ?hasProperty\@BlockPropertyComponent\@\@QEBA_NW4BlockProperty\@\@\@Z
     */
    MCAPI bool hasProperty(enum class BlockProperty) const;
    // NOLINTEND
};
