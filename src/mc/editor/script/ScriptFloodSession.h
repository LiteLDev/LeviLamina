#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
#include "mc/editor/script/ScriptTaskPromise.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptFloodResult; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptFloodSession : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptFloodSession> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke9f5a3;
    ::ll::UntypedStorage<8, 16> mUnkb954e9;
    ::ll::UntypedStorage<8, 8>  mUnk787e54;
    ::ll::UntypedStorage<8, 16> mUnkc83a59;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptFloodSession& operator=(ScriptFloodSession const&);
    ScriptFloodSession(ScriptFloodSession const&);
    ScriptFloodSession();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _cancelActiveTasks();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
