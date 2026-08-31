#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptClipboardService : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptClipboardService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke523df;
    ::ll::UntypedStorage<8, 16> mUnka84e2c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClipboardService& operator=(ScriptClipboardService const&);
    ScriptClipboardService(ScriptClipboardService const&);
    ScriptClipboardService();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
