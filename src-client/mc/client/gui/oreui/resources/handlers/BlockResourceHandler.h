#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IResourceHandler.h"
#include "mc/client/gui/oreui/resources/AtlasIndex.h"
#include "mc/deps/cohtml/IAsyncResourceResponse.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace OreUI { class ResourceResponse; }
namespace OreUI { class ResourceStreamResponse; }
namespace OreUI { class TemporaryTextureHolder; }
namespace OreUI { class UIBlockThumbnailAtlasManager; }
namespace OreUI { struct ResourceRequest; }
// clang-format on

namespace OreUI {

class BlockResourceHandler : public ::OreUI::IResourceHandler {
public:
    // BlockResourceHandler inner types define
    using ReqResponsePair = ::std::pair<::OreUI::ResourceRequest, ::OreUI::ResourceResponse>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 616, ::MPMCQueue<::std::pair<::OreUI::ResourceRequest, ::OreUI::ResourceResponse>>>
                                                                                mBlockRequestsQueue;
    ::ll::TypedStorage<1, 1, bool>                                              mBlockRequestsQueuePending;
    ::ll::TypedStorage<8, 8, ::OreUI::TemporaryTextureHolder&>                  mTextureHolder;
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

    virtual ::OreUI::IResourceHandler::Status
    onResourceRequest(::OreUI::ResourceRequest const& request, ::OreUI::ResourceResponse& response) /*override*/;

    virtual ::OreUI::IResourceHandler::Status
    onResourceStreamRequest(::OreUI::ResourceRequest const&, ::OreUI::ResourceStreamResponse&) /*override*/;

    virtual void onViewCreate(::IClientInstance& primaryClient) /*override*/;

    virtual void onAppPreSuspend() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::cohtml::IAsyncResourceResponse::UserImageData _generateUserImage(::OreUI::ResourceRequest const& request);

    MCAPI void _handleImageRequestAsync(::OreUI::ResourceRequest const& request, ::OreUI::ResourceResponse& response);

    MCAPI void _rejectResourceRequests();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update();

    MCAPI ::OreUI::IResourceHandler::Status
    $onResourceRequest(::OreUI::ResourceRequest const& request, ::OreUI::ResourceResponse& response);

    MCFOLD ::OreUI::IResourceHandler::Status
    $onResourceStreamRequest(::OreUI::ResourceRequest const&, ::OreUI::ResourceStreamResponse&);

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
