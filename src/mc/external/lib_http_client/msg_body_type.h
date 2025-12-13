#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

enum class msg_body_type : int {
    NoBody                  = 0,
    ContentLengthChunked    = 1,
    TransferEncodingChunked = 2,
};

}
