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
        ::ll::UntypedStorage<8, 32> mUnk3fa27a;
        ::ll::UntypedStorage<8, 32> mUnkd9ba28;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Params& operator=(Params const&);
        Params(Params const&);
        Params();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::JsonRpc::JsonWebRtcNotification::Params& operator=(::JsonRpc::JsonWebRtcNotification::Params&&);
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8ac12d;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonWebRtcNotification& operator=(JsonWebRtcNotification const&);
    JsonWebRtcNotification(JsonWebRtcNotification const&);
    JsonWebRtcNotification();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~JsonWebRtcNotification();
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

}
