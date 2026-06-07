#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/CommandDispatcherArgs.h"
#include "mc/client/gui/geometry_atlas/IGeometryAtlas.h"
#include "mc/client/gui/geometry_atlas/ItemData.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/external/render_dragon/atlas/AtlasTileDescription.h"
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"
#include "mc/platform/brstd/flat_set.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Bedrock::Threading { class Mutex; }
namespace GeometryAtlas { class IItemTile; }
namespace GeometryAtlas { class IRenderContext; }
namespace GeometryAtlas { struct AllocateAtlasPayload; }
namespace GeometryAtlas { struct AllocateBackendPayload; }
namespace GeometryAtlas { struct RenderableUpdateCommand; }
namespace GeometryAtlas { struct TileDefinition; }
namespace GeometryAtlas { struct UIItemPayload; }
namespace dragon::atlas { class IAtlasHandle; }
// clang-format on

namespace GeometryAtlas {

class AtlasImpl : public ::GeometryAtlas::IGeometryAtlas {
public:
    // AtlasImpl inner types declare
    // clang-format off
    struct TileEntry;
    struct Data;
    struct CommandArgs;
    struct mDispatcher;
    // clang-format on

    // AtlasImpl inner types define
    struct TileEntry {
    public:
        // TileEntry inner types define
        using Variant = ::std::variant<::GeometryAtlas::ItemData>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 56, ::std::variant<::GeometryAtlas::ItemData>> mData;
        ::ll::TypedStorage<8, 24, ::dragon::atlas::AtlasTileHandle>          mBackendID;
        ::ll::TypedStorage<4, 8, ::dragon::atlas::AtlasTileDescription>      mTileDescription;
        ::ll::TypedStorage<1, 1, bool>                                       mIsAnimated;
        // NOLINTEND
    };

    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::dragon::atlas::IAtlasHandle>>                  mAtlas;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::GeometryAtlas::AtlasImpl::TileEntry>> mTiles;
        ::ll::TypedStorage<
            8,
            120,
            ::Bedrock::Threading::
                BasicLockbox<::std::deque<::GeometryAtlas::RenderableUpdateCommand>, ::Bedrock::Threading::Mutex>>
                                                                                                   mCommands;
        ::ll::TypedStorage<8, 24, ::std::vector<::GeometryAtlas::RenderableUpdateCommand>>         mFutureCommands;
        ::ll::TypedStorage<8, 24, ::brstd::flat_set<uint, ::std::less<uint>, ::std::vector<uint>>> mDirtyTiles;
        ::ll::TypedStorage<8, 24, ::std::vector<uint>>                                             mTileNotifications;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Data();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
    createItem(::GeometryAtlas::TileDefinition const& definition) /*override*/;

    virtual void trySubmitUpdates(::GeometryAtlas::IRenderContext& context) /*override*/;

    virtual ::Bedrock::PubSub::Connector<void(::std::vector<uint> const&)>& getTileChangeConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AtlasImpl();

    MCAPI void _processAllCommands(::GeometryAtlas::IRenderContext& context);

    MCAPI void _processCommand(::GeometryAtlas::AtlasImpl::CommandArgs& args, ::GeometryAtlas::AllocateAtlasPayload);

    MCAPI void _processCommand(::GeometryAtlas::AtlasImpl::CommandArgs& args, ::GeometryAtlas::AllocateBackendPayload);

    MCAPI void _processCommand(::GeometryAtlas::AtlasImpl::CommandArgs& args, ::GeometryAtlas::UIItemPayload&& payload);

    MCAPI void _submitTileRenders(::GeometryAtlas::IRenderContext& context);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::GeometryAtlas::IItemTile> $createItem(::GeometryAtlas::TileDefinition const& definition);

    MCAPI void $trySubmitUpdates(::GeometryAtlas::IRenderContext& context);

    MCFOLD ::Bedrock::PubSub::Connector<void(::std::vector<uint> const&)>& $getTileChangeConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace GeometryAtlas
