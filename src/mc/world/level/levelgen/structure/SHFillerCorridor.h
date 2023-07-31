#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

class SHFillerCorridor : public ::StructurePiece {

public:
    // prevent constructor by default
    SHFillerCorridor& operator=(SHFillerCorridor const&) = delete;
    SHFillerCorridor(SHFillerCorridor const&)            = delete;
    SHFillerCorridor()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getType\@SHFillerCorridor\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl 4
     * @symbol ?postProcess\@SHFillerCorridor\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /**
     * @symbol
     * ?findPieceBox\@SHFillerCorridor\@\@SA?AVBoundingBox\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@HHHH\@Z
     */
    MCAPI static class BoundingBox
    findPieceBox(std::vector<std::unique_ptr<class StructurePiece>>&, class Random&, int, int, int, int);
    // NOLINTEND
};
