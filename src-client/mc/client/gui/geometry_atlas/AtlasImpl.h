#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/CommandDispatcherArgs.h"
#include "mc/client/gui/geometry_atlas/IGeometryAtlas.h"
#include "mc/client/gui/geometry_atlas/ItemData.h"
#include "mc/client/gui/geometry_atlas/PaperDollData.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/external/render_dragon/atlas/AtlasTileDescription.h"
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Bedrock::Threading { class Mutex; }
namespace GeometryAtlas { class IItemTile; }
namespace GeometryAtlas { class IPaperDollTile; }
namespace GeometryAtlas { class IRenderContext; }
namespace GeometryAtlas { struct RenderableUpdateCommand; }
namespace GeometryAtlas { struct TileDefinition; }
namespace dragon::atlas { class IAtlasHandle; }
// clang-format on

namespace GeometryAtlas {

class AtlasImpl : public ::GeometryAtlas::IGeometryAtlas {
public:
    // AtlasImpl inner types declare
    // clang-format off
    struct TileEntry;
    struct Data;
    struct TileDirtyUpdate;
    struct CommandArgs;
    struct mDispatcher;
    // clang-format on

    // AtlasImpl inner types define
    enum class TileDirtyStatus : uchar {
        NewUserData           = 0,
        SubmittedForRendering = 1,
        UpToDate              = 2,
    };

    struct TileEntry {
    public:
        // TileEntry inner types define
        enum class Status : uchar {
            Uninitialized        = 0,
            Initialized          = 1,
            FailedInitialization = 2,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::std::variant<::GeometryAtlas::ItemData, ::GeometryAtlas::PaperDollData>> mData;
        ::ll::TypedStorage<8, 32, ::dragon::atlas::AtlasTileHandle>                                          mBackendID;
        ::ll::TypedStorage<4, 8, ::dragon::atlas::AtlasTileDescription>         mTileDescription;
        ::ll::TypedStorage<1, 1, bool>                                          mIsAnimated;
        ::ll::TypedStorage<1, 1, ::GeometryAtlas::AtlasImpl::TileEntry::Status> mStatus;
        // NOLINTEND
    };

    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::dragon::atlas::IAtlasHandle>>>   mAtlases;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::GeometryAtlas::AtlasImpl::TileEntry>> mTiles;
        ::ll::TypedStorage<
            8,
            120,
            ::Bedrock::Threading::
                BasicLockbox<::std::deque<::GeometryAtlas::RenderableUpdateCommand>, ::Bedrock::Threading::Mutex>>
                                                                                           mCommands;
        ::ll::TypedStorage<8, 24, ::std::vector<::GeometryAtlas::RenderableUpdateCommand>> mFutureCommands;
        ::ll::TypedStorage<
            8,
            48,
            ::brstd::flat_map<
                uint,
                ::GeometryAtlas::AtlasImpl::TileDirtyStatus,
                ::std::less<uint>,
                ::std::vector<uint>,
                ::std::vector<::GeometryAtlas::AtlasImpl::TileDirtyStatus>>>
                                                       mDirtyTiles;
        ::ll::TypedStorage<8, 24, ::std::vector<uint>> mTileNotifications;
        // NOLINTEND
    };

    struct TileDirtyUpdate {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::GeometryAtlas::AtlasImpl::TileDirtyStatus> mNewStatus;
        ::ll::TypedStorage<1, 1, bool>                                        mSubmitTileRender;
        ::ll::TypedStorage<1, 1, bool>                                        mNotifyTileUpdated;
        // NOLINTEND
    };

    struct CommandArgs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::GeometryAtlas::IRenderContext&> mContext;
        ::ll::TypedStorage<
            8,
            8,
            ::std::_List_iterator<::std::_List_val<
                ::std::_List_simple_types<::std::pair<uint const, ::GeometryAtlas::AtlasImpl::TileEntry>>>>>
                                                                         mIt;
        ::ll::TypedStorage<8, 8, ::GeometryAtlas::AtlasImpl::TileEntry*> mEntry;
        ::ll::TypedStorage<4, 4, uint>                                   mTileID;
        // NOLINTEND

    public:
        // prevent constructor by default
        CommandArgs& operator=(CommandArgs const&);
        CommandArgs(CommandArgs const&);
        CommandArgs();
    };

    struct mDispatcher {};

    using CommandBuffer = ::std::deque<::GeometryAtlas::RenderableUpdateCommand>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GeometryAtlas::AtlasImpl::Data>>                          mData;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GeometryAtlas::CommandDispatcherArgs::DispatchFunctions>> mDispatcher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::std::vector<uint> const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mTileChangePublisher;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::GeometryAtlas::IItemTile>
    createItem(::GeometryAtlas::TileDefinition const&) /*override*/;

    virtual ::std::shared_ptr<::GeometryAtlas::IPaperDollTile>
    createDoll(::GeometryAtlas::TileDefinition const&) /*override*/;

    virtual void trySubmitUpdates(::GeometryAtlas::IRenderContext&) /*override*/;

    virtual bool hasAnyUpdates() const /*override*/;

    virtual ::Bedrock::PubSub::Connector<void(::std::vector<uint> const&)>& getTileChangeConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AtlasImpl();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace GeometryAtlas
