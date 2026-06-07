#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IResourceHandler.h"
#include "mc/client/gui/oreui/interface/ResourceHandlerStatus.h"
#include "mc/client/gui/oreui/resources/ResourceRequest.h"
#include "mc/client/gui/oreui/resources/ResourceResponse.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ResourcePackManager;
namespace Editor { class ThumbnailFileBytes; }
namespace Gameface { class ResourceStreamResponse; }
namespace Gameface { class TemporaryTextureHolder; }
// clang-format on

namespace OreUI {

class StructureResourceHandler : public ::Gameface::IResourceHandler {
public:
    // StructureResourceHandler inner types declare
    // clang-format off
    struct ThumbnailRequest;
    // clang-format on

    // StructureResourceHandler inner types define
    enum class FetchRequestState : int {
        Idle                  = 0,
        ThumbnailFetchPending = 1,
        ThumbnailReceived     = 2,
        ThumbnailEmpty        = 3,
        UserImageProcessed    = 4,
    };

    struct ThumbnailRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                                                           mId;
        ::ll::TypedStorage<8, 136, ::std::pair<::Gameface::ResourceRequest, ::Gameface::ResourceResponse>> mReqResponse;
        ::ll::TypedStorage<8, 16, ::WeakRef<::Editor::ThumbnailFileBytes>>                                 mThumbnail;
        ::ll::TypedStorage<4, 4, ::OreUI::StructureResourceHandler::FetchRequestState> mRequestState;
        ::ll::TypedStorage<4, 4, ::Gameface::ResourceHandlerStatus>                    mStatus;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ThumbnailRequest();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    using ReqResponsePair = ::std::pair<::Gameface::ResourceRequest, ::Gameface::ResourceResponse>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager const&>        mPackManager;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&> mTextureHolder;
    ::ll::TypedStorage<8, 616, ::MPMCQueue<::std::pair<::Gameface::ResourceRequest, ::Gameface::ResourceResponse>>>
                                                                  mStructureRequestsQueue;
    ::ll::TypedStorage<1, 1, bool>                                mStructureRequestsQueuePending;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::IClientInstance>> mClient;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::mce::UUID, ::OreUI::StructureResourceHandler::ThumbnailRequest>>
                                                  mFetchRequests;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mFetchRequestsMutex;
    ::ll::TypedStorage<8, 336, ::TaskGroup>       mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureResourceHandler& operator=(StructureResourceHandler const&);
    StructureResourceHandler(StructureResourceHandler const&);
    StructureResourceHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureResourceHandler() /*override*/;

    virtual void update() /*override*/;

    virtual void onViewCreate(::IClientInstance& client) /*override*/;

    virtual ::Gameface::ResourceHandlerStatus
    onResourceRequest(::Gameface::ResourceRequest const& request, ::Gameface::ResourceResponse& response) /*override*/;

    virtual ::Gameface::ResourceHandlerStatus
    onResourceStreamRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceStreamResponse&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureResourceHandler(
        ::ResourcePackManager const&        packManager,
        ::Gameface::TemporaryTextureHolder& textureHolder
    );

    MCAPI void _handleFetchRequests();

    MCAPI bool _sendFetchAsync(
        ::std::string_view                                                            id,
        ::std::pair<::Gameface::ResourceRequest, ::Gameface::ResourceResponse> const& reqResponsePair
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ResourcePackManager const& packManager, ::Gameface::TemporaryTextureHolder& textureHolder);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update();

    MCAPI void $onViewCreate(::IClientInstance& client);

    MCAPI ::Gameface::ResourceHandlerStatus
    $onResourceRequest(::Gameface::ResourceRequest const& request, ::Gameface::ResourceResponse& response);

    MCFOLD ::Gameface::ResourceHandlerStatus
    $onResourceStreamRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceStreamResponse&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
