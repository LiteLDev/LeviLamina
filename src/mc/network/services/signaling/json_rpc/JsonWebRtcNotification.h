#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcNotificationBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

class JsonWebRtcNotification : public ::JsonRpc::JsonRpcNotificationBase {
public:
    // JsonWebRtcNotification inner types declare
    // clang-format off
    struct Params;
    // clang-format on

    // JsonWebRtcNotification inner types define
    struct Params {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkf9f0c6;
        ::ll::UntypedStorage<8, 32> mUnk57ce95;
        // NOLINTEND

    public:
        // prevent constructor by default
        Params& operator=(Params const&);
        Params();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Params(::JsonRpc::JsonWebRtcNotification::Params const&);

        MCNAPI ::JsonRpc::JsonWebRtcNotification::Params& operator=(::JsonRpc::JsonWebRtcNotification::Params&&);

        MCNAPI ~Params();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::JsonRpc::JsonWebRtcNotification::Params const&);
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
    ::ll::UntypedStorage<8, 64> mUnk8ac12d;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonWebRtcNotification(JsonWebRtcNotification const&);
    JsonWebRtcNotification();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JsonWebRtcNotification(::std::string const& toPlayerId, ::std::string const& innerMessage);

    MCNAPI ::JsonRpc::JsonWebRtcNotification& operator=(::JsonRpc::JsonWebRtcNotification const&);

    MCNAPI ~JsonWebRtcNotification();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& toPlayerId, ::std::string const& innerMessage);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
