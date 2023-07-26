#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureStart {

public:
    // prevent constructor by default
    StructureStart& operator=(StructureStart const&) = delete;
    StructureStart(StructureStart const&)            = delete;
    StructureStart()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?postProcess\@StructureStart\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?isValid\@StructureStart\@\@UEBA_NXZ
     */
    virtual bool isValid() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTURESTART
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StructureStart(); // NOLINT
#endif

    // protected:
    /**
     * @symbol ?calculateBoundingBox\@StructureStart\@\@IEAAXXZ
     */
    MCAPI void calculateBoundingBox(); // NOLINT
    /**
     * @symbol ?moveBoundingBoxes\@StructureStart\@\@IEAAXH\@Z
     */
    MCAPI void moveBoundingBoxes(int); // NOLINT
    /**
     * @symbol ?moveInsideHeights\@StructureStart\@\@IEAAXAEAVRandom\@\@FF\@Z
     */
    MCAPI void moveInsideHeights(class Random&, short, short); // NOLINT
    /**
     * @symbol ?moveToBelowSeaLevel\@StructureStart\@\@IEAAXFFAEAVRandom\@\@H\@Z
     */
    MCAPI void moveToBelowSeaLevel(short, short, class Random&, int); // NOLINT

protected:
};
