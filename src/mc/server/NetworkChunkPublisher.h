#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/server/ChunkPositionAndDimension.h"
#include "mc/server/ClientGenerationRequestHandler.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class ChunkSource;
class ChunkViewSource;
class ILevel;
class LevelChunk;
class ServerNetworkSystem;
class Vec3;
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
// clang-format on

class NetworkChunkPublisher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevel&>                                          mLevel;
    ::ll::TypedStorage<8, 8, ::ServerNetworkSystem*>                             mNetwork;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier>                              mOwner;
    ::ll::TypedStorage<8, 8, ::ClientBlobCache::Server::ActiveTransfersManager*> mClientCache;
    ::ll::TypedStorage<1, 1, ::SubClientId>                                      mSubClientId;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                        mLastChunkUpdatePosition;
    ::ll::TypedStorage<4, 4, uint>                                               mLastChunkUpdateRadius;
    ::ll::TypedStorage<4, 4, uint>                                               mHandleForChunkBuildOrderUpdates;
    ::ll::TypedStorage<4, 4, int>                                                mChunksSentSinceStart;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ChunkViewSource>>              mSource;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ChunkSource>>                  mNetworkChunkSource;
    ::ll::TypedStorage<8, 64, ::std::function<void(::gsl::span<::std::shared_ptr<::LevelChunk>>)>> mAddCallback;
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
    MCAPI NetworkChunkPublisher(::ILevel& level, ::NetworkIdentifier const& owner, ::SubClientId subClientId);

    MCAPI void clearRegion();

    MCAPI void destroyRegion();

#ifdef LL_PLAT_C
    MCAPI void handleGenerationRequests();
#endif

#ifdef LL_PLAT_S
    MCAPI void moveRegion(::BlockPos const& position, uint blockRadius, ::Vec3 const& direction, float minDistance);
#endif

    MCAPI void prepareRegion(::ChunkSource& mainChunkSource, ::ChunkPos const& center);

#ifdef LL_PLAT_C
    MCAPI void queueChunkGenerationRequests(
        ::ChunkPos                       moveCenter,
        int                              chunkRadius,
        ::Vec3 const&                    direction,
        ::std::vector<::ChunkPos> const& serverChunks
    );
#endif

    MCAPI void sendQueuedChunks();

#ifdef LL_PLAT_C
    MCAPI void setClientsNetworkChunkSource(::std::shared_ptr<::ChunkSource> networkChunkSource);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ILevel& level, ::NetworkIdentifier const& owner, ::SubClientId subClientId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
