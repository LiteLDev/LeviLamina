#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockTypes {
public:
    // prevent constructor by default
    ScriptBlockTypes& operator=(ScriptBlockTypes const&);
    ScriptBlockTypes(ScriptBlockTypes const&);
    ScriptBlockTypes();

public:
    // NOLINTBEGIN
    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>>
          get(class Scripting::WeakLifetimeScope& scope, std::string const& blockName);

    MCAPI std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>>
          getAllBlockTypes(class Scripting::WeakLifetimeScope& scope);

    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>>
          get_V010(class Scripting::WeakLifetimeScope& scope, std::string const& blockName);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockTypes> bind();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockTypes> bind_V010();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _generateAllBlockHandles(class Scripting::WeakLifetimeScope& scope);

    MCAPI void _registerBlockTypeAlias(
        std::string                                                                            blockName,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType> blockHandle
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
