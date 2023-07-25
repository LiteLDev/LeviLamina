#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/OceanMonumentPiece.h"

class OceanMonumentPenthouse : public ::OceanMonumentPiece {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTPENTHOUSE
public:
    OceanMonumentPenthouse& operator=(OceanMonumentPenthouse const&) = delete;
    OceanMonumentPenthouse(OceanMonumentPenthouse const&)            = delete;
    OceanMonumentPenthouse()                                         = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getType\@OceanMonumentPenthouse\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl 4
     * @symbol ?postProcess\@OceanMonumentPenthouse\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /**
     * @vftbl 5
     * @symbol
     * ?postProcessMobsAt\@OceanMonumentPenthouse\@\@UEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
};
