#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorApplyDamageByProjectileOptions {

public:
    // prevent constructor by default
    ScriptActorApplyDamageByProjectileOptions(ScriptActorApplyDamageByProjectileOptions const&) = delete;
    ScriptActorApplyDamageByProjectileOptions()                                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?bind\@ScriptActorApplyDamageByProjectileOptions\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@UScriptActorApplyDamageByProjectileOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<
        struct ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions>
    bind();
    /**
     * @symbol ??4ScriptActorApplyDamageByProjectileOptions\@ScriptModuleMinecraft\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions&
    operator=(struct ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions const&);
    /**
     * @symbol ??4ScriptActorApplyDamageByProjectileOptions\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions&
    operator=(struct ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions&&);
    /**
     * @symbol ??8ScriptActorApplyDamageByProjectileOptions\@ScriptModuleMinecraft\@\@QEBA_NAEBU01\@\@Z
     */
    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions const&) const;
    /**
     * @symbol ??1ScriptActorApplyDamageByProjectileOptions\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActorApplyDamageByProjectileOptions();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
