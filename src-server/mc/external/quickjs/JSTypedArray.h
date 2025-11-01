#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSTypedArray {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc6ce55;
    ::ll::UntypedStorage<8, 8>  mUnkb8e76e;
    ::ll::UntypedStorage<8, 8>  mUnk8a1b25;
    ::ll::UntypedStorage<4, 4>  mUnk1fdadc;
    ::ll::UntypedStorage<4, 4>  mUnk78136e;
    // NOLINTEND

public:
    // prevent constructor by default
    JSTypedArray& operator=(JSTypedArray const&);
    JSTypedArray(JSTypedArray const&);
    JSTypedArray();
};
