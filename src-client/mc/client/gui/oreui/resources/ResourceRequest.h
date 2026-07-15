#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/RequestResourceRange.h"

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
    // member functions
    // NOLINTBEGIN
    MCAPI ~ResourceRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Gameface
