#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemType; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockRecordPlayerComponentV010 : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {

public:
    // prevent constructor by default
    ScriptBlockRecordPlayerComponentV010& operator=(ScriptBlockRecordPlayerComponentV010 const&) = delete;
    ScriptBlockRecordPlayerComponentV010(ScriptBlockRecordPlayerComponentV010 const&)            = delete;
    ScriptBlockRecordPlayerComponentV010()                                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTBLOCKRECORDPLAYERCOMPONENTV010
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptBlockRecordPlayerComponentV010();
#endif
    /**
     * @symbol
     * ?bind\@ScriptBlockRecordPlayerComponentV010\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptBlockRecordPlayerComponentV010\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockRecordPlayerComponentV010>
    bind();
    /**
     * @symbol ?ComponentId\@ScriptBlockRecordPlayerComponentV010\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?clearRecord\@ScriptBlockRecordPlayerComponentV010\@ScriptModuleMinecraft\@\@IEAA?AV?$Result\@X\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<void> clearRecord();
    /**
     * @symbol
     * ?isPlaying\@ScriptBlockRecordPlayerComponentV010\@ScriptModuleMinecraft\@\@IEAA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> isPlaying();
    /**
     * @symbol
     * ?setRecord\@ScriptBlockRecordPlayerComponentV010\@ScriptModuleMinecraft\@\@IEAA?AV?$Result\@X\@Scripting\@\@AEBVScriptItemType\@2\@\@Z
     */
    MCAPI class Scripting::Result<void> setRecord(class ScriptModuleMinecraft::ScriptItemType const&);
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
