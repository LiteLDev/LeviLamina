#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ConnectionDefinition {
public:
    // prevent constructor by default
    ConnectionDefinition& operator=(ConnectionDefinition const&);
    ConnectionDefinition(ConnectionDefinition const&);
    ConnectionDefinition();
};
