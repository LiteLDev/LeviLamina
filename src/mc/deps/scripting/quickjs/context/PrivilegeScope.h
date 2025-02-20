#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

class PrivilegeScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5e29bd;
    ::ll::UntypedStorage<4, 8> mUnk80be42;
    // NOLINTEND

public:
    // prevent constructor by default
    PrivilegeScope& operator=(PrivilegeScope const&);
    PrivilegeScope(PrivilegeScope const&);
    PrivilegeScope();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PrivilegeScope();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
