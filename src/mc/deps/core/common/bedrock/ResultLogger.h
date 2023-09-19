#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/LogLevel.h"

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
    // symbol:
    // ?_logger@ResultLogger@Bedrock@@CAAEAV?$function@$$A6AXV?$optional@W4LogLevel@Bedrock@@@std@@V?$optional@I@2@AEBVerror_code@2@AEBUCallStack@Bedrock@@@Z@std@@XZ
    MCAPI static std::function<
        void(std::optional<::Bedrock::LogLevel>, std::optional<uint>, std::error_code const&, struct Bedrock::CallStack const&)>&
    _logger();

    // symbol:
    // ?log@ResultLogger@Bedrock@@CAXV?$optional@W4LogLevel@Bedrock@@@std@@V?$optional@I@4@AEBVerror_code@4@AEBUCallStack@2@@Z
    MCAPI static void
    log(std::optional<::Bedrock::LogLevel>,
        std::optional<uint>,
        std::error_code const&,
        struct Bedrock::CallStack const&);

    // NOLINTEND
};

}; // namespace Bedrock
