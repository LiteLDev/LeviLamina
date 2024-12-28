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
    // vIndex: 2
    virtual ::StructurePieceType getType() const /*override*/;

    // vIndex: 3
    virtual void addChildren(
        ::StructurePiece&                                   startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random
    ) /*override*/;

    // vIndex: 4
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    // vIndex: 5
    virtual void postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    // vIndex: 0
    virtual ~MineshaftCorridor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _fillPillarDownOrChainUp(::BlockSource& region, int x, int y, int z, ::BoundingBox const& chunkBB);

    MCAPI void _placeSupport(
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::StructurePieceType $getType() const;

    MCAPI void $addChildren(
        ::StructurePiece&                                   startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random
    );

    MCAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCAPI void $postProcessMobsAt(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
