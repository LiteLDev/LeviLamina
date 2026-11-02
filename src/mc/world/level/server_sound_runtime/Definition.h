#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerSoundRuntime {

struct Definition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk205885;
    ::ll::UntypedStorage<8, 24>  mUnk248cf3;
    ::ll::UntypedStorage<8, 208> mUnk84dfaf;
    ::ll::UntypedStorage<8, 72>  mUnk47679d;
    ::ll::UntypedStorage<4, 8>   mUnkf8284a;
    ::ll::UntypedStorage<8, 16>  mUnk85d9cf;
    // NOLINTEND

public:
    // prevent constructor by default
    Definition& operator=(Definition const&);
    Definition(Definition const&);
    Definition();
};

} // namespace ServerSoundRuntime
