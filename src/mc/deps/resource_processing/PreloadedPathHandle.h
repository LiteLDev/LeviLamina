#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

class PreloadedPathHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka9cf92;
    ::ll::UntypedStorage<8, 16> mUnk40a8fb;
    // NOLINTEND

public:
    // prevent constructor by default
    PreloadedPathHandle& operator=(PreloadedPathHandle const&);
    PreloadedPathHandle(PreloadedPathHandle const&);
    PreloadedPathHandle();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PreloadedPathHandle();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Resources
