#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Dimension;
namespace ScriptModuleMinecraft { class ScriptDimensionType; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDimensionTypes {
public:
    // prevent constructor by default
    ScriptDimensionTypes& operator=(ScriptDimensionTypes const&);
    ScriptDimensionTypes(ScriptDimensionTypes const&);
    ScriptDimensionTypes();

public:
    // NOLINTBEGIN
    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimensionType>>
          get(class Scripting::WeakLifetimeScope scope, std::string const& identifier);

    MCAPI static std::unordered_map<std::string, std::string> _getDimensionStringNames();

    MCAPI static void bind(class Scripting::ModuleBindingBuilder& moduleBuilder);

    MCAPI static DimensionType fromString(std::string const& name);

    MCAPI static std::string toString(DimensionType const& type);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void registerTypes(class Scripting::WeakLifetimeScope scope);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::string const sMinecraftNamespace;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
