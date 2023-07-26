#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ConnectionDefinition {

public:
    // prevent constructor by default
    ConnectionDefinition& operator=(ConnectionDefinition const&) = delete;
    ConnectionDefinition(ConnectionDefinition const&)            = delete;
    ConnectionDefinition()                                       = delete;
};
