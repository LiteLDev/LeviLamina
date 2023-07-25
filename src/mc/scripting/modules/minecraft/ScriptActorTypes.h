#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActorType; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorTypes {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTACTORTYPES
public:
    ScriptActorTypes& operator=(ScriptActorTypes const&) = delete;
    ScriptActorTypes(ScriptActorTypes const&)            = delete;
    ScriptActorTypes()                                   = delete;
#endif

public:
    /**
     * @symbol
     * ?get\@ScriptActorTypes\@ScriptModuleMinecraft\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptActorType\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEAVWeakLifetimeScope\@4\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActorType>
    get(class Scripting::WeakLifetimeScope&, std::string const&);
    /**
     * @symbol
     * ?bind\@ScriptActorTypes\@ScriptModuleMinecraft\@\@SAXAEAVModuleBindingBuilder\@Scripting\@\@AEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VActorDefinition\@\@U?$default_delete\@VActorDefinition\@\@\@std\@\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VActorDefinition\@\@U?$default_delete\@VActorDefinition\@\@\@std\@\@\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&, class std::unordered_map<std::string, std::unique_ptr<class ActorDefinition>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::unique_ptr<class ActorDefinition>>>> const&);
};

}; // namespace ScriptModuleMinecraft
