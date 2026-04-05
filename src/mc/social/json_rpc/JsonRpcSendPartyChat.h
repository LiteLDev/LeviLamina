#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcRequestBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
        MCNAPI ::JsonRpc::JsonRpcSendPartyChat::Params& operator=(::JsonRpc::JsonRpcSendPartyChat::Params&&);

        MCNAPI ::JsonRpc::JsonRpcSendPartyChat::Params& operator=(::JsonRpc::JsonRpcSendPartyChat::Params const&);

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
    ::ll::UntypedStorage<8, 64> mUnkfa96a3;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonRpcSendPartyChat& operator=(JsonRpcSendPartyChat const&);
    JsonRpcSendPartyChat(JsonRpcSendPartyChat const&);
    JsonRpcSendPartyChat();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI JsonRpcSendPartyChat(::std::string const& partyId, ::std::string const& message);

    MCNAPI ~JsonRpcSendPartyChat();
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
    MCNAPI void* $ctor(::std::string const& partyId, ::std::string const& message);
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
