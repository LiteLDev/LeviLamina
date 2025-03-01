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
    MCAPI ~StructureType();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace br
