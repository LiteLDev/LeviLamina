#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/ProjectExportType.h"
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"

namespace Editor::ScriptModule {

class ScriptProjectExportType {
public:
    // prevent constructor by default
    ScriptProjectExportType& operator=(ScriptProjectExportType const&);
    ScriptProjectExportType(ScriptProjectExportType const&);
    ScriptProjectExportType();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::EnumBindingBuilder<::Editor::ProjectExportType, ::Editor::ProjectExportType>
    bindScriptEnumsProjectExportType();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
