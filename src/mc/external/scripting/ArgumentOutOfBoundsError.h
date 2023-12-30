#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ArgumentOutOfBoundsError {
public:
    // prevent constructor by default
    ArgumentOutOfBoundsError& operator=(ArgumentOutOfBoundsError const&);
    ArgumentOutOfBoundsError(ArgumentOutOfBoundsError const&);
    ArgumentOutOfBoundsError();

public:
    // NOLINTBEGIN
    // symbol: ??0ArgumentOutOfBoundsError@Scripting@@QEAA@$$QEAU01@@Z
    MCAPI ArgumentOutOfBoundsError(struct Scripting::ArgumentOutOfBoundsError&&);

    // symbol:
    // ??0ArgumentOutOfBoundsError@Scripting@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@NNN@Z
    MCAPI ArgumentOutOfBoundsError(std::string const&, double, double, double);

    // symbol: ??1ArgumentOutOfBoundsError@Scripting@@QEAA@XZ
    MCAPI ~ArgumentOutOfBoundsError();

    // NOLINTEND
};

}; // namespace Scripting
