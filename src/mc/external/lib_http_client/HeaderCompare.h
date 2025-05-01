#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/http_stl_allocator.h"

namespace xbox::httpclient {

struct HeaderCompare {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator()(::http_string const&, ::http_string const&) const;
    // NOLINTEND
};

} // namespace xbox::httpclient
