#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ButtonEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8dd186;
    ::ll::UntypedStorage<1, 1> mUnk206f43;
    ::ll::UntypedStorage<1, 1> mUnk384143;
    ::ll::UntypedStorage<4, 4> mUnk89a51e;
    ::ll::UntypedStorage<4, 4> mUnk753300;
    // NOLINTEND

public:
    // prevent constructor by default
    ButtonEventData& operator=(ButtonEventData const&);
    ButtonEventData(ButtonEventData const&);
    ButtonEventData();
};
