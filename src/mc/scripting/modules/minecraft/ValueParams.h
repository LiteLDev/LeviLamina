#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ValueParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk54e479;
    ::ll::UntypedStorage<1, 1>  mUnk8ea399;
    ::ll::UntypedStorage<4, 4>  mUnkee7dea;
    ::ll::UntypedStorage<4, 4>  mUnk8d6f67;
    ::ll::UntypedStorage<1, 1>  mUnk6addb5;
    ::ll::UntypedStorage<1, 1>  mUnk2141d1;
    ::ll::UntypedStorage<8, 32> mUnk16d32c;
    // NOLINTEND

public:
    // prevent constructor by default
    ValueParams& operator=(ValueParams const&);
    ValueParams(ValueParams const&);
    ValueParams();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ValueParams();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
