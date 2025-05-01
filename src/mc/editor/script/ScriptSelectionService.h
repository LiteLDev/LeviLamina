#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptSelectionContainer; }
namespace Editor::ScriptModule { struct ScriptPrimarySelectionChangedEvent; }
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
    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptSelectionContainer>>
    createContainer();

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptSelectionContainer>>
    getPrimaryContainer();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptSelectionService> bindScript();

    MCNAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptPrimarySelectionChangedEvent>
    bindSelectionEvent();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
