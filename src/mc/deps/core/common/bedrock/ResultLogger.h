#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { enum class LogLevel; }
namespace Bedrock { struct CallStack; }
// clang-format on

namespace Bedrock {

class ResultLogger {

public:
    // prevent constructor by default
    ResultLogger& operator=(ResultLogger const&) = delete;
    ResultLogger(ResultLogger const&)            = delete;
    ResultLogger()                               = delete;

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_logger\@ResultLogger\@Bedrock\@\@CAAEAV?$function\@$$A6AXV?$optional\@W4LogLevel\@Bedrock\@\@\@std\@\@V?$optional\@I\@2\@AEBVerror_code\@2\@AEBUCallStack\@Bedrock\@\@\@Z\@std\@\@XZ
     */
    MCAPI static std::function<
        void(std::optional<enum class Bedrock::LogLevel>, std::optional<unsigned int>, std::error_code const&, struct Bedrock::CallStack const&)>&
    _logger();
    /**
     * @symbol
     * ?log\@ResultLogger\@Bedrock\@\@CAXV?$optional\@W4LogLevel\@Bedrock\@\@\@std\@\@V?$optional\@I\@4\@AEBVerror_code\@4\@AEBUCallStack\@2\@\@Z
     */
    MCAPI static void
    log(std::optional<enum class Bedrock::LogLevel>,
        std::optional<unsigned int>,
        std::error_code const&,
        struct Bedrock::CallStack const&);
    // NOLINTEND
};

}; // namespace Bedrock
