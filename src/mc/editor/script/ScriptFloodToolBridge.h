#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptFloodToolBridge : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptFloodToolBridge> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk679318;
    ::ll::UntypedStorage<8, 16> mUnk4e897b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptFloodToolBridge& operator=(ScriptFloodToolBridge const&);
    ScriptFloodToolBridge(ScriptFloodToolBridge const&);
    ScriptFloodToolBridge();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
