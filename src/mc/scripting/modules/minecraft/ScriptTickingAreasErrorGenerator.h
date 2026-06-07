#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptTickingAreaError; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptTickingAreasErrorGenerator {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ScriptModuleMinecraft::ScriptTickingAreaError
    createIdentifierAlreadyExistsError(::std::string const& identifier);

    MCAPI static ::ScriptModuleMinecraft::ScriptTickingAreaError
    createOverChunkLimitError(::std::string const& identifier, int chunkMaxCount);

    MCAPI static ::ScriptModuleMinecraft::ScriptTickingAreaError
    createSideLengthExceededError(int chunkLengthX, int chunkLengthZ, int maxChunkLength);

    MCAPI static ::ScriptModuleMinecraft::ScriptTickingAreaError
    createUnknownIdentifierError(::std::string const& identifier);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
