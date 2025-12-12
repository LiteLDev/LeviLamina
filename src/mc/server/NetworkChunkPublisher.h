#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class ChunkSource;
class ChunkViewSource;
class Level;
class LevelChunk;
class LevelChunkPacket;
class ServerNetworkSystem;
class VarIntDataOutput;
class Vec3;
struct ChunkPositionAndDimension;
struct ClientGenerationRequestHandler;
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace ClientBlobCache::Server { class TransferBuilder; }
// clang-format on

class NetworkChunkPublisher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Level&>                                           mLevel;
    ::ll::TypedStorage<8, 8, ::ServerNetworkSystem*>                             mNetwork;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier>                              mOwner;
    ::ll::TypedStorage<8, 8, ::ClientBlobCache::Server::ActiveTransfersManager*> mClientCache;
    ::ll::TypedStorage<1, 1, ::SubClientId>                                      mSubClientId;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                        mLastChunkUpdatePosition;
    ::ll::TypedStorage<4, 4, uint>                                               mLastChunkUpdateRadius;
    ::ll::TypedStorage<4, 4, uint>                                               mHandleForChunkBuildOrderUpdates;
    ::ll::TypedStorage<4, 4, int>                                                mChunksSentSinceStart;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkViewSource>>               mSource;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ChunkSource>>                  mNetworkChunkSource;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<void(::buffer_span_mut<::std::shared_ptr<::LevelChunk>>, ::buffer_span<uint>)>>
                                             mAddCallback;
    ::ll::TypedStorage<8, 32, ::std::string> mCacheSerializeBuffer;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPositionAndDimension, ::std::weak_ptr<::LevelChunk>>>
                                                                      mQueuedChunks;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastGenerationRequestQueued;
    ::ll::TypedStorage<1, 1, bool>                                    mWaitingForServerChunks;
    ::ll::TypedStorage<1, 1, bool>                                    mInitialSpawnDone;
    ::ll::TypedStorage<
        8,
        40,
        ::std::queue<::ClientGenerationRequestHandler, ::std::deque<::ClientGenerationRequestHandler>>>
        mGenerationRequests;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkChunkPublisher& operator=(NetworkChunkPublisher const&);
    NetworkChunkPublisher(NetworkChunkPublisher const&);
    NetworkChunkPublisher();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkChunkPublisher() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetworkChunkPublisher(::Level& level, ::NetworkIdentifier const& owner, ::SubClientId subClientId);

    MCAPI bool _isWaitingForFullyBuiltChunks() const;

    MCAPI bool _sendQueuedChunk(
        ::ChunkPositionAndDimension const&          queuedChunk,
        ::ClientBlobCache::Server::TransferBuilder* cachedTransfer
    );

    MCAPI void _serializeAndCache(
        ::LevelChunkPacket&                          packet,
        ::ClientBlobCache::Server::TransferBuilder&  transfer,
        ::std::function<void(::VarIntDataOutput&)>&& serialize
    );

    MCAPI void clearRegion();

    MCAPI_C void handleGenerationRequests();

    MCAPI void moveRegion(::BlockPos const& position, uint blockRadius, ::Vec3 const& direction, float minDistance);

    MCAPI void prepareRegion(::ChunkSource& mainChunkSource, ::ChunkPos const& center);

    MCAPI_C void queueChunkGenerationRequests(
        ::ChunkPos                       moveCenter,
        int                              chunkRadius,
        ::Vec3 const&                    direction,
        ::std::vector<::ChunkPos> const& serverChunks
    );

    MCAPI void sendQueuedChunks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Level& level, ::NetworkIdentifier const& owner, ::SubClientId subClientId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
