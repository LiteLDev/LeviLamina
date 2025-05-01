#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"
#include "mc/diagnostics/LogLevel.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct CallStack; }
// clang-format on

namespace Bedrock {

class ResultLogger {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    log(::std::optional<::Bedrock::LogLevel> logLevel,
        ::std::optional<::LogAreaID>         logArea,
        ::std::string const&                 error,
        ::Bedrock::CallStack const&          callStack);
    // NOLINTEND
};

} // namespace Bedrock
