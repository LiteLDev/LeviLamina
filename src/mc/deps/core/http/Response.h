#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/HeaderCollection.h"
#include "mc/deps/core/http/Status.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http::Internal { class IResponseBody; }
namespace Json { class Value; }
// clang-format on

namespace Bedrock::Http {

class Response {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::Bedrock::Http::HeaderCollection>                                            mHeaders;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::Bedrock::Http::Internal::IResponseBody>>> mBody;
    ::ll::TypedStorage<8, 24, ::Bedrock::Http::Status>                                                      mStatus;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    Response(Response const&);
    Response();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::gsl::span<uchar const> getBodyAsBytes() const;
#endif

    MCNAPI ::Json::Value getBodyAsJson() const;

    MCAPI ::std::string getBodyAsUtf8String() const;

#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Http::Response& operator=(::Bedrock::Http::Response const&);
#endif

    MCAPI ~Response();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Http
