#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptClipboardItem; }
namespace Editor::Services { class ClipboardServiceProvider; }
namespace Scripting { class WeakLifetimeScope; }
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
    MCAPI ScriptClipboardService(
        ::Editor::Services::ClipboardServiceProvider& provider,
        ::Scripting::WeakLifetimeScope const&         scope
    );

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

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void*
    $ctor(::Editor::Services::ClipboardServiceProvider& provider, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace Editor::ScriptModule
