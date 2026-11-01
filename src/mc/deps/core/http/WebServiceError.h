#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/Response.h"

namespace Bedrock::Http {

struct WebServiceError : public ::std::variant<::std::error_code, ::Bedrock::Http::Response> {};

} // namespace Bedrock::Http
