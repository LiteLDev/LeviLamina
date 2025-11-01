#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptClipboardItem; }
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
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptClipboardItem>> create();

    MCNAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptClipboardItem>> getPrimaryItem();

    MCNAPI ::Editor::ScriptModule::ScriptClipboardService& operator=(::Editor::ScriptModule::ScriptClipboardService&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

};

}
