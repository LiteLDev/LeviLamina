#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/RequestResourceRange.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class IAsyncResourceRequest; }
// clang-format on

namespace OreUI {

struct ResourceRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                  mUrl;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mAbsoluteUrl;
    ::ll::TypedStorage<8, 32, ::std::optional<::OreUI::RequestResourceRange>> mRange;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                   mFallbackUrls;
    ::ll::TypedStorage<4, 4, uint>                                            mRequestId;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceRequest& operator=(ResourceRequest const&);
    ResourceRequest(ResourceRequest const&);
    ResourceRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ResourceRequest(::cohtml::IAsyncResourceRequest const& request);

    MCAPI ::OreUI::ResourceRequest& operator=(::OreUI::ResourceRequest&&);

    MCAPI ~ResourceRequest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cohtml::IAsyncResourceRequest const& request);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
