/**
 * @file  BlockBreakSensorComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockBreakSensorComponent.
 *
 */
class BlockBreakSensorComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKBREAKSENSORCOMPONENT
public:
    class BlockBreakSensorComponent& operator=(class BlockBreakSensorComponent const &) = delete;
    BlockBreakSensorComponent(class BlockBreakSensorComponent const &) = delete;
#endif

public:
    /**
     * @symbol  ??0BlockBreakSensorComponent\@\@QEAA\@XZ
     */
    MCAPI BlockBreakSensorComponent();
    /**
     * @symbol  ??0BlockBreakSensorComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI BlockBreakSensorComponent(class BlockBreakSensorComponent &&);
    /**
     * @symbol  ?initialize\@BlockBreakSensorComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initialize(class Actor &);
    /**
     * @symbol  ??4BlockBreakSensorComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class BlockBreakSensorComponent & operator=(class BlockBreakSensorComponent &&);
    /**
     * @symbol  ?updateSensorPos\@BlockBreakSensorComponent\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void updateSensorPos(class Vec3 const &);
    /**
     * @symbol  ??1BlockBreakSensorComponent\@\@QEAA\@XZ
     */
    MCAPI ~BlockBreakSensorComponent();

};