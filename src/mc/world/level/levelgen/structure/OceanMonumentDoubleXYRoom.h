#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/OceanMonumentPiece.h"

class OceanMonumentDoubleXYRoom : public ::OceanMonumentPiece {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTDOUBLEXYROOM
public:
    OceanMonumentDoubleXYRoom& operator=(OceanMonumentDoubleXYRoom const&) = delete;
    OceanMonumentDoubleXYRoom(OceanMonumentDoubleXYRoom const&)            = delete;
    OceanMonumentDoubleXYRoom()                                            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getType\@OceanMonumentDoubleXYRoom\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl 4
     * @symbol ?postProcess\@OceanMonumentDoubleXYRoom\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
};
