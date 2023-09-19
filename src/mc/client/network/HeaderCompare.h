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
    // symbol:
    // ??RHeaderCompare@httpclient@xbox@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@0@Z
    MCAPI bool operator()(http_string const&, http_string const&) const;

    // NOLINTEND
};

}; // namespace xbox::httpclient
