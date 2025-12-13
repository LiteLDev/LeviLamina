#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MineshaftPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Random;
class StructurePiece;
// clang-format on

class MineshaftCorridor : public ::MineshaftPiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk191025;
    ::ll::UntypedStorage<1, 1> mUnk3560e1;
    ::ll::UntypedStorage<1, 1> mUnkce0fd5;
    ::ll::UntypedStorage<4, 4> mUnkd87313;
    // NOLINTEND

public:
    // prevent constructor by default
    MineshaftCorridor& operator=(MineshaftCorridor const&);
    MineshaftCorridor(MineshaftCorridor const&);
    MineshaftCorridor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::StructurePieceType getType() const /*override*/;

    virtual void addChildren(
        ::StructurePiece&                                   startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random
    ) /*override*/;

    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    virtual void postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    virtual ~MineshaftCorridor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _fillPillarDownOrChainUp(::BlockSource& region, int x, int y, int z, ::BoundingBox const& chunkBB);

    MCNAPI void
    _placeCobWeb(::BlockSource& region, ::BoundingBox const& chunkBB, ::Random& random, float p, int x0, int y1, int z);

    MCNAPI void _placeSupport(
        ::BlockSource&       region,
        ::BoundingBox const& chunkBB,
        int                  x0,
        int                  y0,
        int                  z,
        int                  y1,
        int                  x1,
        ::Random&            random
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BoundingBox findCorridorSize(
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::StructurePieceType $getType() const;

    MCNAPI void $addChildren(
        ::StructurePiece&                                   startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random
    );

    MCNAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCNAPI void $postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
