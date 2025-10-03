#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSGlobalVar {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc82d98;
    uchar                      mUnkbc52c4 : 1;
    uchar                      mUnkfffd13 : 1;
    uchar                      mUnk7be47e : 1;
    ::ll::UntypedStorage<4, 4> mUnk9e7969;
    ::ll::UntypedStorage<4, 4> mUnka12346;
    // NOLINTEND

public:
    // prevent constructor by default
    JSGlobalVar& operator=(JSGlobalVar const&);
    JSGlobalVar(JSGlobalVar const&);
    JSGlobalVar();
};
