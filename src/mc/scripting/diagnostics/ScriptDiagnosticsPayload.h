#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptDiagnosticsPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 48> mUnk4389a3;
    ::ll::UntypedStorage<8, 32> mUnk66dbe6;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDiagnosticsPayload& operator=(ScriptDiagnosticsPayload const&);
    ScriptDiagnosticsPayload(ScriptDiagnosticsPayload const&);
    ScriptDiagnosticsPayload();
};
