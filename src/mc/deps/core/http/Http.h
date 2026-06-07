#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/ClientErrorCode.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class LibHttpClientInstance; }
// clang-format on

namespace Bedrock::Http {
// functions
// NOLINTBEGIN
MCNAPI ::gsl::not_null<::std::shared_ptr<::Bedrock::Http::LibHttpClientInstance>> getHttpClient();

MCNAPI ::gsl::span<uchar const> getStringDataAsSpan(::std::string const& string);

MCNAPI ::std::string interpretDataAsUtf8String(::gsl::span<uchar const> rawBytes);

MCNAPI bool isInitialized();

MCNAPI ::std::error_code make_error_code(::Bedrock::Http::ClientErrorCode e);
// NOLINTEND

} // namespace Bedrock::Http
