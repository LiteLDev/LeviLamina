#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JigsawStructureUtils {

class StructureElementId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~StructureElementId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace JigsawStructureUtils
