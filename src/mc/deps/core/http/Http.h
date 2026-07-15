#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class LibHttpClientInstance; }
// clang-format on

namespace Bedrock::Http {
// functions
// NOLINTBEGIN
MCNAPI ::gsl::not_null<::std::shared_ptr<::Bedrock::Http::LibHttpClientInstance>> getHttpClient();

MCNAPI ::std::string interpretDataAsUtf8String(::gsl::span<uchar const> rawBytes);

MCNAPI bool isInitialized();
// NOLINTEND

} // namespace Bedrock::Http
