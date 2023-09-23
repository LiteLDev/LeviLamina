#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    // symbol:
    // ?_hook@ResultLogger@Bedrock@@CAAEAV?$function@$$A6AXW4LogLevel@Bedrock@@W4LogAreaID@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@XZ
    MCAPI static std::function<void(::Bedrock::LogLevel, ::LogAreaID, std::string const&)>& _hook();

    // symbol:
    // ?log@ResultLogger@Bedrock@@CAXV?$optional@W4LogLevel@Bedrock@@@std@@V?$optional@W4LogAreaID@@@4@AEBVerror_code@4@AEBUCallStack@2@@Z
    MCAPI static void
    log(std::optional<::Bedrock::LogLevel>,
        std::optional<::LogAreaID>,
        std::error_code const&,
        struct Bedrock::CallStack const&);

    // NOLINTEND
};

}; // namespace Bedrock
