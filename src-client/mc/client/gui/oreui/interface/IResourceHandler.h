#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace OreUI { class ResourceResponse; }
namespace OreUI { class ResourceStreamResponse; }
namespace OreUI { struct ResourceRequest; }
// clang-format on

namespace OreUI {

class IResourceHandler {
public:
    // IResourceHandler inner types define
    enum class Status : int {
        Success = 0,
        Failure = 1,
        Queued  = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IResourceHandler() = default;

    virtual ::OreUI::IResourceHandler::Status
    onResourceRequest(::OreUI::ResourceRequest const& request, ::OreUI::ResourceResponse& response) = 0;

    virtual ::OreUI::IResourceHandler::Status
    onResourceStreamRequest(::OreUI::ResourceRequest const& request, ::OreUI::ResourceStreamResponse& response) = 0;

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

} // namespace OreUI
