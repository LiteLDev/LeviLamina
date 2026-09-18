#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonRpc {

class JsonRpcNotificationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfd1ba5;
    ::ll::UntypedStorage<8, 32> mUnk6f714a;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonRpcNotificationBase& operator=(JsonRpcNotificationBase const&);
    JsonRpcNotificationBase(JsonRpcNotificationBase const&);
    JsonRpcNotificationBase();
};

} // namespace JsonRpc
