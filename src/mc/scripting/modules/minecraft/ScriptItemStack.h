#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStackBase;
class Level;
namespace ScriptModuleMinecraft { class ScriptItemComponent; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemStack {

public:
    // prevent constructor by default
    ScriptItemStack() = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ScriptItemStack\@ScriptModuleMinecraft\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI ScriptItemStack(class ScriptModuleMinecraft::ScriptItemStack&&);
    /**
     * @symbol ??0ScriptItemStack\@ScriptModuleMinecraft\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI ScriptItemStack(class ScriptModuleMinecraft::ScriptItemStack const&);
    /**
     * @symbol
     * ?clone\@ScriptItemStack\@ScriptModuleMinecraft\@\@QEBA?AV?$StrongTypedObjectHandle\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@Scripting\@\@VWeakLifetimeScope\@4\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>
        clone(class Scripting::WeakLifetimeScope) const;
    /**
     * @symbol
     * ?getComponent\@ScriptItemStack\@ScriptModuleMinecraft\@\@QEAA?AV?$optional\@V?$StrongTypedObjectHandle\@VScriptItemComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@VWeakLifetimeScope\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@4\@\@Z
     */
    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemComponent>>
          getComponent(class Scripting::WeakLifetimeScope, std::string const&);
    /**
     * @symbol
     * ?getComponents\@ScriptItemStack\@ScriptModuleMinecraft\@\@QEAA?AV?$vector\@V?$StrongTypedObjectHandle\@VScriptItemComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$allocator\@V?$StrongTypedObjectHandle\@VScriptItemComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@std\@\@VWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemComponent>>
          getComponents(class Scripting::WeakLifetimeScope);
    /**
     * @symbol ?getItemInstance\@ScriptItemStack\@ScriptModuleMinecraft\@\@QEAAAEAVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance& getItemInstance();
    /**
     * @symbol ?getItemInstance\@ScriptItemStack\@ScriptModuleMinecraft\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const& getItemInstance() const;
    /**
     * @symbol
     * ?getLore\@ScriptItemStack\@ScriptModuleMinecraft\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getLore() const;
    /**
     * @symbol
     * ?getNameTag\@ScriptItemStack\@ScriptModuleMinecraft\@\@QEBA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::optional<std::string> getNameTag() const;
    /**
     * @symbol
     * ?getTags\@ScriptItemStack\@ScriptModuleMinecraft\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getTags() const;
    /**
     * @symbol
     * ?getType\@ScriptItemStack\@ScriptModuleMinecraft\@\@QEBA?AV?$StrongTypedObjectHandle\@VScriptItemType\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType> getType() const;
    /**
     * @symbol
     * ?getTypeId\@ScriptItemStack\@ScriptModuleMinecraft\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getTypeId() const;
    /**
     * @symbol
     * ?hasComponent\@ScriptItemStack\@ScriptModuleMinecraft\@\@QEAA_NVWeakLifetimeScope\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool hasComponent(class Scripting::WeakLifetimeScope, std::string const&);
    /**
     * @symbol
     * ?hasTag\@ScriptItemStack\@ScriptModuleMinecraft\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool hasTag(std::string const&) const;
    /**
     * @symbol ?isStackableWith\@ScriptItemStack\@ScriptModuleMinecraft\@\@QEBA_NAEBV12\@\@Z
     */
    MCAPI bool isStackableWith(class ScriptModuleMinecraft::ScriptItemStack const&) const;
    /**
     * @symbol ??4ScriptItemStack\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptItemStack& operator=(class ScriptModuleMinecraft::ScriptItemStack&&);
    /**
     * @symbol ??4ScriptItemStack\@ScriptModuleMinecraft\@\@QEAAAEAV01\@AEBV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptItemStack& operator=(class ScriptModuleMinecraft::ScriptItemStack const&);
    /**
     * @symbol ?setAmount\@ScriptItemStack\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::Result<void> setAmount(int);
    /**
     * @symbol
     * ?setCanDestroy\@ScriptItemStack\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$optional\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<void> setCanDestroy(std::optional<std::vector<std::string>> const&);
    /**
     * @symbol
     * ?setCanPlaceOn\@ScriptItemStack\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$optional\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<void> setCanPlaceOn(std::optional<std::vector<std::string>> const&);
    /**
     * @symbol
     * ?setLore\@ScriptItemStack\@ScriptModuleMinecraft\@\@QEAAXAEBV?$optional\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setLore(std::optional<std::vector<std::string>> const&);
    /**
     * @symbol
     * ?setNameTag\@ScriptItemStack\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<void> setNameTag(std::optional<std::string>);
    /**
     * @symbol
     * ?setNameTagV010\@ScriptItemStack\@ScriptModuleMinecraft\@\@QEAAXV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setNameTagV010(std::optional<std::string>);
    /**
     * @symbol ??1ScriptItemStack\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptItemStack();
    /**
     * @symbol
     * ?bind\@ScriptItemStack\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@Scripting\@\@PEAVLevel\@\@AEBUVersion\@4\@\@Z
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptItemStack>
    bind(class Level*, struct Scripting::Version const&);
    /**
     * @symbol
     * ?createHandle\@ScriptItemStack\@ScriptModuleMinecraft\@\@SA?AV?$StrongTypedObjectHandle\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@Scripting\@\@VWeakLifetimeScope\@4\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>
    createHandle(class Scripting::WeakLifetimeScope, class ItemStackBase const&);
    /**
     * @symbol
     * ?createOptionalHandle\@ScriptItemStack\@ScriptModuleMinecraft\@\@SA?AV?$optional\@V?$StrongTypedObjectHandle\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@VWeakLifetimeScope\@Scripting\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI static std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>
    createOptionalHandle(class Scripting::WeakLifetimeScope, class ItemStackBase const&);
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
