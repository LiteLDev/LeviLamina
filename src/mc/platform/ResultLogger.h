#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"
#include "mc/diagnostics/LogLevel.h"
#include "mc/platform/brstd/copyable_function.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct CallStack; }
// clang-format on

namespace Bedrock {

class ResultLogger {
public:
    // prevent constructor by default
    ResultLogger& operator=(ResultLogger const&);
    ResultLogger(ResultLogger const&);
    ResultLogger();

    // private:
    // NOLINTBEGIN
    MCAPI static class brstd::copyable_function<void(::Bedrock::LogLevel, ::LogAreaID, std::string const&)>& _hook();

    MCAPI static void
    log(std::optional<::Bedrock::LogLevel> logLevel,
        std::optional<::LogAreaID>         logArea,
        std::string const&                 error,
        struct Bedrock::CallStack const&   callStack);

    // NOLINTEND
};

}; // namespace Bedrock
