#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptStructureCreateOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnkf85873;
    ::ll::UntypedStorage<1, 2> mUnka70b23;
    ::ll::UntypedStorage<1, 2> mUnkee778e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptStructureCreateOptions& operator=(ScriptStructureCreateOptions const&);
    ScriptStructureCreateOptions(ScriptStructureCreateOptions const&);
    ScriptStructureCreateOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptStructureCreateOptions> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
