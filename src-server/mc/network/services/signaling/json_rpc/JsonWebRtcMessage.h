#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcRequestBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

class JsonWebRtcMessage : public ::JsonRpc::JsonRpcRequestBase {
public:
    // JsonWebRtcMessage inner types declare
    // clang-format off
    struct Params;
    // clang-format on
    
    // JsonWebRtcMessage inner types define
    struct Params {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk35b97e;
        ::ll::UntypedStorage<8, 32> mUnkdd44e4;
        ::ll::UntypedStorage<8, 32> mUnkf9bb84;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Params& operator=(Params const&);
        Params(Params const&);
        Params();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::JsonRpc::JsonWebRtcMessage::Params& operator=(::JsonRpc::JsonWebRtcMessage::Params&&);
    
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
    ::ll::UntypedStorage<8, 96> mUnk390060;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonWebRtcMessage& operator=(JsonWebRtcMessage const&);
    JsonWebRtcMessage(JsonWebRtcMessage const&);
    JsonWebRtcMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~JsonWebRtcMessage();
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
