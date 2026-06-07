#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/RequestPriority.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Method; }
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Bedrock::Http::Internal { class IRequestBody; }
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

namespace Bedrock::Http {

class RequestBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 224> mUnkaf9bb2;
    ::ll::UntypedStorage<8, 64>  mUnkd459f4;
    // NOLINTEND

public:
    // prevent constructor by default
    RequestBuilder& operator=(RequestBuilder const&);
    RequestBuilder(RequestBuilder const&);

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Http::RequestBuilder& DEL();
#endif

    MCNAPI ::Bedrock::Http::RequestBuilder& GET();

#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Http::RequestBuilder& HEAD();
#endif

    MCNAPI ::Bedrock::Http::RequestBuilder& POST();

#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Http::RequestBuilder& PUT();
#endif

    MCNAPI RequestBuilder();

    MCNAPI ::Bedrock::Http::RequestBuilder&
    addHeader(::std::string const& header, ::std::string const& value, bool ignoreRestrictedHeaderCheck);

#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Http::RequestBuilder& body(::gsl::span<uchar> const& binaryData);

    MCNAPI ::Bedrock::Http::RequestBuilder&
    body(::gsl::not_null<::std::shared_ptr<::Bedrock::Http::Internal::IRequestBody>> body);

    MCNAPI ::Bedrock::Http::RequestBuilder& body(::Core::Path const& file);

    MCNAPI ::Bedrock::Http::RequestBuilder& body(::Json::Value const& json);
#endif

    MCNAPI ::Bedrock::Http::RequestBuilder& body(::std::string const& plainText);

    MCNAPI ::Bedrock::Http::Request& build();

#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Http::RequestBuilder& contentType(::std::string const& contentType);
#endif

    MCNAPI ::Bedrock::Http::RequestBuilder& method(::Bedrock::Http::Method method);

    MCNAPI ::Bedrock::Http::RequestBuilder& priority(::Bedrock::Http::RequestPriority priority);

#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Http::RequestBuilder&
    retryPolicy(::std::function<::std::optional<::std::chrono::seconds>(::Bedrock::Http::Response const&)>&& policy);
#endif

    MCNAPI ::Bedrock::Http::RequestBuilder& timeout(::std::chrono::seconds timeout);

    MCNAPI ::Bedrock::Http::RequestBuilder& url(::std::string const& url);

    MCNAPI ~RequestBuilder();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Http
