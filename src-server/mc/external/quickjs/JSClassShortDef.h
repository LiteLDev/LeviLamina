#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSClassShortDef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8b8742;
    ::ll::UntypedStorage<8, 8> mUnk21d50b;
    ::ll::UntypedStorage<8, 8> mUnk28aa2b;
    // NOLINTEND

public:
    // prevent constructor by default
    JSClassShortDef& operator=(JSClassShortDef const&);
    JSClassShortDef(JSClassShortDef const&);
    JSClassShortDef();
};
