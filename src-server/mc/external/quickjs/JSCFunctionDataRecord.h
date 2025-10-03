#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSCFunctionDataRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk45d9bd;
    ::ll::UntypedStorage<1, 1> mUnka4cb19;
    ::ll::UntypedStorage<1, 1> mUnk2ab0cb;
    ::ll::UntypedStorage<2, 2> mUnk1bff32;
    ::ll::UntypedStorage<8, 0> mUnk8274f3;
    // NOLINTEND

public:
    // prevent constructor by default
    JSCFunctionDataRecord& operator=(JSCFunctionDataRecord const&);
    JSCFunctionDataRecord(JSCFunctionDataRecord const&);
    JSCFunctionDataRecord();
};
