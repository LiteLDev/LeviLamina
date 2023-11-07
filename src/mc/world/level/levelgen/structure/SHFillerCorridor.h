#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StrongholdPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class SHFillerCorridor : public ::StrongholdPiece {
public:
    // prevent constructor by default
    SHFillerCorridor& operator=(SHFillerCorridor const&);
    SHFillerCorridor(SHFillerCorridor const&);
    SHFillerCorridor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SHFillerCorridor() = default;

    // vIndex: 2, symbol: ?getType@SHFillerCorridor@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@SHFillerCorridor@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // symbol:
    // ?findPieceBox@SHFillerCorridor@@SA?AVBoundingBox@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HHHH@Z
    MCAPI static class BoundingBox
    findPieceBox(std::vector<std::unique_ptr<class StructurePiece>>&, class Random&, int, int, int, int);

    // NOLINTEND
};
