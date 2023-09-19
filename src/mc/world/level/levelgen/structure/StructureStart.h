#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureStart {
public:
    // prevent constructor by default
    StructureStart& operator=(StructureStart const&);
    StructureStart(StructureStart const&);
    StructureStart();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?postProcess@StructureStart@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // vIndex: 2, symbol: ?isValid@StructureStart@@UEBA_NXZ
    virtual bool isValid() const;

    // symbol: ??1StructureStart@@UEAA@XZ
    MCVAPI ~StructureStart();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?calculateBoundingBox@StructureStart@@IEAAXXZ
    MCAPI void calculateBoundingBox();

    // symbol: ?moveBoundingBoxes@StructureStart@@IEAAXH@Z
    MCAPI void moveBoundingBoxes(int);

    // symbol: ?moveInsideHeights@StructureStart@@IEAAXAEAVRandom@@FF@Z
    MCAPI void moveInsideHeights(class Random&, short, short);

    // symbol: ?moveToBelowSeaLevel@StructureStart@@IEAAXFFAEAVRandom@@H@Z
    MCAPI void moveToBelowSeaLevel(short, short, class Random&, int);

    // NOLINTEND
};
