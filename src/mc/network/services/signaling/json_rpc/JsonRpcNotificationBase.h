#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonRpc {

class JsonRpcNotificationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk915d02;
    ::ll::UntypedStorage<8, 32> mUnk42f0c7;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonRpcNotificationBase& operator=(JsonRpcNotificationBase const&);
    JsonRpcNotificationBase(JsonRpcNotificationBase const&);
    JsonRpcNotificationBase();
};

} // namespace JsonRpc
