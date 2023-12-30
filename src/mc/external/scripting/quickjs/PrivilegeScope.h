#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

class PrivilegeScope {
public:
    // prevent constructor by default
    PrivilegeScope& operator=(PrivilegeScope const&);
    PrivilegeScope(PrivilegeScope const&);
    PrivilegeScope();

public:
    // NOLINTBEGIN
    // symbol: ??1PrivilegeScope@QuickJS@Scripting@@QEAA@XZ
    MCAPI ~PrivilegeScope();

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
