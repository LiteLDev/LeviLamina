#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/UIThumbnailAtlasRenderer.h"
#include "mc/client/gui/oreui/interface/IResourceHandler.h"
#include "mc/client/gui/oreui/interface/ResourceHandlerStatus.h"
#include "mc/client/gui/oreui/resources/AtlasIndex.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace Gameface { class ResourceResponse; }
namespace Gameface { class ResourceStreamResponse; }
namespace Gameface { class TemporaryTextureHolder; }
namespace Gameface { class UserImageData; }
namespace Gameface { struct ResourceRequest; }
namespace OreUI { class UIBlockThumbnailAtlasManager; }
// clang-format on

namespace OreUI {

class BlockResourceHandler : public ::Gameface::IResourceHandler {
public:
    // BlockResourceHandler inner types define
    using ReqResponsePair = ::std::pair<::Gameface::ResourceRequest, ::Gameface::ResourceResponse>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 616, ::MPMCQueue<::std::pair<::Gameface::ResourceRequest, ::Gameface::ResourceResponse>>>
                                                                                mBlockRequestsQueue;
    ::ll::TypedStorage<1, 1, bool>                                              mBlockRequestsQueuePending;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&>               mTextureHolder;
    ::ll::TypedStorage<8, 16, ::OreUI::AtlasIndex::ItemEntry>                   mAir;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                                mAtlasTexturePtr;
    ::ll::TypedStorage<8, 16, ::WeakRef<::OreUI::UIBlockThumbnailAtlasManager>> mAtlasManager;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                      mBlockRequestActive;
    ::ll::TypedStorage<8, 8, uint64>                                            mImageId;
    ::ll::TypedStorage<8, 8, uint64>                                            mBatchingHint;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockResourceHandler& operator=(BlockResourceHandler const&);
    BlockResourceHandler(BlockResourceHandler const&);
    BlockResourceHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockResourceHandler() /*override*/ = default;

    virtual void update() /*override*/;

    virtual ::Gameface::ResourceHandlerStatus
    onResourceRequest(::Gameface::ResourceRequest const& request, ::Gameface::ResourceResponse& response) /*override*/;

    virtual ::Gameface::ResourceHandlerStatus
    onResourceStreamRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceStreamResponse&) /*override*/;

    virtual void onViewCreate(::IClientInstance& primaryClient) /*override*/;

    virtual void onAppPreSuspend() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockResourceHandler(::Gameface::TemporaryTextureHolder& temporaryTextureHolder);

    MCAPI void _buildUserImageData(
        ::Gameface::UserImageData&                   userImageData,
        ::UIThumbnailAtlasRenderer::AtlasInfo const& atlasInfo,
        ::OreUI::AtlasIndex::ItemEntry&              entry
    );

    MCAPI ::Gameface::UserImageData _generateUserImage(::Gameface::ResourceRequest const& request);

    MCAPI void
    _handleImageRequestAsync(::Gameface::ResourceRequest const& request, ::Gameface::ResourceResponse& response);

    MCAPI void _rejectResourceRequests();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Gameface::TemporaryTextureHolder& temporaryTextureHolder);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update();

    MCAPI ::Gameface::ResourceHandlerStatus
    $onResourceRequest(::Gameface::ResourceRequest const& request, ::Gameface::ResourceResponse& response);

    MCFOLD ::Gameface::ResourceHandlerStatus
    $onResourceStreamRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceStreamResponse&);

    MCAPI void $onViewCreate(::IClientInstance& primaryClient);

    MCAPI void $onAppPreSuspend();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
