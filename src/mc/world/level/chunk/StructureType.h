#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br {

struct StructureType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> type;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~StructureType();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace br
