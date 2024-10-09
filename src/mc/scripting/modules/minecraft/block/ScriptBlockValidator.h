#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockValidator {
public:
    // prevent constructor by default
    ScriptBlockValidator& operator=(ScriptBlockValidator const&);
    ScriptBlockValidator(ScriptBlockValidator const&);
    ScriptBlockValidator();

public:
    // NOLINTBEGIN
    MCAPI std::optional<struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError>
          getChunkAtPositionLoadedAndTickingError();

    MCAPI std::optional<struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
          getPositionWithinWorldBoundsError();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
