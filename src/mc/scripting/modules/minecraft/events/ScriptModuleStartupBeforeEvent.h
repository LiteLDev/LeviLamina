#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilderReadOnly.h"

// auto generated forward declare list
// clang-format off
struct ScriptModuleStartupEvent;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptModuleStartupBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7edc14;
    ::ll::UntypedStorage<8, 32> mUnkd5888e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptModuleStartupBeforeEvent& operator=(ScriptModuleStartupBeforeEvent const&);
    ScriptModuleStartupBeforeEvent(ScriptModuleStartupBeforeEvent const&);
    ScriptModuleStartupBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptModuleStartupBeforeEvent(
        ::ScriptModuleStartupEvent const&     eventData,
        ::Scripting::WeakLifetimeScope const& scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilderReadOnly<::ScriptModuleMinecraft::ScriptModuleStartupBeforeEvent>
    bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleStartupEvent const& eventData, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
