#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TextEditScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd348d0;
    ::ll::UntypedStorage<4, 4> mUnk802fcc;
    ::ll::UntypedStorage<1, 1> mUnk18fd36;
    ::ll::UntypedStorage<8, 8> mUnk40c8b8;
    ::ll::UntypedStorage<1, 4> mUnkac1b21;
    ::ll::UntypedStorage<1, 1> mUnkc3e3fc;
    // NOLINTEND

public:
    // prevent constructor by default
    TextEditScreenEventData& operator=(TextEditScreenEventData const&);
    TextEditScreenEventData(TextEditScreenEventData const&);
    TextEditScreenEventData();
};
