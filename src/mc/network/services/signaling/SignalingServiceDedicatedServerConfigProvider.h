#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/network/services/signaling/ISignalingServiceConfigProvider.h"
#include "mc/network/services/signaling/SignalingServiceConfig.h"

// auto generated forward declare list
// clang-format off
class SignalingServiceConfig;
namespace Bedrock::Http { struct Url; }
namespace NetherNet { struct NetworkID; }
// clang-format on

class SignalingServiceDedicatedServerConfigProvider : public ::ISignalingServiceConfigProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk13a1ae;
    // NOLINTEND

public:
    // prevent constructor by default
    SignalingServiceDedicatedServerConfigProvider& operator=(SignalingServiceDedicatedServerConfigProvider const&);
    SignalingServiceDedicatedServerConfigProvider(SignalingServiceDedicatedServerConfigProvider const&);
    SignalingServiceDedicatedServerConfigProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::Url>>
    getUrl(::NetherNet::NetworkID id) /*override*/;

    // vIndex: 2
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::SignalingServiceConfig::Token>>
    getAuthToken() /*override*/;

    // vIndex: 0
    virtual ~SignalingServiceDedicatedServerConfigProvider() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SignalingServiceDedicatedServerConfigProvider(::SignalingServiceConfig config);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SignalingServiceConfig config);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::Url>>
    $getUrl(::NetherNet::NetworkID id);

    MCNAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::SignalingServiceConfig::Token>> $getAuthToken();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
