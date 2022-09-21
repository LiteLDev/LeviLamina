/**
 * @file  MC/StructureStart.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructureStart.
 *
 */
class StructureStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURESTART
public:
    class StructureStart& operator=(class StructureStart const &) = delete;
    StructureStart(class StructureStart const &) = delete;
    StructureStart() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~StructureStart();
    /**
     * @hash   -1308578484
     * @vftbl  1
     * @symbol ?postProcess@StructureStart@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   1129685243
     * @vftbl  2
     * @symbol ?isValid@StructureStart@@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @hash   -1510634460
     * @symbol ?postProcessMobsAt@StructureStart@@QEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    MCAPI void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);

//protected:
    /**
     * @hash   1638120325
     * @symbol ?calculateBoundingBox@StructureStart@@IEAAXXZ
     */
    MCAPI void calculateBoundingBox();
    /**
     * @hash   651779495
     * @symbol ?moveBoundingBoxes@StructureStart@@IEAAXH@Z
     */
    MCAPI void moveBoundingBoxes(int);
    /**
     * @hash   242665574
     * @symbol ?moveInsideHeights@StructureStart@@IEAAXAEAVRandom@@FF@Z
     */
    MCAPI void moveInsideHeights(class Random &, short, short);
    /**
     * @hash   -375872732
     * @symbol ?moveToBelowSeaLevel@StructureStart@@IEAAXFFAEAVRandom@@H@Z
     */
    MCAPI void moveToBelowSeaLevel(short, short, class Random &, int);

protected:

};