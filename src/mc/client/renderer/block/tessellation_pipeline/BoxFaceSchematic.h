#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

struct BoxFaceSchematic {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk7a0cb6;
    ::ll::UntypedStorage<1, 1>  mUnke16efe;
    ::ll::UntypedStorage<4, 32> mUnkb9914a;
    ::ll::UntypedStorage<1, 1>  mUnk83b12f;
    ::ll::UntypedStorage<4, 4>  mUnkebae9f;
    // NOLINTEND

public:
    // prevent constructor by default
    BoxFaceSchematic& operator=(BoxFaceSchematic const&);
    BoxFaceSchematic(BoxFaceSchematic const&);
    BoxFaceSchematic();
};

} // namespace ClientBlockPipeline
