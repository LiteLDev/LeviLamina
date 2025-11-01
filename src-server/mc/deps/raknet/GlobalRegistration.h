#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GlobalRegistration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb29d96;
    ::ll::UntypedStorage<8, 8> mUnkac5164;
    ::ll::UntypedStorage<1, 48> mUnk4034d8;
    ::ll::UntypedStorage<1, 1> mUnkcbd3b9;
    ::ll::UntypedStorage<4, 4> mUnk2afe7d;
    // NOLINTEND

public:
    // prevent constructor by default
    GlobalRegistration& operator=(GlobalRegistration const&);
    GlobalRegistration(GlobalRegistration const&);
    GlobalRegistration();

};
