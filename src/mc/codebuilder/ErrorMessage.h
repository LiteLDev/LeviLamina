#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MCRESULT;
// clang-format on

namespace CodeBuilder {

struct ErrorMessage {
public:
    // prevent constructor by default
    ErrorMessage& operator=(ErrorMessage const&);
    ErrorMessage(ErrorMessage const&);
    ErrorMessage();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ErrorMessage@CodeBuilder@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMCRESULT@@@Z
    MCAPI ErrorMessage(std::string const& requestId, struct MCRESULT result);

    // symbol:
    // ??0ErrorMessage@CodeBuilder@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMCRESULT@@0@Z
    MCAPI ErrorMessage(std::string const& requestId, struct MCRESULT result, std::string const& message);

    // symbol: ??1ErrorMessage@CodeBuilder@@QEAA@XZ
    MCAPI ~ErrorMessage();

    // NOLINTEND
};

}; // namespace CodeBuilder
