#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/WeakTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemComponent {

public:
    // prevent constructor by default
    ScriptItemComponent() = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?_isValid\@ScriptItemComponent\@ScriptModuleMinecraft\@\@MEBA_NXZ
     */
    virtual bool _isValid() const; // NOLINT
    /**
     * @symbol
     * ??0ScriptItemComponent\@ScriptModuleMinecraft\@\@QEAA\@V?$WeakTypedObjectHandle\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEBVWeakLifetimeScope\@3\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI
    ScriptItemComponent(class Scripting::WeakTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>, class Scripting::WeakLifetimeScope const&, std::string const&); // NOLINT
    /**
     * @symbol ??0ScriptItemComponent\@ScriptModuleMinecraft\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI ScriptItemComponent(class ScriptModuleMinecraft::ScriptItemComponent const&); // NOLINT
    /**
     * @symbol ??4ScriptItemComponent\@ScriptModuleMinecraft\@\@QEAAAEAV01\@AEBV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptItemComponent&
    operator=(class ScriptModuleMinecraft::ScriptItemComponent const&); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptItemComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptItemComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptItemComponent>
    bind(); // NOLINT

    // protected:
    /**
     * @symbol ?_tryGetItemInstance\@ScriptItemComponent\@ScriptModuleMinecraft\@\@IEAAPEAVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance* _tryGetItemInstance(); // NOLINT

protected:
};

}; // namespace ScriptModuleMinecraft
