#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct JSON {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbbc95f;
    // NOLINTEND

public:
    // prevent constructor by default
    JSON& operator=(JSON const&);
    JSON(JSON const&);
    JSON();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~JSON();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
