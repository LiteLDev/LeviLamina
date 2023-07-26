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

class ScriptBlockRecordPlayerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {

public:
    // prevent constructor by default
    ScriptBlockRecordPlayerComponent& operator=(ScriptBlockRecordPlayerComponent const&) = delete;
    ScriptBlockRecordPlayerComponent(ScriptBlockRecordPlayerComponent const&)            = delete;
    ScriptBlockRecordPlayerComponent()                                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTBLOCKRECORDPLAYERCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptBlockRecordPlayerComponent(); // NOLINT
#endif
    /**
     * @symbol
     * ?bind\@ScriptBlockRecordPlayerComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptBlockRecordPlayerComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockRecordPlayerComponent>
    bind(); // NOLINT
    /**
     * @symbol ?ComponentId\@ScriptBlockRecordPlayerComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId; // NOLINT

    // protected:
    /**
     * @symbol
     * ?clearRecord\@ScriptBlockRecordPlayerComponent\@ScriptModuleMinecraft\@\@IEAA?AV?$Result\@X\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<void> clearRecord(); // NOLINT
    /**
     * @symbol
     * ?isPlaying\@ScriptBlockRecordPlayerComponent\@ScriptModuleMinecraft\@\@IEAA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> isPlaying(); // NOLINT
    /**
     * @symbol
     * ?setRecord\@ScriptBlockRecordPlayerComponent\@ScriptModuleMinecraft\@\@IEAA?AV?$Result\@X\@Scripting\@\@AEBVScriptItemType\@2\@\@Z
     */
    MCAPI class Scripting::Result<void> setRecord(class ScriptModuleMinecraft::ScriptItemType const&); // NOLINT

protected:
};

}; // namespace ScriptModuleMinecraft
