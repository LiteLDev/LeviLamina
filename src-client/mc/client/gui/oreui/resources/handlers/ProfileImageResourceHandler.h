#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IResourceHandler.h"
#include "mc/client/gui/oreui/resources/ResourceResponse.h"
#include "mc/client/social/ProfileImageOptions.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ResourceAllowList; }
namespace OreUI { class ResourceStreamResponse; }
namespace OreUI { class TemporaryTextureHolder; }
namespace OreUI { struct ResourceRequest; }
namespace Social { class IUserManager; }
// clang-format on

namespace OreUI {

class ProfileImageResourceHandler : public ::OreUI::IResourceHandler {
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
        ::ll::TypedStorage<8, 8, ::OreUI::ResourceResponse>      response;
        ::ll::TypedStorage<8, 32, ::std::string>                 requestUrl;
        ::ll::TypedStorage<8, 72, ::Social::ProfileImageOptions> imageOptions;
        ::ll::TypedStorage<1, 1, bool>                           succeeded;
        // NOLINTEND

    public:
        // prevent constructor by default
        FinishedRequest& operator=(FinishedRequest const&);
        FinishedRequest(FinishedRequest const&);
        FinishedRequest();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::OreUI::ProfileImageResourceHandler::FinishedRequest&
        operator=(::OreUI::ProfileImageResourceHandler::FinishedRequest&&);

        MCAPI ~FinishedRequest();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 616, ::MPMCQueue<::std::pair<::OreUI::ResourceRequest, ::OreUI::ResourceResponse>>>
                                                                                                   mRequestQueue;
    ::ll::TypedStorage<8, 616, ::MPMCQueue<::OreUI::ProfileImageResourceHandler::FinishedRequest>> mFinishedRequests;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::OreUI::ResourceAllowList> const>        mResourceAllowList;
    ::ll::TypedStorage<8, 8, ::OreUI::TemporaryTextureHolder&>                       mTemporaryTextureHolder;
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
    virtual ~ProfileImageResourceHandler() /*override*/;

    virtual ::OreUI::IResourceHandler::Status
    onResourceRequest(::OreUI::ResourceRequest const& request, ::OreUI::ResourceResponse& response) /*override*/;

    virtual ::OreUI::IResourceHandler::Status
    onResourceStreamRequest(::OreUI::ResourceRequest const& request, ::OreUI::ResourceStreamResponse&) /*override*/;

    virtual void update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ProfileImageResourceHandler(
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::ResourceAllowList> const& resourceAllowList,
        ::OreUI::TemporaryTextureHolder&                                 temporaryTextureHolder,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>            userManager
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> PROTOCOL();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::ResourceAllowList> const& resourceAllowList,
        ::OreUI::TemporaryTextureHolder&                                 temporaryTextureHolder,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>            userManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::OreUI::IResourceHandler::Status
    $onResourceRequest(::OreUI::ResourceRequest const& request, ::OreUI::ResourceResponse& response);

    MCFOLD ::OreUI::IResourceHandler::Status
    $onResourceStreamRequest(::OreUI::ResourceRequest const& request, ::OreUI::ResourceStreamResponse&);

    MCAPI void $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
