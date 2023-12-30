#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ArgumentDetails {
public:
    // prevent constructor by default
    ArgumentDetails& operator=(ArgumentDetails const&);
    ArgumentDetails();

public:
    // NOLINTBEGIN
    // symbol: ??0ArgumentDetails@Scripting@@QEAA@AEBU01@@Z
    MCAPI ArgumentDetails(struct Scripting::ArgumentDetails const&);

    // symbol: ??1ArgumentDetails@Scripting@@QEAA@XZ
    MCAPI ~ArgumentDetails();

    // NOLINTEND
};

}; // namespace Scripting
