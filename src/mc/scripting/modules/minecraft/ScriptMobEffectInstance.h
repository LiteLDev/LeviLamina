#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMobEffectInstance {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTMOBEFFECTINSTANCE
public:
    ScriptMobEffectInstance& operator=(ScriptMobEffectInstance const&) = delete;
    ScriptMobEffectInstance(ScriptMobEffectInstance const&)            = delete;
    ScriptMobEffectInstance()                                          = delete;
#endif

public:
    /**
     * @symbol ?getAmplifier\@ScriptMobEffectInstance\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getAmplifier() const;
    /**
     * @symbol
     * ?getDisplayName\@ScriptMobEffectInstance\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<std::string> getDisplayName() const;
    /**
     * @symbol
     * ?getDisplayName_010\@ScriptMobEffectInstance\@ScriptModuleMinecraft\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDisplayName_010() const;
    /**
     * @symbol ?getDuration\@ScriptMobEffectInstance\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getDuration() const;
    /**
     * @symbol
     * ?getTypeId\@ScriptMobEffectInstance\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<std::string> getTypeId() const;
    /**
     * @symbol ??4ScriptMobEffectInstance\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptMobEffectInstance&
    operator=(class ScriptModuleMinecraft::ScriptMobEffectInstance&&);
    /**
     * @symbol
     * ?bind\@ScriptMobEffectInstance\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptMobEffectInstance\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMobEffectInstance> bind();
    /**
     * @symbol
     * ?getHandle\@ScriptMobEffectInstance\@ScriptModuleMinecraft\@\@SA?AV?$StrongTypedObjectHandle\@VScriptMobEffectInstance\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEBVActor\@\@IAEBVWeakLifetimeScope\@4\@\@Z
     */
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMobEffectInstance>
    getHandle(class Actor const&, unsigned int, class Scripting::WeakLifetimeScope const&);
};

}; // namespace ScriptModuleMinecraft
