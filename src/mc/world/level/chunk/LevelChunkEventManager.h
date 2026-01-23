#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/level/chunk/ILevelChunkEventManagerConnector.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class ILevelChunkEventManagerProxy;
class LevelChunk;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class LevelChunkEventManager : public ::ILevelChunkEventManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::ChunkSource&, ::LevelChunk&, int), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnChunkLoadedPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::ChunkSource&, ::LevelChunk&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnChunkReloadedPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::LevelChunk&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnChunkDiscardedPublisher;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ILevelChunkEventManagerProxy>> const>
        mLevelChunkEventManagerProxy;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelChunkEventManager() /*override*/ = default;

    virtual ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&, int)>&
    getOnChunkLoadedConnector() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&)>&
    getOnChunkReloadedConnector() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void(::LevelChunk&)>& getOnChunkDiscardedConnector() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&, int)>& $getOnChunkLoadedConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&)>& $getOnChunkReloadedConnector();

    MCAPI ::Bedrock::PubSub::Connector<void(::LevelChunk&)>& $getOnChunkDiscardedConnector();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
