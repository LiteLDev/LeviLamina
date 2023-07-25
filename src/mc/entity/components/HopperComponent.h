#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HopperComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOPPERCOMPONENT
public:
    HopperComponent& operator=(HopperComponent const&) = delete;
    HopperComponent(HopperComponent const&)            = delete;
#endif

public:
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
};
