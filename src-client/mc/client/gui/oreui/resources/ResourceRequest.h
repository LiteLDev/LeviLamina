#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/RequestResourceRange.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class IAsyncResourceRequest; }
// clang-format on

namespace Gameface {

struct ResourceRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                     mUrl;
    ::ll::TypedStorage<8, 32, ::std::string>                                     mAbsoluteUrl;
    ::ll::TypedStorage<8, 32, ::std::optional<::Gameface::RequestResourceRange>> mRange;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                      mFallbackUrls;
    ::ll::TypedStorage<4, 4, uint>                                               mRequestId;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceRequest& operator=(ResourceRequest const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourceRequest();

    MCAPI ResourceRequest(::Gameface::ResourceRequest const&);

    MCAPI explicit ResourceRequest(::cohtml::IAsyncResourceRequest const& request);

    MCAPI ::Gameface::ResourceRequest& operator=(::Gameface::ResourceRequest&&);

    MCAPI ~ResourceRequest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Gameface::ResourceRequest const&);

    MCAPI void* $ctor(::cohtml::IAsyncResourceRequest const& request);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Gameface
