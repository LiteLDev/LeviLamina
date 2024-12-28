#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace Editor::ScriptModule {

class ScriptLogProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk727ce9;
    ::ll::UntypedStorage<8, 24> mUnkf73704;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLogProperties();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptLogProperties(::Editor::ScriptModule::ScriptLogProperties const&);

    MCAPI ::Editor::ScriptModule::ScriptLogProperties& operator=(::Editor::ScriptModule::ScriptLogProperties&&);

    MCAPI ::Editor::ScriptModule::ScriptLogProperties& operator=(::Editor::ScriptModule::ScriptLogProperties const&);

    MCAPI ~ScriptLogProperties();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptLogProperties> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ScriptModule::ScriptLogProperties const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
