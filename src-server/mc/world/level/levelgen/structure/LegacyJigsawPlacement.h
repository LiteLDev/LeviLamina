#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockVolume;
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

class LegacyJigsawPlacement {
public:
    // LegacyJigsawPlacement inner types define
    using PieceFactory = ::std::function<::std::unique_ptr<::PoolElementStructurePiece>(::StructurePoolElement const&, ::BlockPos const&, ::Rotation const&, int, ::JigsawJunction&, ::BoundingBox const&, ::BlockPos const&)>;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const> mMaxDepth;
    ::ll::TypedStorage<8, 64, ::std::function<::std::unique_ptr<::PoolElementStructurePiece>(::StructurePoolElement const&, ::BlockPos const&, ::Rotation const&, int, ::JigsawJunction&, ::BoundingBox const&, ::BlockPos const&)>> mFactory;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::unique_ptr<::std::vector<short>>>> mChunkHeightCache;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addPiece(::std::vector<::std::unique_ptr<::StructurePiece>>& pieces, ::PoolElementStructurePiece const& sourcePiece, ::Random& random, ::BlockPos const& position, ::Rotation const& rotation, ::JigsawStructureRegistry const& pools, ::Dimension& dimension, ::BlockVolume& box, ::BlockPos const& refPos);

    MCAPI bool _tryPlacingPiece(::std::vector<::std::unique_ptr<::StructurePiece>>& pieces, ::PoolElementStructurePiece const& sourcePiece, ::Random& random, ::JigsawBlockInfo const& sourceJigsaw, ::BoundingBox const& sourceBB, ::std::vector<::BoundingBox>& sourceInternalBBs, ::BlockPos const& attachPos, ::StructureTemplatePool const* targetPool, ::JigsawStructureRegistry const& pools, ::Dimension& dimension, ::BlockVolume& box, ::BlockPos const& refPos);

    MCAPI void addPieces(::std::vector<::std::unique_ptr<::StructurePiece>>& pieces, ::StructurePoolElement const& initialElement, ::Random& random, ::BlockPos const& position, ::Rotation const& rotation, ::JigsawStructureRegistry const& pools, ::Dimension& dimension);

    MCAPI ~LegacyJigsawPlacement();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
