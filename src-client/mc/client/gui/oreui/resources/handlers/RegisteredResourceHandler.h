#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IResourceHandler.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
namespace OreUI { class IResourceResponse; }
namespace OreUI { class ResourceAllowList; }
namespace OreUI { class TemporaryTextureHolder; }
namespace OreUI { struct ResourceRequest; }
namespace cohtml { class IAsyncResourceStreamResponse; }
// clang-format on

namespace OreUI {

class RegisteredResourceHandler : public ::OreUI::IResourceHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IFileAccess>>                    mRawFileAccess;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IFileAccess>>                    mAppPackageFileAccess;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::OreUI::ResourceAllowList> const> mResourceAllowList;
    ::ll::TypedStorage<8, 8, ::OreUI::TemporaryTextureHolder&>                              mTemporaryTextureHolder;
    // NOLINTEND

public:
    // prevent constructor by default
    RegisteredResourceHandler& operator=(RegisteredResourceHandler const&);
    RegisteredResourceHandler(RegisteredResourceHandler const&);
    RegisteredResourceHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RegisteredResourceHandler() /*override*/;

    virtual ::OreUI::IResourceHandler::Status
    onResourceRequest(::OreUI::ResourceRequest const& request, ::OreUI::IResourceResponse& response) /*override*/;

    virtual ::OreUI::IResourceHandler::Status onResourceStreamRequest(
        ::OreUI::ResourceRequest const&         request,
        ::cohtml::IAsyncResourceStreamResponse* response
    ) /*override*/;

    virtual void update() /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> PROTOCOL();
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
    $onResourceRequest(::OreUI::ResourceRequest const& request, ::OreUI::IResourceResponse& response);

    MCAPI ::OreUI::IResourceHandler::Status
    $onResourceStreamRequest(::OreUI::ResourceRequest const& request, ::cohtml::IAsyncResourceStreamResponse* response);

    MCFOLD void $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
