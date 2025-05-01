#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptSpawnRulesRegistry; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptModuleStartupBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7edc14;
    ::ll::UntypedStorage<8, 32> mUnkd5888e;
    ::ll::UntypedStorage<8, 32> mUnk85d31c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptModuleStartupBeforeEvent& operator=(ScriptModuleStartupBeforeEvent const&);
    ScriptModuleStartupBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptModuleStartupBeforeEvent(::ScriptModuleMinecraft::ScriptModuleStartupBeforeEvent const&);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSpawnRulesRegistry>
    _getSpawnRulesRegistry() const;

    MCNAPI ~ScriptModuleStartupBeforeEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptModuleStartupBeforeEvent> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptModuleStartupBeforeEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
