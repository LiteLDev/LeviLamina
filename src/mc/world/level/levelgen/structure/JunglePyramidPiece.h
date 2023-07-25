#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

class JunglePyramidPiece : public ::StructurePiece {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUNGLEPYRAMIDPIECE
public:
    JunglePyramidPiece& operator=(JunglePyramidPiece const&) = delete;
    JunglePyramidPiece(JunglePyramidPiece const&)            = delete;
    JunglePyramidPiece()                                     = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getType\@JunglePyramidPiece\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl 4
     * @symbol ?postProcess\@JunglePyramidPiece\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
};
