#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DeserializationChanges {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DESERIALIZATIONCHANGES
public:
    DeserializationChanges& operator=(DeserializationChanges const&) = delete;
    DeserializationChanges(DeserializationChanges const&)            = delete;
    DeserializationChanges()                                         = delete;
#endif

public:
};
