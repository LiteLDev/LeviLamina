#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HopperComponent {

public:
    // prevent constructor by default
    HopperComponent& operator=(HopperComponent const&) = delete;
    HopperComponent(HopperComponent const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0HopperComponent\@\@QEAA\@XZ
     */
    MCAPI HopperComponent();
    /**
     * @symbol ?getLastPosition\@HopperComponent\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getLastPosition() const;
    /**
     * @symbol ?pullInItems\@HopperComponent\@\@QEAA_NAEAVActor\@\@\@Z
     */
    MCAPI bool pullInItems(class Actor&);
    // NOLINTEND
};
