#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/editor/ProjectExportOptions.h"

namespace Editor::ScriptModule {

class ScriptProjectExportOptions : public ::Editor::ProjectExportOptions {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptProjectExportOptions>
    bindInterface();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
