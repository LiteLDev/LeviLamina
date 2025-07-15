#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/services/CachedAsyncSource.h"
#include "mc/network/services/auth/AuthTokenRetrievalType.h"
#include "mc/options/DiscoveryEnvironment.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services { class AzureGetTokenHttpCall; }
namespace Bedrock::Services { struct AzureGetTokenHttpResponse; }
namespace Bedrock::Threading { struct CachedAsyncRetry; }
// clang-format on

namespace Bedrock::Services {

class AuthHelper : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4aeb32;
    ::ll::UntypedStorage<8, 32> mUnk66b210;
    ::ll::UntypedStorage<8, 32> mUnk55e03e;
    ::ll::UntypedStorage<8, 8>  mUnkc88383;
    ::ll::UntypedStorage<8, 32> mUnk4e0ec8;
    ::ll::UntypedStorage<4, 4>  mUnk3b7878;
    // NOLINTEND

public:
    // prevent constructor by default
    AuthHelper& operator=(AuthHelper const&);
    AuthHelper(AuthHelper const&);
    AuthHelper();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AuthHelper() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AuthHelper(::std::string applicationId, ::std::string applicationTenantId, int maxAuthRetryAttempts);

    MCNAPI ::std::shared_ptr<
        ::Bedrock::Threading::IAsyncResult<::nonstd::expected<::std::string, ::Bedrock::Threading::CachedAsyncRetry>>>
    _getAuthToken(
        int                                        retryCount,
        ::Bedrock::Services::AzureGetTokenHttpCall azureTokenCall,
        ::std::string const&                       serviceName
    );

    MCNAPI ::nonstd::expected<::std::string, ::Bedrock::Threading::CachedAsyncRetry>
    _handleResponse(int retryCount, ::Bedrock::Services::AzureGetTokenHttpResponse responseInfo);

    MCNAPI void clear(::std::string const& serviceName);

    MCNAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::std::string>> getAuthToken(
        ::DiscoveryEnvironment                      environment,
        ::std::string const&                        serviceName,
        ::Bedrock::Services::AuthTokenRetrievalType authTokenRetrievalType
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string applicationId, ::std::string applicationTenantId, int maxAuthRetryAttempts);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Services
