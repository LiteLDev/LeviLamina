#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcRequestBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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

    public:
        // member functions
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
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

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
