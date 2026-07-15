#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IResourceHandler.h"
#include "mc/client/gui/oreui/interface/ResourceHandlerStatus.h"
#include "mc/client/gui/oreui/resources/ResourceResponse.h"
#include "mc/client/social/ProfileImageOptions.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class ResourceStreamResponse; }
namespace Gameface { class TemporaryTextureHolder; }
namespace Gameface { struct ResourceRequest; }
namespace OreUI { class ResourceAllowList; }
namespace Social { class IUserManager; }
// clang-format on

namespace OreUI {

class ProfileImageResourceHandler : public ::Gameface::IResourceHandler {
public:
    // ProfileImageResourceHandler inner types declare
    // clang-format off
    struct FinishedRequest;
    // clang-format on

    // ProfileImageResourceHandler inner types define
    struct FinishedRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Gameface::ResourceResponse>   response;
        ::ll::TypedStorage<8, 32, ::std::string>                 requestUrl;
        ::ll::TypedStorage<8, 72, ::Social::ProfileImageOptions> imageOptions;
        ::ll::TypedStorage<1, 1, bool>                           succeeded;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 616, ::MPMCQueue<::std::pair<::Gameface::ResourceRequest, ::Gameface::ResourceResponse>>>
                                                                                                   mRequestQueue;
    ::ll::TypedStorage<8, 616, ::MPMCQueue<::OreUI::ProfileImageResourceHandler::FinishedRequest>> mFinishedRequests;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::OreUI::ResourceAllowList> const>        mResourceAllowList;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&>                    mTemporaryTextureHolder;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                          mTaskGroup;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>> mUserManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfileImageResourceHandler& operator=(ProfileImageResourceHandler const&);
    ProfileImageResourceHandler(ProfileImageResourceHandler const&);
    ProfileImageResourceHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProfileImageResourceHandler() /*override*/ = default;

    virtual ::Gameface::ResourceHandlerStatus
    onResourceRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceResponse&) /*override*/;

    virtual ::Gameface::ResourceHandlerStatus
    onResourceStreamRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceStreamResponse&) /*override*/;

    virtual void update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ProfileImageResourceHandler(
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::ResourceAllowList> const& resourceAllowList,
        ::Gameface::TemporaryTextureHolder&                              temporaryTextureHolder,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>            userManager
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::ResourceAllowList> const& resourceAllowList,
        ::Gameface::TemporaryTextureHolder&                              temporaryTextureHolder,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>            userManager
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
