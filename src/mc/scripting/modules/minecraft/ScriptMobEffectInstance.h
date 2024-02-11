#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

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
    // symbol: ?getAmplifier@ScriptMobEffectInstance@ScriptModuleMinecraft@@QEBA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getAmplifier() const;

    // symbol:
    // ?getDisplayName@ScriptMobEffectInstance@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::string> getDisplayName() const;

    // symbol:
    // ?getDisplayName_010@ScriptMobEffectInstance@ScriptModuleMinecraft@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getDisplayName_010() const;

    // symbol: ?getDuration@ScriptMobEffectInstance@ScriptModuleMinecraft@@QEBA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getDuration() const;

    // symbol:
    // ?getTypeId@ScriptMobEffectInstance@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::string> getTypeId() const;

    // symbol:
    // ?bind@ScriptMobEffectInstance@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptMobEffectInstance@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMobEffectInstance> bind();

    // symbol:
    // ?getHandle@ScriptMobEffectInstance@ScriptModuleMinecraft@@SA?AV?$StrongTypedObjectHandle@VScriptMobEffectInstance@ScriptModuleMinecraft@@@Scripting@@AEBVActor@@IAEBVWeakLifetimeScope@4@@Z
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMobEffectInstance>
    getHandle(class Actor const& actor, uint, class Scripting::WeakLifetimeScope const& scope);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
