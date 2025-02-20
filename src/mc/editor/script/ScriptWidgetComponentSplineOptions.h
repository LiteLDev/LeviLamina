#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/editor/script/ScriptWidgetComponentBaseOptions.h"

namespace Editor::ScriptModule {

class ScriptWidgetComponentSplineOptions : public ::Editor::ScriptModule::ScriptWidgetComponentBaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk75885b;
    ::ll::UntypedStorage<4, 8>  mUnk9e33a0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentSplineOptions& operator=(ScriptWidgetComponentSplineOptions const&);
    ScriptWidgetComponentSplineOptions(ScriptWidgetComponentSplineOptions const&);
    ScriptWidgetComponentSplineOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Editor::ScriptModule::ScriptWidgetComponentSplineOptions&
    operator=(::Editor::ScriptModule::ScriptWidgetComponentSplineOptions&&);

    MCAPI ~ScriptWidgetComponentSplineOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptWidgetComponentSplineOptions>
    bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
