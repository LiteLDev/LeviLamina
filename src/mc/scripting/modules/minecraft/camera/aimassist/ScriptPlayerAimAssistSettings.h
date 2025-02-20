#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerAimAssistSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk680e7f;
    ::ll::UntypedStorage<4, 12> mUnk7faab5;
    ::ll::UntypedStorage<4, 8>  mUnk87c1e6;
    ::ll::UntypedStorage<1, 2>  mUnke263f3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerAimAssistSettings(ScriptPlayerAimAssistSettings const&);
    ScriptPlayerAimAssistSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptPlayerAimAssistSettings&
    operator=(::ScriptModuleMinecraft::ScriptPlayerAimAssistSettings&&);

    MCAPI ::ScriptModuleMinecraft::ScriptPlayerAimAssistSettings&
    operator=(::ScriptModuleMinecraft::ScriptPlayerAimAssistSettings const&);

    MCAPI ~ScriptPlayerAimAssistSettings();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptPlayerAimAssistSettings> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
