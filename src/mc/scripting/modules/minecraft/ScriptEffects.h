#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptEffectType; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEffects {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTEFFECTS
public:
    ScriptEffects& operator=(ScriptEffects const&) = delete;
    ScriptEffects(ScriptEffects const&)            = delete;
#endif

public:
    /**
     * @symbol ??0ScriptEffects\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ScriptEffects();
    /**
     * @symbol
     * ?_generateAllEffectsHandles\@ScriptEffects\@ScriptModuleMinecraft\@\@QEAAXAEAVWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI void _generateAllEffectsHandles(class Scripting::WeakLifetimeScope&);
    /**
     * @symbol
     * ?get\@ScriptEffects\@ScriptModuleMinecraft\@\@QEAA?AV?$optional\@V?$StrongTypedObjectHandle\@VScriptEffectType\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@AEAVWeakLifetimeScope\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@4\@\@Z
     */
    MCAPI class std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptEffectType>>
    get(class Scripting::WeakLifetimeScope&, std::string const&);
    /**
     * @symbol ?bind\@ScriptEffects\@ScriptModuleMinecraft\@\@SAXAEAVModuleBindingBuilder\@Scripting\@\@\@Z
     */
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&);
    /**
     * @symbol ?bindV010\@ScriptEffects\@ScriptModuleMinecraft\@\@SAXAEAVModuleBindingBuilder\@Scripting\@\@\@Z
     */
    MCAPI static void bindV010(class Scripting::ModuleBindingBuilder&);
};

}; // namespace ScriptModuleMinecraft
