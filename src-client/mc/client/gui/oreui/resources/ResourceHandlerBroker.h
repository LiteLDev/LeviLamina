#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cohtml/IAsyncResourceHandler.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceHandler; }
namespace cohtml { class IAsyncResourceRequest; }
namespace cohtml { class IAsyncResourceResponse; }
namespace cohtml { class IAsyncResourceStreamResponse; }
// clang-format on

namespace OreUI {

class ResourceHandlerBroker : public ::cohtml::IAsyncResourceHandler {
public:
    // ResourceHandlerBroker inner types declare
    // clang-format off
    struct ResourceHandlerData;
    // clang-format on

    // ResourceHandlerBroker inner types define
    struct ResourceHandlerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                               protocol;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::IResourceHandler>> resourceHandler;
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
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::ResourceHandlerBroker::ResourceHandlerData>> mResourceHandlers;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourceHandlerBroker() /*override*/ = default;

    virtual void OnResourceRequest(
        ::cohtml::IAsyncResourceRequest const* request,
        ::cohtml::IAsyncResourceResponse*      response
    ) /*override*/;

    virtual void OnResourceStreamRequest(
        ::cohtml::IAsyncResourceRequest const*  request,
        ::cohtml::IAsyncResourceStreamResponse* response
    ) /*override*/;

    virtual void OnAbortResourceRequest(uint) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void registerResourceHandler(
        ::std::string const&                         protocol,
        ::std::unique_ptr<::OreUI::IResourceHandler> resourceHandler
    );
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
