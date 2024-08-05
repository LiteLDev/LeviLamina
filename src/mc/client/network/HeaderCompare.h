#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/http_stl_allocator.h"

namespace xbox::httpclient {

struct HeaderCompare {
public:
    // prevent constructor by default
    HeaderCompare& operator=(HeaderCompare const&);
    HeaderCompare(HeaderCompare const&);
    HeaderCompare();

public:
    // NOLINTBEGIN
    MCAPI bool operator()(http_string const&, http_string const&) const;

    // NOLINTEND
};

}; // namespace xbox::httpclient
