#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br {

struct StructureType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf95f8f;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureType& operator=(StructureType const&);
    StructureType(StructureType const&);
    StructureType();

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
