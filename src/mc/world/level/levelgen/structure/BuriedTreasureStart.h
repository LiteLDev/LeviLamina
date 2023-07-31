#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class BuriedTreasureStart : public ::StructureStart {

public:
    // prevent constructor by default
    BuriedTreasureStart& operator=(BuriedTreasureStart const&) = delete;
    BuriedTreasureStart(BuriedTreasureStart const&)            = delete;
    BuriedTreasureStart()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0BuriedTreasureStart\@\@QEAA\@AEAVDimension\@\@AEAVRandom\@\@HH\@Z
     */
    MCAPI BuriedTreasureStart(class Dimension&, class Random&, int, int);
    // NOLINTEND
};
