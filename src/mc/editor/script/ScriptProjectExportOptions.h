#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/ProjectExportOptions.h"
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace Editor::ScriptModule {

class ScriptProjectExportOptions : public ::Editor::ProjectExportOptions {
public:
    // prevent constructor by default
    ScriptProjectExportOptions& operator=(ScriptProjectExportOptions const&);
    ScriptProjectExportOptions(ScriptProjectExportOptions const&);
    ScriptProjectExportOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptProjectExportOptions>
    bindInterface();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
