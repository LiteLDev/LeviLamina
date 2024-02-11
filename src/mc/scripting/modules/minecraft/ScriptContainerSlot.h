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
class Vec3;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace ScriptModuleMinecraft { struct ScriptInvalidContainerSlotError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
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
    MCAPI ScriptContainerSlot(class ItemContext, class Scripting::WeakLifetimeScope scope);

    // symbol:
    // ?clearDynamicProperties@ScriptContainerSlot@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptInvalidContainerSlotError@ScriptModuleMinecraft@@@Scripting@@AEBUContextConfig@4@@Z
    MCAPI class Scripting::Result<void, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    clearDynamicProperties(struct Scripting::ContextConfig const&);

    // symbol:
    // ?getAmount@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@HUScriptInvalidContainerSlotError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::Result<int, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getAmount() const;

    // symbol:
    // ?getCanDestroy@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@UScriptInvalidContainerSlotError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::
        Result<std::vector<std::string>, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
        getCanDestroy() const;

    // symbol:
    // ?getCanPlaceOn@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@UScriptInvalidContainerSlotError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::
        Result<std::vector<std::string>, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
        getCanPlaceOn() const;

    // symbol:
    // ?getDynamicProperty@ScriptContainerSlot@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$optional@V?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@std@@@std@@UScriptInvalidContainerSlotError@ScriptModuleMinecraft@@@Scripting@@AEBUContextConfig@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<
        std::optional<std::variant<double, float, bool, std::string, class Vec3>>,
        struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getDynamicProperty(struct Scripting::ContextConfig const&, std::string const&);

    // symbol:
    // ?getDynamicPropertyIds@ScriptContainerSlot@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@UScriptInvalidContainerSlotError@ScriptModuleMinecraft@@@Scripting@@AEBUContextConfig@4@@Z
    MCAPI class Scripting::
        Result<std::vector<std::string>, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
        getDynamicPropertyIds(struct Scripting::ContextConfig const&);

    // symbol:
    // ?getDynamicPropertyTotalByteCount@ScriptContainerSlot@ScriptModuleMinecraft@@QEAA?AV?$Result@HUScriptInvalidContainerSlotError@ScriptModuleMinecraft@@@Scripting@@AEBUContextConfig@4@@Z
    MCAPI class Scripting::Result<int, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getDynamicPropertyTotalByteCount(struct Scripting::ContextConfig const&);

    // symbol:
    // ?getItem@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@@std@@UScriptInvalidContainerSlotError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>,
        struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getItem() const;

    // symbol:
    // ?getKeepOnDeath@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptInvalidContainerSlotError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::Result<bool, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getKeepOnDeath() const;

    // symbol:
    // ?getLockMode@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@W4ItemLockMode@@UScriptInvalidContainerSlotError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::Result<::ItemLockMode, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getLockMode() const;

    // symbol:
    // ?getLore@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@UScriptInvalidContainerSlotError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::
        Result<std::vector<std::string>, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
        getLore() const;

    // symbol:
    // ?getMaxAmount@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@HUScriptInvalidContainerSlotError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::Result<int, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getMaxAmount() const;

    // symbol:
    // ?getNameTag@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UScriptInvalidContainerSlotError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::
        Result<std::optional<std::string>, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
        getNameTag() const;

    // symbol:
    // ?getTags@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@UScriptInvalidContainerSlotError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::
        Result<std::vector<std::string>, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
        getTags() const;

    // symbol:
    // ?getType@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptItemType@ScriptModuleMinecraft@@@Scripting@@UScriptInvalidContainerSlotError@ScriptModuleMinecraft@@UEngineError@2@@Scripting@@XZ
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>,
        struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError,
        struct Scripting::EngineError>
    getType() const;

    // symbol:
    // ?getTypeId@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptInvalidContainerSlotError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::Result<std::string, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getTypeId() const;

    // symbol:
    // ?hasItem@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptInvalidContainerSlotError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::Result<bool, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError> hasItem() const;

    // symbol:
    // ?hasTag@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptInvalidContainerSlotError@ScriptModuleMinecraft@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<bool, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    hasTag(std::string const& tag) const;

    // symbol:
    // ?isStackable@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptInvalidContainerSlotError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::Result<bool, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    isStackable() const;

    // symbol:
    // ?isStackableWith@ScriptContainerSlot@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptInvalidContainerSlotError@ScriptModuleMinecraft@@@Scripting@@AEBVScriptItemStack@2@@Z
    MCAPI class Scripting::Result<bool, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    isStackableWith(class ScriptModuleMinecraft::ScriptItemStack const& other) const;

    // symbol: ??4ScriptContainerSlot@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptContainerSlot&
    operator=(class ScriptModuleMinecraft::ScriptContainerSlot&&);

    // symbol:
    // ?setAmount@ScriptContainerSlot@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptInvalidContainerSlotError@ScriptModuleMinecraft@@UArgumentOutOfBoundsError@Scripting@@@Scripting@@H@Z
    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError,
        struct Scripting::ArgumentOutOfBoundsError>
    setAmount(int amount);

    // symbol:
    // ?setCanDestroy@ScriptContainerSlot@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptInvalidContainerSlotError@ScriptModuleMinecraft@@UError@Scripting@@@Scripting@@AEBV?$optional@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@std@@@Z
    MCAPI class Scripting::
        Result<void, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError, struct Scripting::Error>
        setCanDestroy(std::optional<std::vector<std::string>> const&);

    // symbol:
    // ?setCanPlaceOn@ScriptContainerSlot@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptInvalidContainerSlotError@ScriptModuleMinecraft@@UError@Scripting@@@Scripting@@AEBV?$optional@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@std@@@Z
    MCAPI class Scripting::
        Result<void, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError, struct Scripting::Error>
        setCanPlaceOn(std::optional<std::vector<std::string>> const&);

    // symbol:
    // ?setDynamicProperty@ScriptContainerSlot@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptInvalidContainerSlotError@ScriptModuleMinecraft@@UError@Scripting@@@Scripting@@AEBUContextConfig@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$optional@V?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@std@@@7@@Z
    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError,
        struct Scripting::Error>
    setDynamicProperty(struct Scripting::ContextConfig const&, std::string const&, std::optional<std::variant<double, float, bool, std::string, class Vec3>> const&);

    // symbol:
    // ?setItem@ScriptContainerSlot@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptInvalidContainerSlotError@ScriptModuleMinecraft@@@Scripting@@AEBV?$optional@VScriptItemStack@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<void, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    setItem(std::optional<class ScriptModuleMinecraft::ScriptItemStack> const&);

    // symbol:
    // ?setKeepOnDeath@ScriptContainerSlot@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptInvalidContainerSlotError@ScriptModuleMinecraft@@@Scripting@@_N@Z
    MCAPI class Scripting::Result<void, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    setKeepOnDeath(bool value);

    // symbol:
    // ?setLockMode@ScriptContainerSlot@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptInvalidContainerSlotError@ScriptModuleMinecraft@@@Scripting@@W4ItemLockMode@@@Z
    MCAPI class Scripting::Result<void, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
        setLockMode(::ItemLockMode);

    // symbol:
    // ?setLore@ScriptContainerSlot@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptInvalidContainerSlotError@ScriptModuleMinecraft@@UError@Scripting@@@Scripting@@AEBV?$optional@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@std@@@Z
    MCAPI class Scripting::
        Result<void, struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError, struct Scripting::Error>
        setLore(std::optional<std::vector<std::string>> const&);

    // symbol:
    // ?setNameTag@ScriptContainerSlot@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptInvalidContainerSlotError@ScriptModuleMinecraft@@UArgumentOutOfBoundsError@Scripting@@@Scripting@@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError,
        struct Scripting::ArgumentOutOfBoundsError>
        setNameTag(std::optional<std::string>);

    // symbol:
    // ?bind@ScriptContainerSlot@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptContainerSlot@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptContainerSlot> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
