#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptSelectionContainer; }
namespace Editor::ScriptModule { struct ScriptPrimarySelectionChangedEvent; }
namespace Editor::Services { class SelectionServiceProvider; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptSelectionService : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptSelectionService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkcd03d3;
    ::ll::UntypedStorage<8, 8>  mUnk658c12;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSelectionService& operator=(ScriptSelectionService const&);
    ScriptSelectionService(ScriptSelectionService const&);
    ScriptSelectionService();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptSelectionService(::Editor::ScriptModule::ScriptSelectionService&&);

    MCAPI ScriptSelectionService(
        ::Editor::Services::SelectionServiceProvider* selectionServiceProvider,
        ::Scripting::WeakLifetimeScope const&         scope
    );

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptSelectionContainer>>
    createContainer();

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptSelectionContainer>>
    getPrimaryContainer();

    MCFOLD ::Editor::ScriptModule::ScriptSelectionService& operator=(::Editor::ScriptModule::ScriptSelectionService&&);

    MCAPI ~ScriptSelectionService();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptSelectionService> bindScript();

    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptPrimarySelectionChangedEvent>
    bindSelectionEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ScriptModule::ScriptSelectionService&&);

    MCFOLD void* $ctor(
        ::Editor::Services::SelectionServiceProvider* selectionServiceProvider,
        ::Scripting::WeakLifetimeScope const&         scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
