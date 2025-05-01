#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilderReadOnly.h"
#include "mc/deps/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/editor/script/ScriptWidgetMouseButtonEventType.h"

namespace Editor::ScriptModule {

class ScriptWidgetMouseButtonEventParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdb0ccb;
    ::ll::UntypedStorage<1, 1> mUnk59e446;
    ::ll::UntypedStorage<1, 1> mUnk6df1b9;
    ::ll::UntypedStorage<1, 1> mUnk202c79;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetMouseButtonEventParameters& operator=(ScriptWidgetMouseButtonEventParameters const&);
    ScriptWidgetMouseButtonEventParameters(ScriptWidgetMouseButtonEventParameters const&);
    ScriptWidgetMouseButtonEventParameters();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilderReadOnly<
        ::Editor::ScriptModule::ScriptWidgetMouseButtonEventParameters>
    bindScript();

    MCNAPI static ::Scripting::EnumBindingBuilder<
        ::Editor::ScriptModule::ScriptWidgetMouseButtonEventType,
        ::Editor::ScriptModule::ScriptWidgetMouseButtonEventType>
    bindScriptEnum();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
