#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockType {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTBLOCKTYPE
public:
    ScriptBlockType& operator=(ScriptBlockType const&) = delete;
    ScriptBlockType()                                  = delete;
#endif

public:
    /**
     * @symbol ??0ScriptBlockType\@ScriptModuleMinecraft\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI ScriptBlockType(class ScriptModuleMinecraft::ScriptBlockType const&);
    /**
     * @symbol
     * ?createDefaultBlockPermutationV010\@ScriptBlockType\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptBlockPermutation\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>
    createDefaultBlockPermutationV010() const;
    /**
     * @symbol ?getBlock\@ScriptBlockType\@ScriptModuleMinecraft\@\@QEBAAEBVBlockLegacy\@\@XZ
     */
    MCAPI class BlockLegacy const& getBlock() const;
    /**
     * @symbol
     * ?getId\@ScriptBlockType\@ScriptModuleMinecraft\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getId() const;
    /**
     * @symbol ??4ScriptBlockType\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptBlockType& operator=(class ScriptModuleMinecraft::ScriptBlockType&&);
    /**
     * @symbol ??1ScriptBlockType\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptBlockType();
    /**
     * @symbol
     * ?bind\@ScriptBlockType\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptBlockType\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockType> bind();
    /**
     * @symbol
     * ?getOrCreateHandle\@ScriptBlockType\@ScriptModuleMinecraft\@\@SA?AV?$StrongTypedObjectHandle\@VScriptBlockType\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEBVWeakLifetimeScope\@4\@AEBVBlockLegacy\@\@\@Z
     */
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>
    getOrCreateHandle(class Scripting::WeakLifetimeScope const&, class BlockLegacy const&);
};

}; // namespace ScriptModuleMinecraft
