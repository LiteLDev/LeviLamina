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

    virtual void registerResourceHandler(::std::string const&, ::std::unique_ptr<::Gameface::IResourceHandler>) = 0;

    virtual void unregisterResourceHandler(::std::string const&) = 0;

    virtual void onViewCreate(::IClientInstance&) = 0;

    virtual void onAppPreSuspend() = 0;

    virtual ::cohtml::IAsyncResourceHandler* getCohtmlHandler() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Gameface
