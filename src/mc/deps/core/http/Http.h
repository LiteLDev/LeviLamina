#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class LibHttpClientInstance; }
// clang-format on

namespace Bedrock::Http {
// functions
// NOLINTBEGIN
MCAPI ::std::shared_ptr<::Bedrock::Http::LibHttpClientInstance> initializeLibHttpClient();

MCAPI bool isInitialized();
// NOLINTEND

} // namespace Bedrock::Http
