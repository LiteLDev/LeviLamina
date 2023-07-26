#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPropertyComponent {

public:
    // prevent constructor by default
    BlockPropertyComponent& operator=(BlockPropertyComponent const&) = delete;
    BlockPropertyComponent(BlockPropertyComponent const&)            = delete;
    BlockPropertyComponent()                                         = delete;

public:
    /**
     * @symbol ?getProperty\@BlockPropertyComponent\@\@QEBA_NW4BlockProperty\@\@\@Z
     */
    MCAPI bool getProperty(enum class BlockProperty) const; // NOLINT
    /**
     * @symbol ?hasProperty\@BlockPropertyComponent\@\@QEBA_NW4BlockProperty\@\@\@Z
     */
    MCAPI bool hasProperty(enum class BlockProperty) const; // NOLINT
};
