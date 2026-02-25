#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IResourceHandler.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class ResourcePackManager;
namespace OreUI { class IResourceResponse; }
namespace OreUI { class TemporaryTextureHolder; }
namespace OreUI { struct ResourceRequest; }
namespace cohtml { class IAsyncResourceStreamResponse; }
// clang-format on

namespace OreUI {

class PackResourceHandler : public ::OreUI::IResourceHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager const&>     mPackManager;
    ::ll::TypedStorage<8, 8, ::OreUI::TemporaryTextureHolder&> mTemporaryTextureHolder;
    // NOLINTEND

public:
    // prevent constructor by default
    PackResourceHandler& operator=(PackResourceHandler const&);
    PackResourceHandler(PackResourceHandler const&);
    PackResourceHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackResourceHandler() /*override*/ = default;

    virtual ::OreUI::IResourceHandler::Status
    onResourceRequest(::OreUI::ResourceRequest const& request, ::OreUI::IResourceResponse& response) /*override*/;

    virtual ::OreUI::IResourceHandler::Status onResourceStreamRequest(
        ::OreUI::ResourceRequest const&         request,
        ::cohtml::IAsyncResourceStreamResponse* response
    ) /*override*/;

    virtual void update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::ResourceLocation>
    _getAssetResourceLocationFromResourcePackManager(::OreUI::ResourceRequest const& request) const;
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
