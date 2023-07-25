#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/NetherFortressPiece.h"

class NBMonsterThrone : public ::NetherFortressPiece {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBMONSTERTHRONE
public:
    NBMonsterThrone& operator=(NBMonsterThrone const&) = delete;
    NBMonsterThrone(NBMonsterThrone const&)            = delete;
    NBMonsterThrone()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getType\@NBMonsterThrone\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl 4
     * @symbol ?postProcess\@NBMonsterThrone\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
};
