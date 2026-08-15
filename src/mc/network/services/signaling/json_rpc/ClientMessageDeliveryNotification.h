#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcNotificationBase.h"

namespace JsonRpc {

struct ClientMessageDeliveryNotification : public ::JsonRpc::JsonRpcNotificationBase {
public:
    // ClientMessageDeliveryNotification inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // ClientMessageDeliveryNotification inner types define
    struct Params {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkba0bad;
        // NOLINTEND

    public:
        // prevent constructor by default
        Params& operator=(Params const&);
        Params(Params const&);
        Params();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3d8fd1;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientMessageDeliveryNotification& operator=(ClientMessageDeliveryNotification const&);
    ClientMessageDeliveryNotification(ClientMessageDeliveryNotification const&);
    ClientMessageDeliveryNotification();
};

} // namespace JsonRpc
