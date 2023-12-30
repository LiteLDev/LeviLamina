#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ContextConfig {
public:
    // prevent constructor by default
    ContextConfig& operator=(ContextConfig const&);
    ContextConfig();

public:
    // NOLINTBEGIN
    // symbol: ??0ContextConfig@Scripting@@QEAA@$$QEAU01@@Z
    MCAPI ContextConfig(struct Scripting::ContextConfig&&);

    // symbol: ??0ContextConfig@Scripting@@QEAA@AEBU01@@Z
    MCAPI ContextConfig(struct Scripting::ContextConfig const&);

    // symbol: ??4ContextConfig@Scripting@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct Scripting::ContextConfig& operator=(struct Scripting::ContextConfig&&);

    // symbol: ??1ContextConfig@Scripting@@QEAA@XZ
    MCAPI ~ContextConfig();

    // NOLINTEND
};

}; // namespace Scripting
