#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/NetherFortressPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class NBBridgeEndFiller : public ::NetherFortressPiece {
public:
    // prevent constructor by default
    NBBridgeEndFiller& operator=(NBBridgeEndFiller const&);
    NBBridgeEndFiller(NBBridgeEndFiller const&);
    NBBridgeEndFiller();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NBBridgeEndFiller@@UEAA@XZ
    virtual ~NBBridgeEndFiller() = default;

    // vIndex: 2, symbol: ?getType@NBBridgeEndFiller@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@NBBridgeEndFiller@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // symbol:
    // ?createPiece@NBBridgeEndFiller@@SA?AV?$unique_ptr@VNetherFortressPiece@@U?$default_delete@VNetherFortressPiece@@@std@@@std@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@3@AEAVRandom@@HHHHH@Z
    MCAPI static std::unique_ptr<class NetherFortressPiece> createPiece(
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 genDepth
    );

    // NOLINTEND
};
