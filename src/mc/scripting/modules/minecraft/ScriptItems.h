#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class ItemRegistryRef;
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItems {
public:
    // prevent constructor by default
    ScriptItems& operator=(ScriptItems const&);
    ScriptItems(ScriptItems const&);
    ScriptItems();

public:
    // NOLINTBEGIN
    // symbol:
    // ?get@ScriptItems@ScriptModuleMinecraft@@QEAA?AV?$optional@V?$StrongTypedObjectHandle@VScriptItemType@ScriptModuleMinecraft@@@Scripting@@@std@@AEAVWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>>
          get(class Scripting::WeakLifetimeScope&, std::string const&);

    // symbol:
    // ?getOrAdd@ScriptItems@ScriptModuleMinecraft@@QEAA?AV?$optional@V?$StrongTypedObjectHandle@VScriptItemType@ScriptModuleMinecraft@@@Scripting@@@std@@AEAVWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>>
          getOrAdd(class Scripting::WeakLifetimeScope&, std::string const&);

    // symbol: ?bind@ScriptItems@ScriptModuleMinecraft@@SAXAEAVModuleBindingBuilder@Scripting@@VItemRegistryRef@@@Z
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&, class ItemRegistryRef);

    // symbol:
    // ?generateItemPropertyNameToRawNameMap@ScriptItems@ScriptModuleMinecraft@@SA?AV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@VItemRegistryRef@@@Z
    MCAPI static std::unordered_map<std::string, std::string> generateItemPropertyNameToRawNameMap(class ItemRegistryRef
    );

    // symbol:
    // ?generatetItemCooldownCategories@ScriptItems@ScriptModuleMinecraft@@SA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@VItemRegistryRef@@@Z
    MCAPI static std::vector<std::string> generatetItemCooldownCategories(class ItemRegistryRef);

    // symbol:
    // ?getOrCreateItemTypeHandle@ScriptItems@ScriptModuleMinecraft@@SA?AV?$optional@V?$StrongTypedObjectHandle@VScriptItemType@ScriptModuleMinecraft@@@Scripting@@@std@@VWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI static std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>>
    getOrCreateItemTypeHandle(class Scripting::WeakLifetimeScope, std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getItemHandleForAlias@ScriptItems@ScriptModuleMinecraft@@AEBA?AV?$optional@V?$StrongTypedObjectHandle@VScriptItemType@ScriptModuleMinecraft@@@Scripting@@@std@@AEBVHashedString@@@Z
    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>>
          _getItemHandleForAlias(class HashedString const&) const;

    // symbol:
    // ?_registerItemType@ScriptItems@ScriptModuleMinecraft@@AEAA?AV?$optional@V?$StrongTypedObjectHandle@VScriptItemType@ScriptModuleMinecraft@@@Scripting@@@std@@AEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$StrongTypedObjectHandle@VScriptItemType@ScriptModuleMinecraft@@@Scripting@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$StrongTypedObjectHandle@VScriptItemType@ScriptModuleMinecraft@@@Scripting@@@std@@@2@@4@VWeakLifetimeScope@Scripting@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>>
          _registerItemType(
              std::unordered_map<
                  std::string,
                  class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>>&,
              class Scripting::WeakLifetimeScope,
              std::string
          );

    // symbol: ?_registerItems@ScriptItems@ScriptModuleMinecraft@@AEAAXAEAVWeakLifetimeScope@Scripting@@@Z
    MCAPI void _registerItems(class Scripting::WeakLifetimeScope&);

    // symbol: ?_tryRegisterItemTypeAlias@ScriptItems@ScriptModuleMinecraft@@AEAAXAEBVHashedString@@@Z
    MCAPI void _tryRegisterItemTypeAlias(class HashedString const&);

    // symbol:
    // ?_getOrCreateItemTypeHandle@ScriptItems@ScriptModuleMinecraft@@CA?AV?$optional@V?$StrongTypedObjectHandle@VScriptItemType@ScriptModuleMinecraft@@@Scripting@@@std@@VWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI static std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>>
    _getOrCreateItemTypeHandle(class Scripting::WeakLifetimeScope, std::string const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
