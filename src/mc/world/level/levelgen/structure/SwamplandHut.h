#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

class SwamplandHut : public ::StructurePiece {

public:
    // prevent constructor by default
    SwamplandHut& operator=(SwamplandHut const&) = delete;
    SwamplandHut(SwamplandHut const&)            = delete;
    SwamplandHut()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getType\@SwamplandHut\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl 4
     * @symbol ?postProcess\@SwamplandHut\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /**
     * @vftbl 5
     * @symbol ?postProcessMobsAt\@SwamplandHut\@\@UEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    /**
     * @vftbl 12
     * @symbol ?addHardcodedSpawnAreas\@SwamplandHut\@\@UEBAXAEAVLevelChunk\@\@\@Z
     */
    virtual void addHardcodedSpawnAreas(class LevelChunk&) const;
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?placeCauldron\@SwamplandHut\@\@IEAAXAEAVBlockSource\@\@AEAVRandom\@\@HHHAEBVBoundingBox\@\@\@Z
     */
    MCAPI void placeCauldron(class BlockSource&, class Random&, int, int, int, class BoundingBox const&);
    // NOLINTEND
};
