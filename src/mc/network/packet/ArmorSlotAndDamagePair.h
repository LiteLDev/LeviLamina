#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ArmorSlotAndDamagePair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk46e196;
    ::ll::UntypedStorage<2, 2> mUnk6e6712;
    // NOLINTEND

public:
    // prevent constructor by default
    ArmorSlotAndDamagePair& operator=(ArmorSlotAndDamagePair const&);
    ArmorSlotAndDamagePair(ArmorSlotAndDamagePair const&);
    ArmorSlotAndDamagePair();
};
