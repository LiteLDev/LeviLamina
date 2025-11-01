#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Keymapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd08007;
    ::ll::UntypedStorage<8, 24> mUnke26c80;
    ::ll::UntypedStorage<1, 1> mUnk5fae17;
    ::ll::UntypedStorage<1, 1> mUnka881be;
    // NOLINTEND

public:
    // prevent constructor by default
    Keymapping& operator=(Keymapping const&);
    Keymapping(Keymapping const&);
    Keymapping();

};
