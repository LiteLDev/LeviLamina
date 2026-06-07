#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IResourceHandler.h"
#include "mc/client/gui/oreui/interface/ResourceHandlerStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
namespace Gameface { class ResourceResponse; }
namespace Gameface { class ResourceStreamResponse; }
namespace Gameface { class TemporaryTextureHolder; }
namespace Gameface { struct ResourceRequest; }
namespace OreUI { class ResourceAllowList; }
// clang-format on

namespace OreUI {

class RegisteredResourceHandler : public ::Gameface::IResourceHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IFileAccess>>                    mRawFileAccess;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IFileAccess>>                    mAppPackageFileAccess;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::OreUI::ResourceAllowList> const> mResourceAllowList;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&>                           mTemporaryTextureHolder;
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

    virtual ::Gameface::ResourceHandlerStatus
    onResourceRequest(::Gameface::ResourceRequest const& request, ::Gameface::ResourceResponse& response) /*override*/;

    virtual ::Gameface::ResourceHandlerStatus onResourceStreamRequest(
        ::Gameface::ResourceRequest const&  request,
        ::Gameface::ResourceStreamResponse& response
    ) /*override*/;

    virtual void update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RegisteredResourceHandler(
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const&              rawFileAccess,
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const&              appPackageFileAccess,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::ResourceAllowList> const& resourceAllowList,
        ::Gameface::TemporaryTextureHolder&                              temporaryTextureHolder
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const&              rawFileAccess,
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const&              appPackageFileAccess,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::ResourceAllowList> const& resourceAllowList,
        ::Gameface::TemporaryTextureHolder&                              temporaryTextureHolder
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
    MCAPI ::Gameface::ResourceHandlerStatus
    $onResourceRequest(::Gameface::ResourceRequest const& request, ::Gameface::ResourceResponse& response);

    MCAPI ::Gameface::ResourceHandlerStatus
    $onResourceStreamRequest(::Gameface::ResourceRequest const& request, ::Gameface::ResourceStreamResponse& response);

    MCFOLD void $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
