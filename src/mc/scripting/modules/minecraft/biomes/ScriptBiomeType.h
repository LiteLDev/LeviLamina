#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Biome;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBiomeType {
public:
    // prevent constructor by default
    ScriptBiomeType& operator=(ScriptBiomeType const&);
    ScriptBiomeType(ScriptBiomeType const&);
    ScriptBiomeType();

public:
    // NOLINTBEGIN
    MCAPI std::string getId() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBiomeType> bind();

    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBiomeType>
    getOrCreateHandle(class Biome const& biome, class Scripting::WeakLifetimeScope const& scope);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
