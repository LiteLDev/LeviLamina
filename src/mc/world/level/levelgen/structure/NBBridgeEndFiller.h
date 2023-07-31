#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/NetherFortressPiece.h"

class NBBridgeEndFiller : public ::NetherFortressPiece {

public:
    // prevent constructor by default
    NBBridgeEndFiller& operator=(NBBridgeEndFiller const&) = delete;
    NBBridgeEndFiller(NBBridgeEndFiller const&)            = delete;
    NBBridgeEndFiller()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getType\@NBBridgeEndFiller\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl 4
     * @symbol ?postProcess\@NBBridgeEndFiller\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /**
     * @symbol
     * ?createPiece\@NBBridgeEndFiller\@\@SA?AV?$unique_ptr\@VNetherFortressPiece\@\@U?$default_delete\@VNetherFortressPiece\@\@\@std\@\@\@std\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@3\@AEAVRandom\@\@HHHHH\@Z
     */
    MCAPI static std::unique_ptr<class NetherFortressPiece>
    createPiece(std::vector<std::unique_ptr<class StructurePiece>>&, class Random&, int, int, int, int, int);
    // NOLINTEND
};
