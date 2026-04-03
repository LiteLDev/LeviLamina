#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcRequestBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

struct JsonRpcRemoveFromPartyChat : public ::JsonRpc::JsonRpcRequestBase {
public:
    // JsonRpcRemoveFromPartyChat inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // JsonRpcRemoveFromPartyChat inner types define
    struct Params {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk262c5b;
        ::ll::UntypedStorage<8, 32> mUnk4da2c4;
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
    ::ll::UntypedStorage<8, 64> mUnk51bf3b;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonRpcRemoveFromPartyChat& operator=(JsonRpcRemoveFromPartyChat const&);
    JsonRpcRemoveFromPartyChat(JsonRpcRemoveFromPartyChat const&);
    JsonRpcRemoveFromPartyChat();

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
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::string const& partyId, ::std::string const& xuid);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
