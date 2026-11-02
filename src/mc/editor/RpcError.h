#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Rpc {

enum class RpcError : uchar {
    None                          = 0,
    FunctionNotFound              = 1,
    ArgumentDeserializationFailed = 2,
    ReturnSerializationFailed     = 3,
    InvocationFailed              = 4,
    Timeout                       = 5,
    ServiceShutdown               = 6,
    RemoteError                   = 7,
};

}
