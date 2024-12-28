#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TextEditSelectedStateChangeEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk9cfae9;
    ::ll::UntypedStorage<4, 4> mUnk8605bd;
    ::ll::UntypedStorage<1, 1> mUnkb8cbb5;
    // NOLINTEND

public:
    // prevent constructor by default
    TextEditSelectedStateChangeEventData& operator=(TextEditSelectedStateChangeEventData const&);
    TextEditSelectedStateChangeEventData(TextEditSelectedStateChangeEventData const&);
    TextEditSelectedStateChangeEventData();
};
