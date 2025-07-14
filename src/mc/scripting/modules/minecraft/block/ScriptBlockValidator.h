#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockValidator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk63d84c;
    ::ll::UntypedStorage<4, 12> mUnka50b5c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockValidator& operator=(ScriptBlockValidator const&);
    ScriptBlockValidator(ScriptBlockValidator const&);
    ScriptBlockValidator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getPositionWithinWorldBoundsError();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
