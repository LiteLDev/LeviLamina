#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

class PrivilegeScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf87478;
    ::ll::UntypedStorage<1, 2> mUnk80be42;
    // NOLINTEND

public:
    // prevent constructor by default
    PrivilegeScope& operator=(PrivilegeScope const&);
    PrivilegeScope(PrivilegeScope const&);
    PrivilegeScope();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PrivilegeScope();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
