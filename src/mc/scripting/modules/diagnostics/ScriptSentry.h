#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleDiagnostics { struct ScriptSentryAlreadyInitializedError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleDiagnostics {

class ScriptSentry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7775fc;
    ::ll::UntypedStorage<8, 8>  mUnk5a47a0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSentry& operator=(ScriptSentry const&);
    ScriptSentry(ScriptSentry const&);
    ScriptSentry();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics
