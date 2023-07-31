#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ItemRegistryRef;
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItems {

public:
    // prevent constructor by default
    ScriptItems& operator=(ScriptItems const&) = delete;
    ScriptItems(ScriptItems const&)            = delete;
    ScriptItems()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?add\@ScriptItems\@ScriptModuleMinecraft\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptItemType\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEAVWeakLifetimeScope\@4\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>
    add(class Scripting::WeakLifetimeScope&, std::string const&, bool);
    /**
     * @symbol
     * ?bind\@ScriptItems\@ScriptModuleMinecraft\@\@SAXAEAVModuleBindingBuilder\@Scripting\@\@VItemRegistryRef\@\@\@Z
     */
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&, class ItemRegistryRef);
    /**
     * @symbol
     * ?get\@ScriptItems\@ScriptModuleMinecraft\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptItemType\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType> get(std::string const&);
    /**
     * @symbol
     * ?getBetaItem\@ScriptItems\@ScriptModuleMinecraft\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptItemType\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>
    getBetaItem(std::string const&);
    /**
     * @symbol
     * ?getItemTypeHandle\@ScriptItems\@ScriptModuleMinecraft\@\@SA?AV?$StrongTypedObjectHandle\@VScriptItemType\@ScriptModuleMinecraft\@\@\@Scripting\@\@VWeakLifetimeScope\@4\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>
    getItemTypeHandle(class Scripting::WeakLifetimeScope, std::string const&);
    /**
     * @symbol
     * ?registerCustomItems\@ScriptItems\@ScriptModuleMinecraft\@\@QEAAXVWeakLifetimeScope\@Scripting\@\@VItemRegistryRef\@\@\@Z
     */
    MCAPI void registerCustomItems(class Scripting::WeakLifetimeScope, class ItemRegistryRef);
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
