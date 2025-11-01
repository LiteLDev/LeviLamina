#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcNotificationBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
        ::ll::UntypedStorage<8, 32> mUnke32961;
        ::ll::UntypedStorage<8, 32> mUnk6f0843;
        // NOLINTEND

    public:
        // prevent constructor by default
        Params& operator=(Params const&);
        Params(Params const&);
        Params();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::JsonRpc::NetherNetMessage::Params& operator=(::JsonRpc::NetherNetMessage::Params&&);

        MCNAPI ~Params();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
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

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetherNetMessage(::std::string netherNetId, ::std::string message);

    MCNAPI ~NetherNetMessage();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string netherNetId, ::std::string message);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
