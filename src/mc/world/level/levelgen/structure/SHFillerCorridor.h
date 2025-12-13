#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StrongholdPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Random;
class StructurePiece;
// clang-format on

class SHFillerCorridor : public ::StrongholdPiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk85234d;
    // NOLINTEND

public:
    // prevent constructor by default
    SHFillerCorridor& operator=(SHFillerCorridor const&);
    SHFillerCorridor(SHFillerCorridor const&);
    SHFillerCorridor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::StructurePieceType getType() const /*override*/;

    virtual bool postProcess(::BlockSource& region, ::Random&, ::BoundingBox const& chunkBB) /*override*/;

    virtual ~SHFillerCorridor() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BoundingBox findPieceBox(
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::Random&,
        int footX,
        int footY,
        int footZ,
        int direction
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::StructurePieceType $getType() const;

    MCNAPI bool $postProcess(::BlockSource& region, ::Random&, ::BoundingBox const& chunkBB);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
