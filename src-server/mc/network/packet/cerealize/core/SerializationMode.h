#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SerializationMode : int {
    ManualOnly = 0,
    SideBySideLogOnMismatch = 1,
    SideBySideAssertOnMismatch = 2,
    SemanticSideBySideLogOnMismatch = 3,
    SemanticSideBySideAssertOnMismatch = 4,
    CerealOnly = 5,
};
