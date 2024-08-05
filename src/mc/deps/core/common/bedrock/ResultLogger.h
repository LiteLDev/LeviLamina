#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/brstd/copyable_function.h"
#include "mc/deps/core/common/bedrock/LogLevel.h"
#include "mc/enums/LogAreaID.h"

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
    log(std::optional<::Bedrock::LogLevel>,
        std::optional<::LogAreaID>,
        std::string const&,
        struct Bedrock::CallStack const&);

    // NOLINTEND
};

}; // namespace Bedrock
