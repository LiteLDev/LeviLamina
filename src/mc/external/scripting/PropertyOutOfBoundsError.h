#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct PropertyOutOfBoundsError {
public:
    // prevent constructor by default
    PropertyOutOfBoundsError& operator=(PropertyOutOfBoundsError const&);
    PropertyOutOfBoundsError(PropertyOutOfBoundsError const&);
    PropertyOutOfBoundsError();

public:
    // NOLINTBEGIN
    // symbol: ??0PropertyOutOfBoundsError@Scripting@@QEAA@$$QEAU01@@Z
    MCAPI PropertyOutOfBoundsError(struct Scripting::PropertyOutOfBoundsError&&);

    // symbol:
    // ??0PropertyOutOfBoundsError@Scripting@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@NNN@Z
    MCAPI PropertyOutOfBoundsError(std::string const&, double, double, double);

    // symbol: ??1PropertyOutOfBoundsError@Scripting@@QEAA@XZ
    MCAPI ~PropertyOutOfBoundsError();

    // NOLINTEND
};

}; // namespace Scripting
