#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

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
    ScriptLogProperties& operator=(ScriptLogProperties const&);
    ScriptLogProperties(ScriptLogProperties const&);
    ScriptLogProperties();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ScriptModule::ScriptLogProperties& operator=(::Editor::ScriptModule::ScriptLogProperties&&);

    MCNAPI ~ScriptLogProperties();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
