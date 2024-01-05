#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class TemplateStructurePiece : public ::StructurePiece {
public:
    // prevent constructor by default
    TemplateStructurePiece& operator=(TemplateStructurePiece const&);
    TemplateStructurePiece(TemplateStructurePiece const&);
    TemplateStructurePiece();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TemplateStructurePiece@@UEAA@XZ
    virtual ~TemplateStructurePiece();

    // vIndex: 1, symbol: ?moveBoundingBox@TemplateStructurePiece@@UEAAXHHH@Z
    virtual void moveBoundingBox(int dx, int dy, int dz);

    // vIndex: 4, symbol: ?postProcess@TemplateStructurePiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 13, symbol:
    // ?_handleDataMarker@EndCityPiece@EndCityPieces@@MEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@AEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual void _handleDataMarker(
        std::string const&       markerId,
        class BlockPos const&    position,
        class BlockSource&       region,
        class Random&            random,
        class BoundingBox const& chunkBB
    ) = 0;

    // symbol: ??0TemplateStructurePiece@@QEAA@H@Z
    MCAPI explicit TemplateStructurePiece(int depth);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_setup@TemplateStructurePiece@@IEAAXAEAVLegacyStructureTemplate@@AEBVLegacyStructureSettings@@AEBVBlockPos@@@Z
    MCAPI void _setup(
        class LegacyStructureTemplate&       structTemplate,
        class LegacyStructureSettings const& settings,
        class BlockPos const&                templatePosition
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_setBoundingBoxFromTemplate@TemplateStructurePiece@@AEAAXXZ
    MCAPI void _setBoundingBoxFromTemplate();

    // NOLINTEND
};
