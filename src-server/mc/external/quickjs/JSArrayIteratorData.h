#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSArrayIteratorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkbb2968;
    ::ll::UntypedStorage<4, 4> mUnk3bde11;
    ::ll::UntypedStorage<4, 4> mUnk6071d6;
    // NOLINTEND

public:
    // prevent constructor by default
    JSArrayIteratorData& operator=(JSArrayIteratorData const&);
    JSArrayIteratorData(JSArrayIteratorData const&);
    JSArrayIteratorData();

};
