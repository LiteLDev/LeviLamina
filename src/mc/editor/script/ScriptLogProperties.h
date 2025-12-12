#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptLogProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk727ce9;
    ::ll::UntypedStorage<8, 24> mUnkf73704;
    ::ll::UntypedStorage<1, 2>  mUnk29b767;
    ::ll::UntypedStorage<8, 40> mUnka736b2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLogProperties(ScriptLogProperties const&);
    ScriptLogProperties();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptLogProperties(::Editor::ScriptModule::ScriptLogProperties&&);

    MCNAPI ::Editor::ScriptModule::ScriptLogProperties& operator=(::Editor::ScriptModule::ScriptLogProperties&&);

    MCNAPI ::Editor::ScriptModule::ScriptLogProperties& operator=(::Editor::ScriptModule::ScriptLogProperties const&);

    MCNAPI ~ScriptLogProperties();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();

    MCNAPI static ::Scripting::EnumBinding bindScriptLogChannel();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptLogProperties&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
