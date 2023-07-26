#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ItemContext;
enum class ItemLockMode;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptContainerSlot {

public:
    // prevent constructor by default
    ScriptContainerSlot& operator=(ScriptContainerSlot const&) = delete;
    ScriptContainerSlot()                                      = delete;

public:
    /**
     * @symbol
     * ??0ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEAA\@VItemContext\@\@VWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI ScriptContainerSlot(class ItemContext, class Scripting::WeakLifetimeScope); // NOLINT
    /**
     * @symbol ??0ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI ScriptContainerSlot(class ScriptModuleMinecraft::ScriptContainerSlot&&); // NOLINT
    /**
     * @symbol ??0ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI ScriptContainerSlot(class ScriptModuleMinecraft::ScriptContainerSlot const&); // NOLINT
    /**
     * @symbol ?getAmount\@ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getAmount() const; // NOLINT
    /**
     * @symbol
     * ?getItem\@ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$optional\@V?$StrongTypedObjectHandle\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<
        class std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
    getItem() const; // NOLINT
    /**
     * @symbol ?getKeepOnDeath\@ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> getKeepOnDeath() const; // NOLINT
    /**
     * @symbol
     * ?getLockMode\@ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@W4ItemLockMode\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<enum class ItemLockMode> getLockMode() const; // NOLINT
    /**
     * @symbol
     * ?getLore\@ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<std::vector<std::string>> getLore() const; // NOLINT
    /**
     * @symbol ?getMaxAmount\@ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getMaxAmount() const; // NOLINT
    /**
     * @symbol
     * ?getNameTag\@ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<class std::optional<std::string>> getNameTag() const; // NOLINT
    /**
     * @symbol
     * ?getTags\@ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<std::vector<std::string>> getTags() const; // NOLINT
    /**
     * @symbol
     * ?getType\@ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptItemType\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>>
    getType() const; // NOLINT
    /**
     * @symbol
     * ?getTypeId\@ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<class std::optional<std::string>> getTypeId() const; // NOLINT
    /**
     * @symbol
     * ?hasTag\@ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<bool> hasTag(std::string const&) const; // NOLINT
    /**
     * @symbol ?isStackable\@ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> isStackable() const; // NOLINT
    /**
     * @symbol
     * ?isStackableWith\@ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@AEBVScriptItemStack\@2\@\@Z
     */
    MCAPI class Scripting::Result<bool>
    isStackableWith(class ScriptModuleMinecraft::ScriptItemStack const&) const; // NOLINT
    /**
     * @symbol ??4ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptContainerSlot&
    operator=(class ScriptModuleMinecraft::ScriptContainerSlot&&); // NOLINT
    /**
     * @symbol ?setAmount\@ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::Result<void> setAmount(int); // NOLINT
    /**
     * @symbol
     * ?setCanDestroy\@ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$optional\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<void> setCanDestroy(class std::optional<std::vector<std::string>> const&); // NOLINT
    /**
     * @symbol
     * ?setCanPlaceOn\@ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$optional\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<void> setCanPlaceOn(class std::optional<std::vector<std::string>> const&); // NOLINT
    /**
     * @symbol
     * ?setItem\@ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$optional\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<void>
    setItem(class std::optional<class ScriptModuleMinecraft::ScriptItemStack> const&); // NOLINT
    /**
     * @symbol ?setKeepOnDeath\@ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@_N\@Z
     */
    MCAPI class Scripting::Result<void> setKeepOnDeath(bool); // NOLINT
    /**
     * @symbol
     * ?setLockMode\@ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@W4ItemLockMode\@\@\@Z
     */
    MCAPI class Scripting::Result<void> setLockMode(enum class ItemLockMode); // NOLINT
    /**
     * @symbol
     * ?setLore\@ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$optional\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<void> setLore(class std::optional<std::vector<std::string>> const&); // NOLINT
    /**
     * @symbol
     * ?setNameTag\@ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<void> setNameTag(class std::optional<std::string>); // NOLINT
    /**
     * @symbol ??1ScriptContainerSlot\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptContainerSlot(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptContainerSlot\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptContainerSlot\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptContainerSlot>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
