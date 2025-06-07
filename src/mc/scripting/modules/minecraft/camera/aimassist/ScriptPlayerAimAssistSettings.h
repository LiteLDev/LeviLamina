#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

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
    MCNAPI ::ScriptModuleMinecraft::ScriptPlayerAimAssistSettings&
    operator=(::ScriptModuleMinecraft::ScriptPlayerAimAssistSettings&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptPlayerAimAssistSettings&
    operator=(::ScriptModuleMinecraft::ScriptPlayerAimAssistSettings const&);

    MCNAPI ~ScriptPlayerAimAssistSettings();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
