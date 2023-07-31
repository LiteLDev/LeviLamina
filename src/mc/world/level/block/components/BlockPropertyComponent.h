#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPropertyComponent {

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
