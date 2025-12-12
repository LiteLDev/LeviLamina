#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcNotificationBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

struct ClientMessageDeliveryNotification : public ::JsonRpc::JsonRpcNotificationBase {
public:
    // ClientMessageDeliveryNotification inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // ClientMessageDeliveryNotification inner types define
    struct Params {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk458e40;
        // NOLINTEND

    public:
        // prevent constructor by default
        Params& operator=(Params const&);
        Params(Params const&);
        Params();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::JsonRpc::ClientMessageDeliveryNotification::Params&
        operator=(::JsonRpc::ClientMessageDeliveryNotification::Params&&);

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
    ::ll::UntypedStorage<8, 32> mUnk3d8fd1;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientMessageDeliveryNotification& operator=(ClientMessageDeliveryNotification const&);
    ClientMessageDeliveryNotification(ClientMessageDeliveryNotification const&);
    ClientMessageDeliveryNotification();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ClientMessageDeliveryNotification();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
