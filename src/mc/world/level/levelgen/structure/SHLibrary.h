#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StrongholdPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class SHLibrary : public ::StrongholdPiece {
public:
    // prevent constructor by default
    SHLibrary& operator=(SHLibrary const&);
    SHLibrary(SHLibrary const&);
    SHLibrary();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SHLibrary@@UEAA@XZ
    virtual ~SHLibrary() = default;

    // vIndex: 2, symbol: ?getType@SHLibrary@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@SHLibrary@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // symbol:
    // ?createPiece@SHLibrary@@SA?AV?$unique_ptr@VStrongholdPiece@@U?$default_delete@VStrongholdPiece@@@std@@@std@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@3@AEAVRandom@@HHHHH@Z
    MCAPI static std::unique_ptr<class StrongholdPiece> createPiece(
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
