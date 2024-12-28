#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovementAttributeEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk29f869;
    ::ll::UntypedStorage<8, 8> mUnk598b90;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementAttributeEntry& operator=(MovementAttributeEntry const&);
    MovementAttributeEntry(MovementAttributeEntry const&);
    MovementAttributeEntry();
};
