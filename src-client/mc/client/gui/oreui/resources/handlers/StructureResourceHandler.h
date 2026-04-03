#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IResourceHandler.h"
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
namespace OreUI { class ResourceStreamResponse; }
namespace OreUI { class TemporaryTextureHolder; }
// clang-format on

namespace OreUI {

class StructureResourceHandler : public ::OreUI::IResourceHandler {
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
        ::ll::TypedStorage<8, 32, ::std::string>                                                     mId;
        ::ll::TypedStorage<8, 136, ::std::pair<::OreUI::ResourceRequest, ::OreUI::ResourceResponse>> mReqResponse;
        ::ll::TypedStorage<8, 16, ::WeakRef<::Editor::ThumbnailFileBytes>>                           mThumbnail;
        ::ll::TypedStorage<4, 4, ::OreUI::StructureResourceHandler::FetchRequestState>               mRequestState;
        ::ll::TypedStorage<4, 4, ::OreUI::IResourceHandler::Status>                                  mStatus;
        // NOLINTEND

    public:
        // prevent constructor by default
        ThumbnailRequest& operator=(ThumbnailRequest const&);
        ThumbnailRequest(ThumbnailRequest const&);
        ThumbnailRequest();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ThumbnailRequest(::OreUI::StructureResourceHandler::ThumbnailRequest&&);

        MCAPI ~ThumbnailRequest();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::OreUI::StructureResourceHandler::ThumbnailRequest&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    using ReqResponsePair = ::std::pair<::OreUI::ResourceRequest, ::OreUI::ResourceResponse>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager const&>     mPackManager;
    ::ll::TypedStorage<8, 8, ::OreUI::TemporaryTextureHolder&> mTextureHolder;
    ::ll::TypedStorage<8, 616, ::MPMCQueue<::std::pair<::OreUI::ResourceRequest, ::OreUI::ResourceResponse>>>
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
    virtual ~StructureResourceHandler() /*override*/ = default;

    virtual void update() /*override*/;

    virtual void onViewCreate(::IClientInstance& client) /*override*/;

    virtual ::OreUI::IResourceHandler::Status
    onResourceRequest(::OreUI::ResourceRequest const& request, ::OreUI::ResourceResponse& response) /*override*/;

    virtual ::OreUI::IResourceHandler::Status
    onResourceStreamRequest(::OreUI::ResourceRequest const&, ::OreUI::ResourceStreamResponse&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _handleFetchRequests();

    MCAPI bool _sendFetchAsync(
        ::std::string_view                                                      id,
        ::std::pair<::OreUI::ResourceRequest, ::OreUI::ResourceResponse> const& reqResponsePair
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update();

    MCAPI void $onViewCreate(::IClientInstance& client);

    MCAPI ::OreUI::IResourceHandler::Status
    $onResourceRequest(::OreUI::ResourceRequest const& request, ::OreUI::ResourceResponse& response);

    MCFOLD ::OreUI::IResourceHandler::Status
    $onResourceStreamRequest(::OreUI::ResourceRequest const&, ::OreUI::ResourceStreamResponse&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
