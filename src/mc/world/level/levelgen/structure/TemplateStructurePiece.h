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
    // vIndex: 0
    virtual ~TemplateStructurePiece();

    // vIndex: 1
    virtual void moveBoundingBox(int dx, int dy, int dz);

    // vIndex: 4
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 13
    virtual void _handleDataMarker(
        std::string const&       markerId,
        class BlockPos const&    position,
        class BlockSource&       region,
        class Random&            random,
        class BoundingBox const& chunkBB
    ) = 0;

    MCAPI explicit TemplateStructurePiece(int depth);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _setup(
        class LegacyStructureTemplate&       structTemplate,
        class LegacyStructureSettings const& settings,
        class BlockPos const&                templatePosition
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _setBoundingBoxFromTemplate();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(int depth);

    MCAPI void dtor$();

    MCAPI void moveBoundingBox$(int dx, int dy, int dz);

    MCAPI bool postProcess$(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
