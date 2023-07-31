#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorApplyDamageOptions {

public:
    // prevent constructor by default
    ScriptActorApplyDamageOptions(ScriptActorApplyDamageOptions const&) = delete;
    ScriptActorApplyDamageOptions()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?bind\@ScriptActorApplyDamageOptions\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@UScriptActorApplyDamageOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptActorApplyDamageOptions>
    bind();
    /**
     * @symbol ??4ScriptActorApplyDamageOptions\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptActorApplyDamageOptions&
    operator=(struct ScriptModuleMinecraft::ScriptActorApplyDamageOptions&&);
    /**
     * @symbol ??4ScriptActorApplyDamageOptions\@ScriptModuleMinecraft\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptActorApplyDamageOptions&
    operator=(struct ScriptModuleMinecraft::ScriptActorApplyDamageOptions const&);
    /**
     * @symbol ??8ScriptActorApplyDamageOptions\@ScriptModuleMinecraft\@\@QEBA_NAEBU01\@\@Z
     */
    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptActorApplyDamageOptions const&) const;
    /**
     * @symbol ??1ScriptActorApplyDamageOptions\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActorApplyDamageOptions();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
