#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/StablePriorityQueue.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/block/BlockVolume.h"
#include "mc/world/level/levelgen/structure/structurepools/alias/PoolAliasBinding.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BoundingBox;
class ChunkPos;
class Dimension;
class JigsawBlockInfo;
class JigsawStructureRegistry;
class PoolElementStructurePiece;
class Random;
class StructurePiece;
class StructurePoolElement;
class StructureTemplatePool;
struct JigsawJunction;
// clang-format on

class JigsawPlacement {
public:
    // JigsawPlacement inner types define
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
    ::ll::TypedStorage<4, 4, int const> mGlobalContextSize;
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
        )> const>
                                                                                  mFactory;
    ::ll::TypedStorage<8, 8, ::std::vector<::std::unique_ptr<::StructurePiece>>&> mPieceList;
    ::ll::TypedStorage<8, 8, ::Random&>                                           mRandom;
    ::ll::TypedStorage<8, 8, ::JigsawStructureRegistry const&>                    mPools;
    ::ll::TypedStorage<8, 8, ::Dimension&>                                        mDimension;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::unique_ptr<::std::vector<short>>>>
                                                                                           mChunkHeightCache;
    ::ll::TypedStorage<8, 40, ::StablePriorityQueue<::std::function<void()>, ::std::less>> mPlacingQueue;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::vector<::BoundingBox>, ::std::vector<::BoundingBox>>>>
                                                             mContextStack;
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>> mBlockBuffer;
    ::ll::TypedStorage<8, 40, ::BlockVolume>                 mBlockBufferBox;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawPlacement& operator=(JigsawPlacement const&);
    JigsawPlacement(JigsawPlacement const&);
    JigsawPlacement();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JigsawPlacement(
        uint64                                              maxDepth,
        uint64                                              globalContextSize,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieceList,
        ::std::function<::std::unique_ptr<::PoolElementStructurePiece>(
            ::StructurePoolElement const&,
            ::BlockPos const&,
            ::Rotation const&,
            int,
            ::JigsawJunction&,
            ::BoundingBox const&,
            ::BlockPos const&
        )>                                                  factory,
        ::Random&                                           random,
        ::JigsawStructureRegistry const&                    pools,
        ::Dimension&                                        dimension
    );

    MCAPI void _addPiece(
        ::PoolElementStructurePiece const&         sourcePiece,
        ::BlockPos const&                          position,
        ::Rotation const&                          rotation,
        ::BlockPos const&                          refPos,
        uint64                                     contextDepth,
        ::PoolAliasBinding::PoolAliasLookup const& poolAliasLookup
    );

    MCAPI ::BlockPos _findLocalAnchorOffset(
        ::StructurePoolElement const& initialElement,
        ::BlockPos const&             pieceCornerPosition,
        ::Rotation const&             rotation,
        ::std::string_view            startAnchorName
    ) const;

    MCAPI bool _tryPlacingPiece(
        ::PoolElementStructurePiece const&         sourcePiece,
        ::BoundingBox const&                       sourceBB,
        ::JigsawBlockInfo const&                   sourceJigsaw,
        ::BlockPos const&                          attachPos,
        ::StructureTemplatePool const*             targetPool,
        ::BlockPos const&                          refPos,
        uint64                                     contextDepth,
        ::PoolAliasBinding::PoolAliasLookup const& poolAliasLookup
    );

    MCAPI void addPieces(
        ::StructurePoolElement const&              initialElement,
        ::BlockPos const&                          startPosition,
        ::Rotation const&                          rotation,
        ::std::string_view                         startAnchorName,
        ::PoolAliasBinding::PoolAliasLookup const& poolAliasLookup
    );

    MCAPI ~JigsawPlacement();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        uint64                                              maxDepth,
        uint64                                              globalContextSize,
        ::std::vector<::std::unique_ptr<::StructurePiece>>& pieceList,
        ::std::function<::std::unique_ptr<::PoolElementStructurePiece>(
            ::StructurePoolElement const&,
            ::BlockPos const&,
            ::Rotation const&,
            int,
            ::JigsawJunction&,
            ::BoundingBox const&,
            ::BlockPos const&
        )>                                                  factory,
        ::Random&                                           random,
        ::JigsawStructureRegistry const&                    pools,
        ::Dimension&                                        dimension
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
