#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IResourceHandler.h"
#include "mc/client/gui/oreui/interface/ResourceHandlerStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class ResourceResponse; }
namespace Gameface { class ResourceStreamResponse; }
namespace Gameface { class TemporaryTextureHolder; }
namespace Gameface { struct ResourceRequest; }
namespace OreUI { class ResourceAllowList; }
namespace mce { class Color; }
// clang-format on

namespace OreUI {

class QRCodeResourceHandler : public ::Gameface::IResourceHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::OreUI::ResourceAllowList> const> mResourceAllowList;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&>                           mTemporaryTextureHolder;
    // NOLINTEND

public:
    // prevent constructor by default
    QRCodeResourceHandler& operator=(QRCodeResourceHandler const&);
    QRCodeResourceHandler(QRCodeResourceHandler const&);
    QRCodeResourceHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~QRCodeResourceHandler() /*override*/ = default;

    virtual ::Gameface::ResourceHandlerStatus
    onResourceRequest(::Gameface::ResourceRequest const& request, ::Gameface::ResourceResponse& response) /*override*/;

    virtual ::Gameface::ResourceHandlerStatus
    onResourceStreamRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceStreamResponse&) /*override*/;

    virtual void update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI QRCodeResourceHandler(
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::ResourceAllowList> const& resourceAllowList,
        ::Gameface::TemporaryTextureHolder&                              temporaryTextureHolder
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::mce::Color> _getColorFromQueryParameter(
        ::std::vector<::std::pair<::std::string_view, ::std::string_view>> const& queryParameters,
        ::std::string const&                                                      parameterName
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::ResourceAllowList> const& resourceAllowList,
        ::Gameface::TemporaryTextureHolder&                              temporaryTextureHolder
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Gameface::ResourceHandlerStatus
    $onResourceRequest(::Gameface::ResourceRequest const& request, ::Gameface::ResourceResponse& response);

    MCFOLD ::Gameface::ResourceHandlerStatus
    $onResourceStreamRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceStreamResponse&);

    MCFOLD void $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
