#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DeserializationChanges {

public:
    // prevent constructor by default
    DeserializationChanges& operator=(DeserializationChanges const&) = delete;
    DeserializationChanges(DeserializationChanges const&)            = delete;
    DeserializationChanges()                                         = delete;
};
