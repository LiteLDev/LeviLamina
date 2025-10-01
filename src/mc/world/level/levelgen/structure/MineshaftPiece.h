#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class BoundingBox;
class Random;
struct MineshaftData;
// clang-format on

class MineshaftPiece : public ::StructurePiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1ccc77;
    // NOLINTEND

public:
    // prevent constructor by default
    MineshaftPiece& operator=(MineshaftPiece const&);
    MineshaftPiece(MineshaftPiece const&);
    MineshaftPiece();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual bool isInInvalidLocation(::BlockSource& region, ::BoundingBox const& chunkBB) /*override*/;

    // vIndex: 10
    virtual bool canBeReplaced(
        ::BlockSource&       region,
        int const            x,
        int const            y,
        int const            z,
        ::BoundingBox const& chunkBB
    ) /*override*/;

    // vIndex: 0
    virtual ~MineshaftPiece() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::StructurePiece> createRandomShaftPiece(
        ::MineshaftData&                                    metadata,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 genDepth
    );

    MCAPI ::StructurePiece* generateAndAddPiece(
        ::StructurePiece&                                   startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random,
        int                                                 footX,
        int                                                 footY,
        int                                                 footZ,
        int                                                 direction,
        int                                                 depth
    );

    MCAPI void setPlanksBlock(::BlockSource& region, ::Block const& planksBlock, int x, int y, int z);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isInInvalidLocation(::BlockSource& region, ::BoundingBox const& chunkBB);

    MCAPI bool
    $canBeReplaced(::BlockSource& region, int const x, int const y, int const z, ::BoundingBox const& chunkBB);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
