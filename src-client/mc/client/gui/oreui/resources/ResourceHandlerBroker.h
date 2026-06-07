#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace Gameface { class IResourceHandler; }
namespace cohtml { class IAsyncResourceHandler; }
// clang-format on

namespace Gameface {

class ResourceHandlerBroker {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourceHandlerBroker() = default;

    virtual void update() = 0;

    virtual void registerResourceHandler(
        ::std::string const&                            protocol,
        ::std::unique_ptr<::Gameface::IResourceHandler> resourceHandler
    ) = 0;

    virtual void unregisterResourceHandler(::std::string const& protocol) = 0;

    virtual void onViewCreate(::IClientInstance& clientInstance) = 0;

    virtual void onAppPreSuspend() = 0;

    virtual ::cohtml::IAsyncResourceHandler* getCohtmlHandler() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Gameface
