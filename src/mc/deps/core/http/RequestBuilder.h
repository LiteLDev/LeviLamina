#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
// clang-format on

namespace Bedrock::Http {

class RequestBuilder {
public:
    // prevent constructor by default
    RequestBuilder& operator=(RequestBuilder const&);
    RequestBuilder(RequestBuilder const&);

public:
    // NOLINTBEGIN
    MCAPI class Bedrock::Http::RequestBuilder& POST();

    MCAPI RequestBuilder();

    MCAPI class Bedrock::Http::RequestBuilder&
    addHeader(std::string const& header, std::string const& value, bool ignoreRestrictedHeaderCheck);

    MCAPI class Bedrock::Http::RequestBuilder& body(std::string const& plainText);

    MCAPI class Bedrock::Http::Request& build();

    MCAPI class Bedrock::Http::RequestBuilder& timeout(std::chrono::seconds timeout);

    MCAPI class Bedrock::Http::RequestBuilder& url(std::string const& url);

    MCAPI ~RequestBuilder();

    // NOLINTEND
};

}; // namespace Bedrock::Http
