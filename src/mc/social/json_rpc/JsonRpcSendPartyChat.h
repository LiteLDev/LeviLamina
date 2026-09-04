#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcRequestBase.h"

namespace JsonRpc {

struct JsonRpcSendPartyChat : public ::JsonRpc::JsonRpcRequestBase {
public:
    // JsonRpcSendPartyChat inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // JsonRpcSendPartyChat inner types define
    struct Params {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkc5c22f;
        ::ll::UntypedStorage<8, 32> mUnk9bb687;
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
    ::ll::UntypedStorage<8, 64> mUnkfa96a3;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonRpcSendPartyChat& operator=(JsonRpcSendPartyChat const&);
    JsonRpcSendPartyChat(JsonRpcSendPartyChat const&);
    JsonRpcSendPartyChat();
};

} // namespace JsonRpc
