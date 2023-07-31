#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MineshaftPiece.h"

class MineshaftCrossing : public ::MineshaftPiece {

public:
    // prevent constructor by default
    MineshaftCrossing& operator=(MineshaftCrossing const&) = delete;
    MineshaftCrossing(MineshaftCrossing const&)            = delete;
    MineshaftCrossing()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getType\@MineshaftCrossing\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl 3
     * @symbol
     * ?addChildren\@MineshaftCrossing\@\@UEAAXAEAVStructurePiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@\@Z
     */
    virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /**
     * @vftbl 4
     * @symbol ?postProcess\@MineshaftCrossing\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /**
     * @symbol ?_placeSupportPillar\@MineshaftCrossing\@\@QEAAXAEAVBlockSource\@\@AEBVBoundingBox\@\@HHHH\@Z
     */
    MCAPI void _placeSupportPillar(class BlockSource&, class BoundingBox const&, int, int, int, int);
    // NOLINTEND
};
