#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/multiplayer/ISubChunkManagerConnector.h"
#include "mc/client/network/SubChunkInsertManager.h"
#include "mc/deps/core/math/Math.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/chunk/SubChunkRequestManager.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class Dimension;
class LevelChunk;
class SubChunkPos;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class SubChunkManager : public ::ISubChunkManagerConnector {
public:
    // SubChunkManager inner types declare
    // clang-format off
    struct SubChunkChange;
    // clang-format on

    // SubChunkManager inner types define
    struct SubChunkChange {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnka5f8a3;
        ::ll::UntypedStorage<8, 16> mUnk694c5a;
        ::ll::UntypedStorage<8, 64> mUnkf23ba7;
        // NOLINTEND

    public:
        // prevent constructor by default
        SubChunkChange& operator=(SubChunkChange const&);
        SubChunkChange(SubChunkChange const&);
        SubChunkChange();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::pair<::SubChunkPos, ::DimensionType>,
            ::std::vector<::SubChunkManager::SubChunkChange>,
            ::mce::Math::PairHash,
            ::std::equal_to<::std::pair<::SubChunkPos, ::DimensionType>>>>
                                                         mPendingSubChunkChanges;
    ::ll::TypedStorage<8, 448, ::SubChunkInsertManager>  mSubChunkInsertManager;
    ::ll::TypedStorage<8, 312, ::SubChunkRequestManager> mSubChunkRequestManager;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::ChunkSource&, ::LevelChunk&, short, bool), ::Bedrock::PubSub::ThreadModel::MultiThreaded>>
                                                               mSubChunkLoaded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChangeDimensionSubscription;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&, short, bool)>&
    getOnSubChunkLoadedConnector() /*override*/;

    // vIndex: 0
    virtual ~SubChunkManager() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
