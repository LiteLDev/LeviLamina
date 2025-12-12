#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

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
#ifdef LL_PLAT_S
    virtual ~AzureGetTokenHttpCall();
#else // LL_PLAT_C
    virtual ~AzureGetTokenHttpCall() = default;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_S ::Bedrock::Threading::Async<::Bedrock::Services::AzureGetTokenHttpResponse> send(::TaskGroup& taskGroup);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_S static ::std::optional<::Bedrock::Http::Request> _buildRequest(
        ::std::string const&                        url,
        ::std::string const&                        clientId,
        ::std::string const&                        scope,
        ::Bedrock::Services::ClientAssertion const& clientAssertionAuth
    );

    MCNAPI_S static ::Bedrock::Services::AzureGetTokenHttpResponse _parseResponse(::Bedrock::Http::Response response);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Services
