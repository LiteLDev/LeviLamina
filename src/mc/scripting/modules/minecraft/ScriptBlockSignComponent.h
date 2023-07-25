#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptRawTextInterface; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockSignComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTBLOCKSIGNCOMPONENT
public:
    ScriptBlockSignComponent& operator=(ScriptBlockSignComponent const&) = delete;
    ScriptBlockSignComponent(ScriptBlockSignComponent const&)            = delete;
    ScriptBlockSignComponent()                                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTBLOCKSIGNCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptBlockSignComponent();
#endif
    /**
     * @symbol
     * ?getRawText\@ScriptBlockSignComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$optional\@UScriptRawTextInterface\@ScriptModuleMinecraft\@\@\@std\@\@\@Scripting\@\@W4SignTextSide\@\@\@Z
     */
    MCAPI class Scripting::Result<class std::optional<struct ScriptModuleMinecraft::ScriptRawTextInterface>>
        getRawText(enum class SignTextSide) const;
    /**
     * @symbol
     * ?getText\@ScriptBlockSignComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@Scripting\@\@W4SignTextSide\@\@\@Z
     */
    MCAPI class Scripting::Result<class std::optional<std::string>> getText(enum class SignTextSide) const;
    /**
     * @symbol
     * ?getTextDyeColor\@ScriptBlockSignComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$optional\@W4ItemColor\@\@\@std\@\@\@Scripting\@\@W4SignTextSide\@\@\@Z
     */
    MCAPI class Scripting::Result<class std::optional<enum class ItemColor>> getTextDyeColor(enum class SignTextSide
    ) const;
    /**
     * @symbol ?getWaxed\@ScriptBlockSignComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> getWaxed() const;
    /**
     * @symbol
     * ?setText\@ScriptBlockSignComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@UScriptRawTextInterface\@4\@\@std\@\@W4SignTextSide\@\@\@Z
     */
    MCAPI class Scripting::Result<void> setText(
        class std::variant<
            std::string,
            struct ScriptModuleMinecraft::ScriptRawMessageInterface,
            struct ScriptModuleMinecraft::ScriptRawTextInterface> const&,
        enum class SignTextSide
    );
    /**
     * @symbol
     * ?setTextDyeColor\@ScriptBlockSignComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@V?$optional\@W4ItemColor\@\@\@std\@\@W4SignTextSide\@\@\@Z
     */
    MCAPI class Scripting::Result<void>
        setTextDyeColor(class std::optional<enum class ItemColor>, enum class SignTextSide);
    /**
     * @symbol ?setWaxed\@ScriptBlockSignComponent\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<void> setWaxed();
    /**
     * @symbol ?ComponentId\@ScriptBlockSignComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    /**
     * @symbol
     * ?bind\@ScriptBlockSignComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptBlockSignComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockSignComponent> bind();
};

}; // namespace ScriptModuleMinecraft
