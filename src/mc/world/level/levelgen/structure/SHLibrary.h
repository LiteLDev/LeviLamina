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
    // vIndex: 0
    virtual ~SHLibrary() = default;

    // vIndex: 2
    virtual ::StructurePieceType getType() const;

    // vIndex: 4
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

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
