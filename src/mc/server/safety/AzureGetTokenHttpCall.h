#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Services { struct AzureGetTokenHttpResponse; }
namespace Bedrock::Services { struct ClientAssertion; }
// clang-format on

namespace Bedrock::Services {

class AzureGetTokenHttpCall {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf21e56;
    ::ll::UntypedStorage<8, 32> mUnka51bf5;
    ::ll::UntypedStorage<8, 32> mUnkac386b;
    ::ll::UntypedStorage<8, 32> mUnked5c9b;
    // NOLINTEND

public:
    // prevent constructor by default
    AzureGetTokenHttpCall& operator=(AzureGetTokenHttpCall const&);
    AzureGetTokenHttpCall(AzureGetTokenHttpCall const&);
    AzureGetTokenHttpCall();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AzureGetTokenHttpCall();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AzureGetTokenHttpCall(
        ::std::string                        tenantId,
        ::std::string                        clientId,
        ::std::string                        scope,
        ::Bedrock::Services::ClientAssertion clientAssertionAuth
    );

    MCNAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Services::AzureGetTokenHttpResponse>>
    send(::TaskGroup& taskGroup);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::Bedrock::Http::Request> _buildRequest(
        ::std::string const&                        url,
        ::std::string const&                        clientId,
        ::std::string const&                        scope,
        ::Bedrock::Services::ClientAssertion const& clientAssertionAuth
    );

    MCNAPI static ::Bedrock::Services::AzureGetTokenHttpResponse _parseResponse(::Bedrock::Http::Response response);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string                        tenantId,
        ::std::string                        clientId,
        ::std::string                        scope,
        ::Bedrock::Services::ClientAssertion clientAssertionAuth
    );
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
