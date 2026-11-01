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
    ResourceRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ResourceRequest(::cohtml::IAsyncResourceRequest const& request);

    MCNAPI ~ResourceRequest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cohtml::IAsyncResourceRequest const& request);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Gameface
