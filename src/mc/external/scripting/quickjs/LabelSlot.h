#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LabelSlot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf24c41;
    ::ll::UntypedStorage<4, 4> mUnk47f13b;
    ::ll::UntypedStorage<4, 4> mUnka61460;
    ::ll::UntypedStorage<4, 4> mUnk7b7265;
    ::ll::UntypedStorage<8, 8> mUnk18d4e2;
    // NOLINTEND

public:
    // prevent constructor by default
    LabelSlot& operator=(LabelSlot const&);
    LabelSlot(LabelSlot const&);
    LabelSlot();
};
