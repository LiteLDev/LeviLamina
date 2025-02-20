#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptClipboardItem; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptClipboardService : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptClipboardService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke523df;
    ::ll::UntypedStorage<8, 8>  mUnk673970;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClipboardService& operator=(ScriptClipboardService const&);
    ScriptClipboardService(ScriptClipboardService const&);
    ScriptClipboardService();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptClipboardItem>>
    create();

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptClipboardItem>>
    getPrimaryItem();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptClipboardService> bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
