#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class BaseScriptBlockComponent {

public:
    // prevent constructor by default
    BaseScriptBlockComponent() = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?_isValid\@BaseScriptBlockComponent\@ScriptModuleMinecraft\@\@MEBA_NXZ
     */
    virtual bool _isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_BASESCRIPTBLOCKCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseScriptBlockComponent();
#endif
    /**
     * @symbol ??0BaseScriptBlockComponent\@ScriptModuleMinecraft\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI BaseScriptBlockComponent(class ScriptModuleMinecraft::BaseScriptBlockComponent const&);
    /**
     * @symbol
     * ??0BaseScriptBlockComponent\@ScriptModuleMinecraft\@\@QEAA\@AEAVBlockActor\@\@AEAVBlockSource\@\@VBlockPos\@\@AEBVWeakLifetimeScope\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI
    BaseScriptBlockComponent(class BlockActor&, class BlockSource&, class BlockPos, class Scripting::WeakLifetimeScope const&, std::string const&);
    /**
     * @symbol
     * ?getBlock\@BaseScriptBlockComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$StrongTypedObjectHandle\@VScriptBlock\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock> getBlock() const;
    /**
     * @symbol ??4BaseScriptBlockComponent\@ScriptModuleMinecraft\@\@QEAAAEAV01\@AEBV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::BaseScriptBlockComponent&
    operator=(class ScriptModuleMinecraft::BaseScriptBlockComponent const&);
    /**
     * @symbol
     * ?bind\@BaseScriptBlockComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VBaseScriptBlockComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::BaseScriptBlockComponent> bind();
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_tryGetOwner\@BaseScriptBlockComponent\@ScriptModuleMinecraft\@\@IEAAPEAVBlockActor\@\@XZ
     */
    MCAPI class BlockActor* _tryGetOwner();
    /**
     * @symbol ?_tryGetOwner\@BaseScriptBlockComponent\@ScriptModuleMinecraft\@\@IEBAPEBVBlockActor\@\@XZ
     */
    MCAPI class BlockActor const* _tryGetOwner() const;
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
