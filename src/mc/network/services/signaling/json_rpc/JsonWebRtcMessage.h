#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/json_rpc/JsonRpcRequestBase.h"

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
        ::ll::UntypedStorage<8, 32> mUnkbe59e4;
        ::ll::UntypedStorage<8, 32> mUnke3d5d4;
        ::ll::UntypedStorage<8, 32> mUnk5a107a;
        // NOLINTEND

    public:
        // prevent constructor by default
        Params& operator=(Params const&);
        Params(Params const&);
        Params();
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
};

} // namespace JsonRpc
