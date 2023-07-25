#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptTitleDisplayOptions; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptScreenDisplay {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTSCREENDISPLAY
public:
    ScriptScreenDisplay& operator=(ScriptScreenDisplay const&) = delete;
    ScriptScreenDisplay(ScriptScreenDisplay const&)            = delete;
    ScriptScreenDisplay()                                      = delete;
#endif

public:
    /**
     * @symbol ??4ScriptScreenDisplay\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptScreenDisplay&
    operator=(struct ScriptModuleMinecraft::ScriptScreenDisplay&&);
    /**
     * @symbol
     * ?setActionBar\@ScriptScreenDisplay\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@X\@Scripting\@\@AEBV?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@V?$vector\@V?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@V?$allocator\@V?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@\@2\@\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<void>
    setActionBar(class std::variant<
                 std::string,
                 struct ScriptModuleMinecraft::ScriptRawMessageInterface,
                 std::vector<
                     class std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&)
        const;
    /**
     * @symbol
     * ?setTitle\@ScriptScreenDisplay\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@X\@Scripting\@\@AEBV?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@V?$vector\@V?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@V?$allocator\@V?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@\@2\@\@2\@\@std\@\@V?$optional\@UScriptTitleDisplayOptions\@ScriptModuleMinecraft\@\@\@6\@\@Z
     */
    MCAPI class Scripting::Result<void>
    setTitle(class std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface, std::vector<class std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&, class std::optional<struct ScriptModuleMinecraft::ScriptTitleDisplayOptions>)
        const;
    /**
     * @symbol
     * ?updateSubtitle\@ScriptScreenDisplay\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@X\@Scripting\@\@AEBV?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@V?$vector\@V?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@V?$allocator\@V?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@\@2\@\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<void>
    updateSubtitle(class std::variant<
                   std::string,
                   struct ScriptModuleMinecraft::ScriptRawMessageInterface,
                   std::vector<class std::variant<
                       std::string,
                       struct ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&) const;
    /**
     * @symbol
     * ?bind\@ScriptScreenDisplay\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptScreenDisplay\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptScreenDisplay> bind();

    // private:
    /**
     * @symbol
     * ?_getJsonString\@ScriptScreenDisplay\@ScriptModuleMinecraft\@\@AEBA?AV?$Result\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Scripting\@\@AEAVPlayer\@\@AEBV?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@V?$vector\@V?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@V?$allocator\@V?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@\@2\@\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<std::string>
    _getJsonString(class Player&, class std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface, std::vector<class std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&)
        const;
};

}; // namespace ScriptModuleMinecraft
