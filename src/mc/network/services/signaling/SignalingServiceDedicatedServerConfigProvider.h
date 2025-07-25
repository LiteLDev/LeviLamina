#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/network/services/signaling/ISignalingServiceConfigProvider.h"
#include "mc/options/DiscoveryEnvironment.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { struct Url; }
namespace Bedrock::Services { class AuthHelper; }
namespace Bedrock::Services { class DiscoveryHelper; }
// clang-format on

class SignalingServiceDedicatedServerConfigProvider : public ::ISignalingServiceConfigProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk606fe5;
    ::ll::UntypedStorage<8, 16> mUnkeeffe2;
    ::ll::UntypedStorage<8, 16> mUnk3f2c31;
    ::ll::UntypedStorage<4, 4>  mUnkd782be;
    // NOLINTEND

public:
    // prevent constructor by default
    SignalingServiceDedicatedServerConfigProvider& operator=(SignalingServiceDedicatedServerConfigProvider const&);
    SignalingServiceDedicatedServerConfigProvider(SignalingServiceDedicatedServerConfigProvider const&);
    SignalingServiceDedicatedServerConfigProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SignalingServiceDedicatedServerConfigProvider() /*override*/ = default;

    // vIndex: 1
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::Url>> getUrl() /*override*/;

    // vIndex: 2
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::ISignalingServiceConfigProvider::Token>>
    getAuthToken() /*override*/;

    // vIndex: 3
    virtual void reset() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SignalingServiceDedicatedServerConfigProvider(
        ::gsl::not_null<::std::shared_ptr<::Bedrock::Services::DiscoveryHelper>> discoveryService,
        ::gsl::not_null<::std::shared_ptr<::Bedrock::Services::AuthHelper>>      authService,
        ::DiscoveryEnvironment                                                   environment
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<::std::shared_ptr<::Bedrock::Services::DiscoveryHelper>> discoveryService,
        ::gsl::not_null<::std::shared_ptr<::Bedrock::Services::AuthHelper>>      authService,
        ::DiscoveryEnvironment                                                   environment
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::Url>> $getUrl();

    MCNAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::ISignalingServiceConfigProvider::Token>>
    $getAuthToken();

    MCNAPI void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
