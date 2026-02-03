#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockValidator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource const&> mBlockSource;
    ::ll::TypedStorage<4, 12, ::BlockPos const>    mPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockValidator& operator=(ScriptBlockValidator const&);
    ScriptBlockValidator(ScriptBlockValidator const&);
    ScriptBlockValidator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError>
    getChunkAtPositionLoadedAndTickingError();

    MCAPI ::std::optional<::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getPositionWithinWorldBoundsError();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
