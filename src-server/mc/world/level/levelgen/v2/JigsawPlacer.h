#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/StablePriorityQueue.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/structurepools/alias/PoolAliasBinding.h"
#include "mc/world/level/levelgen/v2/JigsawSectionData.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
class JigsawStructureRegistry;
namespace JigsawStructureUtils { class MetadataCache; }
namespace SharedTypes::v1_21_80 { class JigsawBlockMetadata; }
namespace br::worldgen { class ChunkAccessor; }
namespace br::worldgen { struct JigsawPieceState; }
namespace br::worldgen { struct JigsawSpace; }
namespace br::worldgen { struct WorldGenRandom; }
// clang-format on

namespace br::worldgen {

struct JigsawPlacer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::br::worldgen::WorldGenRandom&>            mRandom;
    ::ll::TypedStorage<8, 8, ::br::worldgen::ChunkAccessor&>             mChunkAccessor;
    ::ll::TypedStorage<8, 8, ::JigsawStructureRegistry const&>           mPools;
    ::ll::TypedStorage<8, 8, ::PoolAliasBinding::PoolAliasLookup const&> mPoolAliasLookup;
    ::ll::TypedStorage<4, 4, int>                                        mMaxDepth;
    ::ll::TypedStorage<8, 168, ::br::worldgen::JigsawSectionData>        mPieces;
    ::ll::TypedStorage<
        8,
        8,
        int (*)(
            ::JigsawStructureUtils::MetadataCache&,
            ::BlockPos const&,
            ::Rotation,
            ::BoundingBox const&,
            ::std::vector<::SharedTypes::v1_21_80::JigsawBlockMetadata> const&,
            ::std::vector<uint64> const&,
            ::JigsawStructureRegistry const&
        )>
                                                                                                    mExpansionCalc;
    ::ll::TypedStorage<8, 8, void (*)(int, ::BoundingBox&)>                                         mExpansionEval;
    ::ll::TypedStorage<8, 24, ::std::vector<::br::worldgen::JigsawSpace>>                           mPlacementSpaces;
    ::ll::TypedStorage<8, 40, ::StablePriorityQueue<::br::worldgen::JigsawPieceState, ::std::less>> mPlacingQueue;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawPlacer& operator=(JigsawPlacer const&);
    JigsawPlacer(JigsawPlacer const&);
    JigsawPlacer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void tryPlacingChildren(::br::worldgen::JigsawPieceState state);

    MCAPI ~JigsawPlacer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
