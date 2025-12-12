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

class MineshaftCrossing : public ::MineshaftPiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkde7251;
    ::ll::UntypedStorage<1, 1> mUnke7588a;
    // NOLINTEND

public:
    // prevent constructor by default
    MineshaftCrossing& operator=(MineshaftCrossing const&);
    MineshaftCrossing(MineshaftCrossing const&);
    MineshaftCrossing();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::StructurePieceType getType() const /*override*/;

    virtual void addChildren(
        ::StructurePiece&                                   startPiece,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&                                           random
    ) /*override*/;

    virtual bool postProcess(::BlockSource& region, ::Random&, ::BoundingBox const& chunkBB) /*override*/;

    virtual ~MineshaftCrossing() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _placeSupportPillar(::BlockSource& region, ::BoundingBox const& chunkBB, int x, int y0, int z, int y1);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BoundingBox findCrossing(
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

    MCNAPI bool $postProcess(::BlockSource& region, ::Random&, ::BoundingBox const& chunkBB);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
