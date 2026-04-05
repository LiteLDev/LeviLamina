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
        MCNAPI ::JsonRpc::JsonRpcRemoveFromPartyChat::Params&
        operator=(::JsonRpc::JsonRpcRemoveFromPartyChat::Params&&);

        MCNAPI ::JsonRpc::JsonRpcRemoveFromPartyChat::Params&
        operator=(::JsonRpc::JsonRpcRemoveFromPartyChat::Params const&);

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
#ifdef LL_PLAT_C
    MCNAPI JsonRpcRemoveFromPartyChat(::std::string const& partyId, ::std::string const& xuid);

    MCNAPI ~JsonRpcRemoveFromPartyChat();
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
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::string const& partyId, ::std::string const& xuid);
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
