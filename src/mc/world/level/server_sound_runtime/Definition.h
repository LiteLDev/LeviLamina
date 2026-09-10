#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerSoundRuntime {

struct Definition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk205885;
    ::ll::UntypedStorage<8, 24>  mUnk248cf3;
    ::ll::UntypedStorage<8, 152> mUnk84dfaf;
    ::ll::UntypedStorage<8, 72>  mUnk47679d;
    // NOLINTEND

public:
    // prevent constructor by default
    Definition& operator=(Definition const&);
    Definition(Definition const&);
    Definition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Definition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ServerSoundRuntime
