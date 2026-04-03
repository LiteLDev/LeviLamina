#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/network/services/signaling/IJsonRpcComponent.h"

// auto generated forward declare list
// clang-format off
namespace JsonRpc { class JsonRpcProvider; }
// clang-format on

namespace JsonRpc {

class PartyChatJsonRpcComponent : public ::IJsonRpcComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk49d86e;
    ::ll::UntypedStorage<8, 16>  mUnk4c5691;
    ::ll::UntypedStorage<8, 128> mUnkfff689;
    ::ll::UntypedStorage<8, 72>  mUnke78730;
    ::ll::UntypedStorage<8, 8>   mUnk9d8ab8;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyChatJsonRpcComponent& operator=(PartyChatJsonRpcComponent const&);
    PartyChatJsonRpcComponent(PartyChatJsonRpcComponent const&);
    PartyChatJsonRpcComponent();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~PartyChatJsonRpcComponent() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~PartyChatJsonRpcComponent() /*override*/;
#endif

    virtual void initialize(::std::shared_ptr<::JsonRpc::JsonRpcProvider> provider) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void _registerReceiveMessageHandler();

    MCNAPI_C ::Bedrock::Threading::Async<::std::error_code> joinChannel(::std::string const& partyId);

    MCNAPI_C ::Bedrock::Threading::Async<::std::error_code>
    leaveChannel(::std::string const& partyId, ::std::string const& xuid);

    MCNAPI_C void sendMessage(::std::string const& partyId, ::std::string const& message);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $initialize(::std::shared_ptr<::JsonRpc::JsonRpcProvider> provider);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace JsonRpc
