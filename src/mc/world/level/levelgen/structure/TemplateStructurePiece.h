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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?moveBoundingBox@TemplateStructurePiece@@UEAAXHHH@Z
    virtual void moveBoundingBox(int, int, int);

    // vIndex: 4, symbol: ?postProcess@TemplateStructurePiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // vIndex: 13, symbol:
    // ?_handleDataMarker@EndCityPiece@EndCityPieces@@MEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@AEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual void
    _handleDataMarker(std::string const&, class BlockPos const&, class BlockSource&, class Random&, class BoundingBox const&) = 0;

    // symbol: ??1TemplateStructurePiece@@UEAA@XZ
    MCVAPI ~TemplateStructurePiece();

    // symbol: ??0TemplateStructurePiece@@QEAA@H@Z
    MCAPI explicit TemplateStructurePiece(int);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_setup@TemplateStructurePiece@@IEAAXAEAVLegacyStructureTemplate@@AEBVLegacyStructureSettings@@AEBVBlockPos@@@Z
    MCAPI void _setup(class LegacyStructureTemplate&, class LegacyStructureSettings const&, class BlockPos const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_setBoundingBoxFromTemplate@TemplateStructurePiece@@AEAAXXZ
    MCAPI void _setBoundingBoxFromTemplate();

    // NOLINTEND
};
