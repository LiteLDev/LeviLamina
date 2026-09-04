#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcNotificationBase.h"

namespace JsonRpc {

class JsonWebRtcNotification : public ::JsonRpc::JsonRpcNotificationBase {
public:
    // JsonWebRtcNotification inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // JsonWebRtcNotification inner types define
    struct Params {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkf9f0c6;
        ::ll::UntypedStorage<8, 32> mUnk57ce95;
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
    ::ll::UntypedStorage<8, 64> mUnk8ac12d;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonWebRtcNotification& operator=(JsonWebRtcNotification const&);
    JsonWebRtcNotification(JsonWebRtcNotification const&);
    JsonWebRtcNotification();
};

} // namespace JsonRpc
