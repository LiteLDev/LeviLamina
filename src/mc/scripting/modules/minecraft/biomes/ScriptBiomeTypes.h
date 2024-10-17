#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BiomeRegistry;
namespace ScriptModuleMinecraft { class ScriptBiomeType; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBiomeTypes {
public:
    // prevent constructor by default
    ScriptBiomeTypes& operator=(ScriptBiomeTypes const&);
    ScriptBiomeTypes(ScriptBiomeTypes const&);
    ScriptBiomeTypes();

public:
    // NOLINTBEGIN
    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBiomeType>>
          get(std::string const& biomeName, class Scripting::WeakLifetimeScope& scope);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBiomeTypes>
    bind(class Bedrock::NonOwnerPointer<class BiomeRegistry> biomeRegistry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _generateAllBiomeTypeHandles(class Scripting::WeakLifetimeScope& scope);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
