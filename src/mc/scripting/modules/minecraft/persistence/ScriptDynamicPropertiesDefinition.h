#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/world/persistence/DynamicPropertiesDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDynamicPropertiesDefinition
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::DynamicPropertiesDefinition>  mDefinition;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
