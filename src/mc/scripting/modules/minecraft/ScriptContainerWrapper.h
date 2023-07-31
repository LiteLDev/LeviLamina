#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptContainer; }
namespace ScriptModuleMinecraft { class ScriptContainerSlot; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptContainerWrapper {

public:
    // prevent constructor by default
    ScriptContainerWrapper& operator=(ScriptContainerWrapper const&) = delete;
    ScriptContainerWrapper(ScriptContainerWrapper const&)            = delete;
    ScriptContainerWrapper()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0ScriptContainerWrapper\@ScriptModuleMinecraft\@\@QEAA\@V?$unique_ptr\@VScriptContainer\@ScriptModuleMinecraft\@\@U?$default_delete\@VScriptContainer\@ScriptModuleMinecraft\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI ScriptContainerWrapper(std::unique_ptr<class ScriptModuleMinecraft::ScriptContainer>);
    /**
     * @symbol
     * ?addItem\@ScriptContainerWrapper\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@AEBVScriptItemStack\@2\@\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>
    addItem(class ScriptModuleMinecraft::ScriptItemStack const&) const;
    /**
     * @symbol
     * ?bind\@ScriptContainerWrapper\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptContainerWrapper\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptContainerWrapper> bind();
    /**
     * @symbol ?clearAll\@ScriptContainerWrapper\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@X\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<void> clearAll() const;
    /**
     * @symbol ?getEmptySlotsCount\@ScriptContainerWrapper\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getEmptySlotsCount() const;
    /**
     * @symbol
     * ?getItem\@ScriptContainerWrapper\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$optional\@V?$StrongTypedObjectHandle\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
    getItem(int) const;
    /**
     * @symbol ?getSize\@ScriptContainerWrapper\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getSize() const;
    /**
     * @symbol
     * ?getSlot\@ScriptContainerWrapper\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptContainerSlot\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptContainerSlot>>
    getSlot(int) const;
    /**
     * @symbol
     * ?moveItem\@ScriptContainerWrapper\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@X\@Scripting\@\@HHAEAV12\@\@Z
     */
    MCAPI class Scripting::Result<void> moveItem(int, int, class ScriptModuleMinecraft::ScriptContainerWrapper&) const;
    /**
     * @symbol
     * ?setItem\@ScriptContainerWrapper\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@X\@Scripting\@\@HAEBV?$optional\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<void>
    setItem(int, std::optional<class ScriptModuleMinecraft::ScriptItemStack> const&) const;
    /**
     * @symbol
     * ?swapItems\@ScriptContainerWrapper\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@X\@Scripting\@\@HHAEAV12\@\@Z
     */
    MCAPI class Scripting::Result<void> swapItems(int, int, class ScriptModuleMinecraft::ScriptContainerWrapper&) const;
    /**
     * @symbol
     * ?transferItem\@ScriptContainerWrapper\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@HAEAV12\@\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>
    transferItem(int, class ScriptModuleMinecraft::ScriptContainerWrapper&) const;
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
