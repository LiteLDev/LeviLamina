#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilderReadOnly.h"

namespace Editor::ScriptModule {

class ScriptWidgetComponentStateChangeEventParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk52c8aa;
    ::ll::UntypedStorage<8, 32> mUnk1c4119;
    ::ll::UntypedStorage<8, 32> mUnk560588;
    ::ll::UntypedStorage<1, 2>  mUnk5cdc3c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentStateChangeEventParameters& operator=(ScriptWidgetComponentStateChangeEventParameters const&);
    ScriptWidgetComponentStateChangeEventParameters(ScriptWidgetComponentStateChangeEventParameters const&);
    ScriptWidgetComponentStateChangeEventParameters();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptWidgetComponentStateChangeEventParameters();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilderReadOnly<
        ::Editor::ScriptModule::ScriptWidgetComponentStateChangeEventParameters>
    bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
