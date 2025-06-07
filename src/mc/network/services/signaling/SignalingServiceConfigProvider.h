#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/network/services/signaling/ISignalingServiceConfigProvider.h"
#include "mc/network/services/signaling/SignalingServiceConfig.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { struct Url; }
namespace NetherNet { struct NetworkID; }
// clang-format on

class SignalingServiceConfigProvider : public ::ISignalingServiceConfigProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd5ccf8;
    ::ll::UntypedStorage<8, 8>  mUnk8cb6fd;
    // NOLINTEND

public:
    // prevent constructor by default
    SignalingServiceConfigProvider& operator=(SignalingServiceConfigProvider const&);
    SignalingServiceConfigProvider(SignalingServiceConfigProvider const&);
    SignalingServiceConfigProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::Url>>
        getUrl(::NetherNet::NetworkID) /*override*/;

    // vIndex: 2
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::SignalingServiceConfig::Token>>
    getAuthToken() /*override*/;

    // vIndex: 0
    virtual ~SignalingServiceConfigProvider() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
