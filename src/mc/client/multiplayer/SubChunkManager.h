#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/multiplayer/ISubChunkManagerConnector.h"
#include "mc/client/network/SubChunkInsertManager.h"
#include "mc/deps/core/math/PairHash.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/chunk/SubChunkRequestManager.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ChunkSource;
class Dimension;
class IPlayerDimensionTransferConnector;
class LevelChunk;
class Player;
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

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ~SubChunkChange();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
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
    // prevent constructor by default
    SubChunkManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&, short, bool)>&
    getOnSubChunkLoadedConnector() /*override*/;

    virtual ~SubChunkManager() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit SubChunkManager(::std::function<::Player*()> getPrimaryLocalPlayer);

    MCNAPI_C void applySubChunkChanges(::BlockSource& source, ::LevelChunk& levelChunk, short absoluteSubChunkIndex);

    MCNAPI_C void onSubChunkLoaded(
        ::DimensionType playerDimension,
        ::ChunkSource&  source,
        ::LevelChunk&   lc,
        short           absoluteSubChunkIndex,
        bool            subChunkVisibilityChanged
    );

    MCNAPI_C void pruneSubChunkChanges(::DimensionType playerDimension);

    MCNAPI_C void
    registerWithPlayerDimensionTransferConnector(::IPlayerDimensionTransferConnector& playerDimensionTransferConnector);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::std::chrono::nanoseconds const& SUBCHUNK_CHANGE_TIMEOUT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::function<::Player*()> getPrimaryLocalPlayer);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&, short, bool)>&
    $getOnSubChunkLoadedConnector();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
