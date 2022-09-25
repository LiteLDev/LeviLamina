/**
 * @file  WoodlandMansionStart.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WoodlandMansionStart.
 *
 */
class WoodlandMansionStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WOODLANDMANSIONSTART
public:
    class WoodlandMansionStart& operator=(class WoodlandMansionStart const &) = delete;
    WoodlandMansionStart(class WoodlandMansionStart const &) = delete;
    WoodlandMansionStart() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~WoodlandMansionStart();
    /**
     * @hash   -1352513912
     * @vftbl  1
     * @symbol ?postProcess@WoodlandMansionStart@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

//private:
    /**
     * @hash   -118120609
     * @symbol ?_create@WoodlandMansionStart@@AEAAXAEAVDimension@@AEAVRandom@@HH@Z
     */
    MCAPI void _create(class Dimension &, class Random &, int, int);
    /**
     * @hash   -1332458560
     * @symbol ?_makeStairs@WoodlandMansionStart@@AEAAXAEBVBlockPos@@AEBVBlock@@EEAEAVBlockSource@@AEBVBoundingBox@@@Z
     */
    MCAPI void _makeStairs(class BlockPos const &, class Block const &, unsigned char, unsigned char, class BlockSource &, class BoundingBox const &);

private:

};