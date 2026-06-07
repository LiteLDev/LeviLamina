#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ResourceHandlerStatus.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace Gameface { class ResourceResponse; }
namespace Gameface { class ResourceStreamResponse; }
namespace Gameface { struct ResourceRequest; }
// clang-format on

namespace Gameface {

class IResourceHandler {
public:
    // IResourceHandler inner types define
    using Status = ::Gameface::ResourceHandlerStatus;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IResourceHandler() = default;

    virtual ::Gameface::ResourceHandlerStatus
    onResourceRequest(::Gameface::ResourceRequest const& request, ::Gameface::ResourceResponse& response) = 0;

    virtual ::Gameface::ResourceHandlerStatus onResourceStreamRequest(
        ::Gameface::ResourceRequest const&  request,
        ::Gameface::ResourceStreamResponse& response
    ) = 0;

    virtual void update() = 0;

    virtual void onViewCreate(::IClientInstance& primaryClient);

    virtual void onAppPreSuspend();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onViewCreate(::IClientInstance& primaryClient);

    MCFOLD void $onAppPreSuspend();
    // NOLINTEND
};

} // namespace Gameface
