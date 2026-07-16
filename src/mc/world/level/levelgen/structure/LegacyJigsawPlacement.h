#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/ChunkPos.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
class Dimension;
class JigsawStructureRegistry;
class PoolElementStructurePiece;
class Random;
class StructurePiece;
class StructurePoolElement;
struct JigsawJunction;
// clang-format on

class LegacyJigsawPlacement {
public:
    // LegacyJigsawPlacement inner types define
    using PieceFactory = ::std::function<::std::unique_ptr<::PoolElementStructurePiece>(
        ::StructurePoolElement const&,
        ::BlockPos const&,
        ::Rotation const&,
        int,
        ::JigsawJunction&,
        ::BoundingBox const&,
        ::BlockPos const&
    )>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const> mMaxDepth;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::std::unique_ptr<::PoolElementStructurePiece>(
            ::StructurePoolElement const&,
            ::BlockPos const&,
            ::Rotation const&,
            int,
            ::JigsawJunction&,
            ::BoundingBox const&,
            ::BlockPos const&
        )>>
        mFactory;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::unique_ptr<::std::vector<short>>>>
        mChunkHeightCache;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyJigsawPlacement();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyJigsawPlacement(
        int maxDepth,
        ::std::function<::std::unique_ptr<::PoolElementStructurePiece>(
            ::StructurePoolElement const&,
            ::BlockPos const&,
            ::Rotation const&,
            int,
            ::JigsawJunction&,
            ::BoundingBox const&,
            ::BlockPos const&
        )>  factory
    );

    MCAPI void addPieces(
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieces,
        ::StructurePoolElement const&                       initialElement,
        ::Random&                                           random,
        ::BlockPos const&                                   position,
        ::Rotation const&                                   rotation,
        ::JigsawStructureRegistry const&                    pools,
        ::Dimension&                                        dimension
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        int maxDepth,
        ::std::function<::std::unique_ptr<::PoolElementStructurePiece>(
            ::StructurePoolElement const&,
            ::BlockPos const&,
            ::Rotation const&,
            int,
            ::JigsawJunction&,
            ::BoundingBox const&,
            ::BlockPos const&
        )>  factory
    );
    // NOLINTEND
};
