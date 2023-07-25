#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureStart {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURESTART
public:
    StructureStart& operator=(StructureStart const&) = delete;
    StructureStart(StructureStart const&)            = delete;
    StructureStart()                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?postProcess\@StructureStart\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /**
     * @vftbl 2
     * @symbol ?isValid\@StructureStart\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTURESTART
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StructureStart();
#endif

    // protected:
    /**
     * @symbol ?calculateBoundingBox\@StructureStart\@\@IEAAXXZ
     */
    MCAPI void calculateBoundingBox();
    /**
     * @symbol ?moveBoundingBoxes\@StructureStart\@\@IEAAXH\@Z
     */
    MCAPI void moveBoundingBoxes(int);
    /**
     * @symbol ?moveInsideHeights\@StructureStart\@\@IEAAXAEAVRandom\@\@FF\@Z
     */
    MCAPI void moveInsideHeights(class Random&, short, short);
    /**
     * @symbol ?moveToBelowSeaLevel\@StructureStart\@\@IEAAXFFAEAVRandom\@\@H\@Z
     */
    MCAPI void moveToBelowSeaLevel(short, short, class Random&, int);

protected:
};
