#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/IJsonRpcComponent.h"

// auto generated forward declare list
// clang-format off
namespace JsonRpc { class JsonRpcProvider; }
// clang-format on

namespace JsonRpc {

class WebRtcComponent : public ::IJsonRpcComponent, public ::std::enable_shared_from_this<::JsonRpc::WebRtcComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkbe99df;
    ::ll::UntypedStorage<8, 24> mUnk1bb34c;
    ::ll::UntypedStorage<8, 80> mUnkcc2ad6;
    ::ll::UntypedStorage<8, 64> mUnk2d2bc1;
    ::ll::UntypedStorage<8, 16> mUnk1c8606;
    ::ll::UntypedStorage<8, 16> mUnk6cd539;
    // NOLINTEND

public:
    // prevent constructor by default
    WebRtcComponent& operator=(WebRtcComponent const&);
    WebRtcComponent(WebRtcComponent const&);
    WebRtcComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initialize(::std::shared_ptr<::JsonRpc::JsonRpcProvider>) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace JsonRpc
