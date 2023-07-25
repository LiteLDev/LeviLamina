#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/OceanMonumentPiece.h"

class OceanMonumentDoubleYZRoom : public ::OceanMonumentPiece {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTDOUBLEYZROOM
public:
    OceanMonumentDoubleYZRoom& operator=(OceanMonumentDoubleYZRoom const&) = delete;
    OceanMonumentDoubleYZRoom(OceanMonumentDoubleYZRoom const&)            = delete;
    OceanMonumentDoubleYZRoom()                                            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getType\@OceanMonumentDoubleYZRoom\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl 4
     * @symbol ?postProcess\@OceanMonumentDoubleYZRoom\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
};
