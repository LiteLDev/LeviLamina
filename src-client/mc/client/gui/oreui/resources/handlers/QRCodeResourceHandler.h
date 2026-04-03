#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IResourceHandler.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ResourceAllowList; }
namespace OreUI { class ResourceResponse; }
namespace OreUI { class ResourceStreamResponse; }
namespace OreUI { class TemporaryTextureHolder; }
namespace OreUI { struct ResourceRequest; }
namespace mce { class Color; }
// clang-format on

namespace OreUI {

class QRCodeResourceHandler : public ::OreUI::IResourceHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::OreUI::ResourceAllowList> const> mResourceAllowList;
    ::ll::TypedStorage<8, 8, ::OreUI::TemporaryTextureHolder&>                              mTemporaryTextureHolder;
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

    virtual ::OreUI::IResourceHandler::Status
    onResourceRequest(::OreUI::ResourceRequest const& request, ::OreUI::ResourceResponse& response) /*override*/;

    virtual ::OreUI::IResourceHandler::Status
    onResourceStreamRequest(::OreUI::ResourceRequest const& request, ::OreUI::ResourceStreamResponse&) /*override*/;

    virtual void update() /*override*/;
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
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> PROTOCOL();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::OreUI::IResourceHandler::Status
    $onResourceRequest(::OreUI::ResourceRequest const& request, ::OreUI::ResourceResponse& response);

    MCFOLD ::OreUI::IResourceHandler::Status
    $onResourceStreamRequest(::OreUI::ResourceRequest const& request, ::OreUI::ResourceStreamResponse&);

    MCFOLD void $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
