#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/multiplayer/ISubChunkManagerConnector.h"
#include "mc/client/network/SubChunkInsertManager.h"
#include "mc/deps/core/math/PairHash.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/chunk/SubChunkRequestManager.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class LevelChunk;
class SubChunkPos;
struct DimensionType;
struct SubChunkChange;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class SubChunkManager : public ::ISubChunkManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::pair<::SubChunkPos, ::DimensionType>,
            ::std::vector<::SubChunkChange>,
            ::mce::Math::PairHash,
            ::std::equal_to<::std::pair<::SubChunkPos, ::DimensionType>>>>
                                                         mPendingSubChunkChanges;
    ::ll::TypedStorage<8, 448, ::SubChunkInsertManager>  mSubChunkInsertManager;
    ::ll::TypedStorage<8, 240, ::SubChunkRequestManager> mSubChunkRequestManager;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::ChunkSource&, ::LevelChunk&, short, bool),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
                                                               mSubChunkLoaded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChangeDimensionSubscription;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&, short, bool)>&
    getOnSubChunkLoadedConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void pruneSubChunkChanges(::DimensionType const playerDimension);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&, short, bool)>&
    $getOnSubChunkLoadedConnector();
    // NOLINTEND
};
