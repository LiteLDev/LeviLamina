#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

enum class proxy_type : int {
    NoProxy = 0,
    DefaultProxy = 1,
    AutodiscoverProxy = 2,
    NamedProxy = 3,
    AutomaticProxy = 4,
};

}
