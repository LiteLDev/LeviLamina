#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ButtonScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke297c2;
    ::ll::UntypedStorage<4, 4> mUnk5a3375;
    ::ll::UntypedStorage<1, 1> mUnkb84a3b;
    ::ll::UntypedStorage<1, 1> mUnkea9ec6;
    ::ll::UntypedStorage<1, 1> mUnkc04cad;
    ::ll::UntypedStorage<1, 1> mUnk14545a;
    ::ll::UntypedStorage<8, 8> mUnk5a7fc3;
    ::ll::UntypedStorage<4, 8> mUnk13be11;
    ::ll::UntypedStorage<1, 1> mUnk870c5b;
    ::ll::UntypedStorage<4, 4> mUnk18e9a6;
    // NOLINTEND

public:
    // prevent constructor by default
    ButtonScreenEventData& operator=(ButtonScreenEventData const&);
    ButtonScreenEventData(ButtonScreenEventData const&);
    ButtonScreenEventData();
};
