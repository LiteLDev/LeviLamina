#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSClosureVar {
public:
    // member variables
    // NOLINTBEGIN
    uchar mUnk195fc1 : 1;
    uchar mUnkf364b3 : 1;
    uchar mUnk8aa043 : 1;
    uchar mUnkb7a6db : 1;
    uchar mUnke61eb6 : 4;
    ::ll::UntypedStorage<2, 2> mUnk643577;
    ::ll::UntypedStorage<4, 4> mUnkf2e145;
    // NOLINTEND

public:
    // prevent constructor by default
    JSClosureVar& operator=(JSClosureVar const&);
    JSClosureVar(JSClosureVar const&);
    JSClosureVar();

};
