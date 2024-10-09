#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMobEffectInstance {
public:
    // prevent constructor by default
    ScriptMobEffectInstance& operator=(ScriptMobEffectInstance const&);
    ScriptMobEffectInstance(ScriptMobEffectInstance const&);
    ScriptMobEffectInstance();

public:
    // NOLINTBEGIN
    MCAPI class Scripting::Result<int> getAmplifier() const;

    MCAPI class Scripting::Result<std::string> getDisplayName() const;

    MCAPI std::string getDisplayName_010() const;

    MCAPI class Scripting::Result<int> getDuration() const;

    MCAPI class Scripting::Result<std::string> getTypeId() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMobEffectInstance> bind();

    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMobEffectInstance>
    getHandle(class Actor const& actor, uint effectIdx, class Scripting::WeakLifetimeScope const& scope);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
