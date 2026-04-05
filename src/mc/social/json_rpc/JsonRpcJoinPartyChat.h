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

#ifdef LL_PLAT_S
    public:
        // prevent constructor by default
        Params& operator=(Params const&);
        Params(Params const&);
        Params();

#else // LL_PLAT_C
    public:
        // prevent constructor by default
        Params(Params const&);
        Params();

#endif
    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI ::JsonRpc::JsonRpcJoinPartyChat::Params& operator=(::JsonRpc::JsonRpcJoinPartyChat::Params&&);

        MCNAPI ::JsonRpc::JsonRpcJoinPartyChat::Params& operator=(::JsonRpc::JsonRpcJoinPartyChat::Params const&);

        MCNAPI ~Params();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
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
#ifdef LL_PLAT_C
    MCNAPI ~JsonRpcJoinPartyChat();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace JsonRpc
