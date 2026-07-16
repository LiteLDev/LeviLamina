#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptCursorService : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptCursorService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk107f9a;
    ::ll::UntypedStorage<8, 8>  mUnkdd38d7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCursorService& operator=(ScriptCursorService const&);
    ScriptCursorService(ScriptCursorService const&);
    ScriptCursorService();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
