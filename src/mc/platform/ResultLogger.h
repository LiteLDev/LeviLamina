#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class LogLevel; }
namespace Bedrock { struct CallStack; }
// clang-format on

namespace Bedrock {

class ResultLogger {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    log(::Bedrock::LogLevel         logLevel,
        ::LogAreaID                 logArea,
        ::std::string const&        error,
        ::Bedrock::CallStack const& callStack);

    MCNAPI static ::std::string noContextString();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::LogLevel const& defaultLogLevel();
    // NOLINTEND
};

} // namespace Bedrock
