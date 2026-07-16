#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcRequestBase.h"

namespace JsonRpc {

struct JsonRpcJoinPartyChat : public ::JsonRpc::JsonRpcRequestBase {
public:
    // JsonRpcJoinPartyChat inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // JsonRpcJoinPartyChat inner types define
    struct Params {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkab4bef;
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
    ::ll::UntypedStorage<8, 32> mUnk63f23e;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonRpcJoinPartyChat& operator=(JsonRpcJoinPartyChat const&);
    JsonRpcJoinPartyChat(JsonRpcJoinPartyChat const&);
    JsonRpcJoinPartyChat();
};

} // namespace JsonRpc
