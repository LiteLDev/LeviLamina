#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSCFunctionListEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkdc409f;
    ::ll::UntypedStorage<1, 1>  mUnk804d1b;
    ::ll::UntypedStorage<1, 1>  mUnkc474b0;
    ::ll::UntypedStorage<2, 2>  mUnk80c2ee;
    ::ll::UntypedStorage<8, 16> mUnkaf88cf;
    // NOLINTEND

public:
    // prevent constructor by default
    JSCFunctionListEntry& operator=(JSCFunctionListEntry const&);
    JSCFunctionListEntry(JSCFunctionListEntry const&);
    JSCFunctionListEntry();
};
