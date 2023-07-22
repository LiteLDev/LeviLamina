/**
 * @file  StructureStart.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~StructureStart();
    /**
     * @vftbl  1
     * @symbol  ?postProcess\@StructureStart\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @vftbl  2
     * @symbol  ?isValid\@StructureStart\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @symbol  ?postProcessMobsAt\@StructureStart\@\@QEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);

//protected:
    /**
     * @symbol  ?calculateBoundingBox\@StructureStart\@\@IEAAXXZ
     */
    MCAPI void calculateBoundingBox();
    /**
     * @symbol  ?moveBoundingBoxes\@StructureStart\@\@IEAAXH\@Z
     */
    MCAPI void moveBoundingBoxes(int);
    /**
     * @symbol  ?moveInsideHeights\@StructureStart\@\@IEAAXAEAVRandom\@\@FF\@Z
     */
    MCAPI void moveInsideHeights(class Random &, short, short);
    /**
     * @symbol  ?moveToBelowSeaLevel\@StructureStart\@\@IEAAXFFAEAVRandom\@\@H\@Z
     */
    MCAPI void moveToBelowSeaLevel(short, short, class Random &, int);

protected:

};