#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptCanPowerJumpComponent {

public:
    // prevent constructor by default
    ScriptCanPowerJumpComponent& operator=(ScriptCanPowerJumpComponent const&) = delete;
    ScriptCanPowerJumpComponent(ScriptCanPowerJumpComponent const&)            = delete;
    ScriptCanPowerJumpComponent()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?_isValid\@BaseScriptBlockLiquidContainerComponent\@ScriptModuleMinecraft\@\@MEBA_NXZ
     */
    virtual bool _isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTCANPOWERJUMPCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptCanPowerJumpComponent();
#endif
    /**
     * @symbol
     * ?sClassName\@ScriptCanPowerJumpComponent\@ScriptModuleMinecraft\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const sClassName;
    /**
     * @symbol ?sComponentId\@ScriptCanPowerJumpComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* sComponentId;
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
