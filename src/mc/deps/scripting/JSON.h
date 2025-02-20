#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct JSON {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3b49ec;
    // NOLINTEND

public:
    // prevent constructor by default
    JSON(JSON const&);
    JSON();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::Scripting::JSON& operator=(::Scripting::JSON const&);

    MCFOLD ::Scripting::JSON& operator=(::Scripting::JSON&&);

    MCAPI ~JSON();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Scripting
