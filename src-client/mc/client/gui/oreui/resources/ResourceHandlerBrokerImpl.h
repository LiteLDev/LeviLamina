#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/ResourceHandlerBroker.h"
#include "mc/external/gameface/cohtml/IAsyncResourceHandler.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace Gameface { class IResourceHandler; }
namespace cohtml { class IAsyncResourceRequest; }
namespace cohtml { class IAsyncResourceResponse; }
namespace cohtml { class IAsyncResourceStreamResponse; }
// clang-format on

namespace Gameface {

class ResourceHandlerBrokerImpl : public ::Gameface::ResourceHandlerBroker, public ::cohtml::IAsyncResourceHandler {
public:
    // ResourceHandlerBrokerImpl inner types declare
    // clang-format off
    struct ResourceHandlerData;
    // clang-format on

    // ResourceHandlerBrokerImpl inner types define
    struct ResourceHandlerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                                  protocol;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Gameface::IResourceHandler>> resourceHandler;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ResourceHandlerData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Gameface::ResourceHandlerBrokerImpl::ResourceHandlerData>>
        mResourceHandlers;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourceHandlerBrokerImpl() /*override*/ = default;

    virtual void OnResourceRequest(
        ::cohtml::IAsyncResourceRequest const* request,
        ::cohtml::IAsyncResourceResponse*      response
    ) /*override*/;

    virtual void OnResourceStreamRequest(
        ::cohtml::IAsyncResourceRequest const*  request,
        ::cohtml::IAsyncResourceStreamResponse* response
    ) /*override*/;

    virtual void OnAbortResourceRequest(uint) /*override*/;

    virtual void update() /*override*/;

    virtual void registerResourceHandler(
        ::std::string const&                            protocol,
        ::std::unique_ptr<::Gameface::IResourceHandler> resourceHandler
    ) /*override*/;

    virtual void unregisterResourceHandler(::std::string const& protocol) /*override*/;

    virtual void onViewCreate(::IClientInstance& clientInstance) /*override*/;

    virtual void onAppPreSuspend() /*override*/;

    virtual ::cohtml::IAsyncResourceHandler* getCohtmlHandler() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $OnResourceRequest(::cohtml::IAsyncResourceRequest const* request, ::cohtml::IAsyncResourceResponse* response);

    MCAPI void $OnResourceStreamRequest(
        ::cohtml::IAsyncResourceRequest const*  request,
        ::cohtml::IAsyncResourceStreamResponse* response
    );

    MCFOLD void $OnAbortResourceRequest(uint);

    MCAPI void $update();

    MCAPI void $registerResourceHandler(
        ::std::string const&                            protocol,
        ::std::unique_ptr<::Gameface::IResourceHandler> resourceHandler
    );

    MCAPI void $unregisterResourceHandler(::std::string const& protocol);

    MCAPI void $onViewCreate(::IClientInstance& clientInstance);

    MCAPI void $onAppPreSuspend();

    MCFOLD ::cohtml::IAsyncResourceHandler* $getCohtmlHandler();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIAsyncResourceHandler();

    MCNAPI static void** $vftableForResourceHandlerBroker();
    // NOLINTEND
};

} // namespace Gameface
