#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RequestBuilder();

    MCNAPI_C RequestBuilder(::Bedrock::Http::RequestBuilder const&);

    MCNAPI_C ::Bedrock::Http::RequestBuilder& body(::gsl::span<uchar> const& binaryData);

    MCNAPI_C ::Bedrock::Http::RequestBuilder&
    body(::gsl::not_null<::std::shared_ptr<::Bedrock::Http::Internal::IRequestBody>> body);

    MCNAPI_C ::Bedrock::Http::RequestBuilder& body(::Core::Path const& file);

    MCNAPI_C ::Bedrock::Http::RequestBuilder& body(::Json::Value const& json);

    MCNAPI ::Bedrock::Http::RequestBuilder& body(::std::string const& plainText);

    MCNAPI_C ::Bedrock::Http::RequestBuilder& contentType(::std::string const& contentType);

    MCNAPI_C ::Bedrock::Http::RequestBuilder&
    retryPolicy(::std::function<::std::optional<::std::chrono::seconds>(::Bedrock::Http::Response const&)>&& policy);

    MCNAPI ::Bedrock::Http::RequestBuilder& url(::std::string const& url);

    MCNAPI ~RequestBuilder();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI_C void* $ctor(::Bedrock::Http::RequestBuilder const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Http
