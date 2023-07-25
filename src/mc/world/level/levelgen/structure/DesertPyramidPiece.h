#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

class DesertPyramidPiece : public ::StructurePiece {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DESERTPYRAMIDPIECE
public:
    DesertPyramidPiece& operator=(DesertPyramidPiece const&) = delete;
    DesertPyramidPiece(DesertPyramidPiece const&)            = delete;
    DesertPyramidPiece()                                     = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getType\@DesertPyramidPiece\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl 4
     * @symbol ?postProcess\@DesertPyramidPiece\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
};
