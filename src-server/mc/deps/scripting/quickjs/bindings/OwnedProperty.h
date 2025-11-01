#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct OwnedProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkd2cd01;
    ::ll::UntypedStorage<8, 32> mUnk5cd385;
    // NOLINTEND

public:
    // prevent constructor by default
    OwnedProperty& operator=(OwnedProperty const&);
    OwnedProperty(OwnedProperty const&);
    OwnedProperty();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~OwnedProperty();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
