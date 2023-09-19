#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DeserializationChanges {
public:
    // prevent constructor by default
    DeserializationChanges& operator=(DeserializationChanges const&);
    DeserializationChanges(DeserializationChanges const&);
    DeserializationChanges();
};
