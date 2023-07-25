#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPropertyComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPROPERTYCOMPONENT
public:
    BlockPropertyComponent& operator=(BlockPropertyComponent const&) = delete;
    BlockPropertyComponent(BlockPropertyComponent const&)            = delete;
    BlockPropertyComponent()                                         = delete;
#endif

public:
    /**
     * @symbol ?getProperty\@BlockPropertyComponent\@\@QEBA_NW4BlockProperty\@\@\@Z
     */
    MCAPI bool getProperty(enum class BlockProperty) const;
    /**
     * @symbol ?hasProperty\@BlockPropertyComponent\@\@QEBA_NW4BlockProperty\@\@\@Z
     */
    MCAPI bool hasProperty(enum class BlockProperty) const;
};
