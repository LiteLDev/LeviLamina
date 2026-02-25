#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/IResourceAwaiter.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class IResourcePackRepository;
// clang-format on

namespace OreUI {

class ResourceAwaiter : public ::OreUI::IResourceAwaiter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                               mWasLastDone;
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository&>         mRepository;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>> mRefreshTask;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceAwaiter& operator=(ResourceAwaiter const&);
    ResourceAwaiter(ResourceAwaiter const&);
    ResourceAwaiter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::OreUI::IResourceAwaiter::Status updateStatus() /*override*/;

    virtual void refreshResources() /*override*/;

    virtual ~ResourceAwaiter() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::OreUI::IResourceAwaiter::Status $updateStatus();

    MCAPI void $refreshResources();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
