#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IResourceHandler.h"
#include "mc/client/gui/oreui/interface/ResourceHandlerStatus.h"
#include "mc/deps/core/threading/MPMCQueue.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class ResourceResponse; }
namespace Gameface { class ResourceStreamResponse; }
namespace Gameface { struct ResourceRequest; }
namespace OreUI { class IMinimapResourceProvider; }
// clang-format on

namespace OreUI {

class MinimapResourceHandler : public ::Gameface::IResourceHandler {
public:
    // MinimapResourceHandler inner types declare
    // clang-format off
    struct Impl;
    // clang-format on

    // MinimapResourceHandler inner types define
    struct Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::IMinimapResourceProvider>> mMinimapResourceProvider;
        ::ll::TypedStorage<8, 616, ::MPMCQueue<::std::pair<::Gameface::ResourceRequest, ::Gameface::ResourceResponse>>>
            mRequestsQueue;
        // NOLINTEND
    };

    using ReqResponsePair = ::std::pair<::Gameface::ResourceRequest, ::Gameface::ResourceResponse>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::MinimapResourceHandler::Impl>> mImpl;
    // NOLINTEND

public:
    // prevent constructor by default
    MinimapResourceHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinimapResourceHandler() /*override*/ = default;

    virtual void update() /*override*/;

    virtual ::Gameface::ResourceHandlerStatus
    onResourceRequest(::Gameface::ResourceRequest const& request, ::Gameface::ResourceResponse& response) /*override*/;

    virtual ::Gameface::ResourceHandlerStatus
    onResourceStreamRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceStreamResponse&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MinimapResourceHandler(::std::shared_ptr<::OreUI::IMinimapResourceProvider> minimapResourceProvider);

    MCAPI void _failQueuedRequests();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::OreUI::IMinimapResourceProvider> minimapResourceProvider);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update();

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
