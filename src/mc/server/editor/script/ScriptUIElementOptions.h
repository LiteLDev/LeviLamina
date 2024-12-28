#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace Editor::ScriptModule {

class ScriptUIElementOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnk6cde58;
    ::ll::UntypedStorage<4, 8>  mUnk4b5361;
    ::ll::UntypedStorage<8, 32> mUnk9cc86d;
    ::ll::UntypedStorage<1, 2>  mUnk26eec2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptUIElementOptions& operator=(ScriptUIElementOptions const&);
    ScriptUIElementOptions(ScriptUIElementOptions const&);
    ScriptUIElementOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptUIElementOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptUIElementOptions> bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
