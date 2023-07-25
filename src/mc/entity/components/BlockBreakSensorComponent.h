#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockBreakSensorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKBREAKSENSORCOMPONENT
public:
    BlockBreakSensorComponent& operator=(BlockBreakSensorComponent const&) = delete;
    BlockBreakSensorComponent(BlockBreakSensorComponent const&)            = delete;
    BlockBreakSensorComponent()                                            = delete;
#endif

public:
    /**
     * @symbol ??0BlockBreakSensorComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI BlockBreakSensorComponent(class BlockBreakSensorComponent&&);
    /**
     * @symbol ?initialize\@BlockBreakSensorComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initialize(class Actor&);
    /**
     * @symbol ??4BlockBreakSensorComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class BlockBreakSensorComponent& operator=(class BlockBreakSensorComponent&&);
    /**
     * @symbol ?updateSensorPos\@BlockBreakSensorComponent\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void updateSensorPos(class Vec3 const&);
    /**
     * @symbol ??1BlockBreakSensorComponent\@\@QEAA\@XZ
     */
    MCAPI ~BlockBreakSensorComponent();
};
