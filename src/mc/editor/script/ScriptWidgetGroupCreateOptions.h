#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/services/widgets/GroupSelectionMode.h"
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace Editor::ScriptModule {

class ScriptWidgetGroupCreateOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnke9b10b;
    ::ll::UntypedStorage<1, 2> mUnk612f93;
    ::ll::UntypedStorage<1, 2> mUnkecd945;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetGroupCreateOptions& operator=(ScriptWidgetGroupCreateOptions const&);
    ScriptWidgetGroupCreateOptions(ScriptWidgetGroupCreateOptions const&);
    ScriptWidgetGroupCreateOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::EnumBindingBuilder<::std::string, ::Editor::Widgets::GroupSelectionMode> bindEnums();

    MCAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptWidgetGroupCreateOptions>
    bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
