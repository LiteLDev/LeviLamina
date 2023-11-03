#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/world/item/components/ItemLockMode.h"

// auto generated forward declare list
// clang-format off
class ItemContext;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptContainerSlot {
public:
    // prevent constructor by default
    ScriptContainerSlot& operator=(ScriptContainerSlot const&);
    ScriptContainerSlot();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptContainerSlot@ScriptModuleMinecraft@@QEAA@$$QEAV01@@Z
    MCAPI ScriptContainerSlot(class ScriptModuleMinecraft::ScriptContainerSlot&&);

    // symbol: ??0ScriptContainerSlot@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptContainerSlot(class ScriptModuleMinecraft::ScriptContainerSlot const&);

    // symbol: ??0ScriptContainerSlot@ScriptModuleMinecraft@@QEAA@VItemContext@@VWeakLifetimeScope@Scripting@@@Z
    MCAPI ScriptContainerSlot(class ItemContext, class Scripting::WeakLifetimeScope);

    // symbol: ?getAmount@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getAmount() const;

    // symbol:
    // ?getItem@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
    getItem() const;

    // symbol: ?getKeepOnDeath@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getKeepOnDeath() const;

    // symbol: ?getLockMode@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@W4ItemLockMode@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<::ItemLockMode> getLockMode() const;

    // symbol:
    // ?getLore@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::vector<std::string>> getLore() const;

    // symbol: ?getMaxAmount@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getMaxAmount() const;

    // symbol:
    // ?getNameTag@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::optional<std::string>> getNameTag() const;

    // symbol:
    // ?getTags@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::vector<std::string>> getTags() const;

    // symbol:
    // ?getType@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptItemType@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>>
    getType() const;

    // symbol:
    // ?getTypeId@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::optional<std::string>> getTypeId() const;

    // symbol:
    // ?hasTag@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<bool> hasTag(std::string const&) const;

    // symbol: ?isStackable@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> isStackable() const;

    // symbol:
    // ?isStackableWith@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@AEBVScriptItemStack@2@@Z
    MCAPI class Scripting::Result<bool> isStackableWith(class ScriptModuleMinecraft::ScriptItemStack const&) const;

    // symbol: ??4ScriptContainerSlot@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptContainerSlot&
    operator=(class ScriptModuleMinecraft::ScriptContainerSlot&&);

    // symbol: ?setAmount@ScriptContainerSlot@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@H@Z
    MCAPI class Scripting::Result<void> setAmount(int);

    // symbol:
    // ?setCanDestroy@ScriptContainerSlot@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$optional@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<void> setCanDestroy(std::optional<std::vector<std::string>> const&);

    // symbol:
    // ?setCanPlaceOn@ScriptContainerSlot@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$optional@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<void> setCanPlaceOn(std::optional<std::vector<std::string>> const&);

    // symbol:
    // ?setItem@ScriptContainerSlot@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$optional@VScriptItemStack@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<void> setItem(std::optional<class ScriptModuleMinecraft::ScriptItemStack> const&);

    // symbol: ?setKeepOnDeath@ScriptContainerSlot@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@_N@Z
    MCAPI class Scripting::Result<void> setKeepOnDeath(bool);

    // symbol:
    // ?setLockMode@ScriptContainerSlot@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@W4ItemLockMode@@@Z
    MCAPI class Scripting::Result<void> setLockMode(::ItemLockMode);

    // symbol:
    // ?setLore@ScriptContainerSlot@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$optional@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<void> setLore(std::optional<std::vector<std::string>> const&);

    // symbol:
    // ?setNameTag@ScriptContainerSlot@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<void> setNameTag(std::optional<std::string>);

    // symbol:
    // ?bind@ScriptContainerSlot@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptContainerSlot@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptContainerSlot> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
