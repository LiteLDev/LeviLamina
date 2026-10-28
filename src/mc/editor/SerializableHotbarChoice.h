#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct SerializableHotbarChoice {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk9c8976;
    ::ll::UntypedStorage<4, 4>  mUnk42766f;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializableHotbarChoice& operator=(SerializableHotbarChoice const&);
    SerializableHotbarChoice(SerializableHotbarChoice const&);
    SerializableHotbarChoice();
};

} // namespace Editor
