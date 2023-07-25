#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

class ScatteredFeaturePiece : public ::StructurePiece {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCATTEREDFEATUREPIECE
public:
    ScatteredFeaturePiece& operator=(ScatteredFeaturePiece const&) = delete;
    ScatteredFeaturePiece(ScatteredFeaturePiece const&)            = delete;
    ScatteredFeaturePiece()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCATTEREDFEATUREPIECE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScatteredFeaturePiece();
#endif

    // protected:
    /**
     * @symbol ??0ScatteredFeaturePiece\@\@IEAA\@HHHHHH\@Z
     */
    MCAPI ScatteredFeaturePiece(int, int, int, int, int, int);
    /**
     * @symbol ?updateAverageGroundHeight\@ScatteredFeaturePiece\@\@IEAA_NAEAVBlockSource\@\@AEBVBoundingBox\@\@H\@Z
     */
    MCAPI bool updateAverageGroundHeight(class BlockSource&, class BoundingBox const&, int);

protected:
};
