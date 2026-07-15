#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcNotificationBase.h"

namespace JsonRpc {

struct NetherNetMessage : public ::JsonRpc::JsonRpcNotificationBase {
public:
    // NetherNetMessage inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // NetherNetMessage inner types define
    struct Params {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnke7d813;
        ::ll::UntypedStorage<8, 32> mUnke2a6ef;
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
    ::ll::UntypedStorage<8, 64> mUnk510a56;
    // NOLINTEND

public:
    // prevent constructor by default
    NetherNetMessage& operator=(NetherNetMessage const&);
    NetherNetMessage(NetherNetMessage const&);
    NetherNetMessage();
};

} // namespace JsonRpc
