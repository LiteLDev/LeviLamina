#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

struct JigsawSpace {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnk262cb0;
    ::ll::UntypedStorage<8, 24> mUnkce1057;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawSpace& operator=(JigsawSpace const&);
    JigsawSpace(JigsawSpace const&);
    JigsawSpace();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~JigsawSpace();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
