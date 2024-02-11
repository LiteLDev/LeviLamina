#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct InvalidArgumentError {
public:
    // prevent constructor by default
    InvalidArgumentError& operator=(InvalidArgumentError const&);
    InvalidArgumentError(InvalidArgumentError const&);
    InvalidArgumentError();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0InvalidArgumentError@Scripting@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI InvalidArgumentError(std::string const&, int);

    // symbol: ??1InvalidArgumentError@Scripting@@QEAA@XZ
    MCAPI ~InvalidArgumentError();

    // NOLINTEND
};

}; // namespace Scripting
