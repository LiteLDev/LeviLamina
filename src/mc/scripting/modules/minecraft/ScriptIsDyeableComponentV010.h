#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsDyeableComponentV010 {

public:
    // prevent constructor by default
    ScriptIsDyeableComponentV010& operator=(ScriptIsDyeableComponentV010 const&) = delete;
    ScriptIsDyeableComponentV010(ScriptIsDyeableComponentV010 const&)            = delete;
    ScriptIsDyeableComponentV010()                                               = delete;

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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTISDYEABLECOMPONENTV010
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptIsDyeableComponentV010();
#endif
    /**
     * @symbol
     * ?sClassName\@ScriptIsDyeableComponentV010\@ScriptModuleMinecraft\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const sClassName;
    /**
     * @symbol ?sComponentId\@ScriptIsDyeableComponentV010\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* sComponentId;
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
