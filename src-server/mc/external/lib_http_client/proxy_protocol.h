#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

enum class proxy_protocol : int {
    Http      = 0,
    Https     = 1,
    Ftp       = 2,
    Websocket = 3,
};

}
