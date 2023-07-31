#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptComponent {

public:
    // prevent constructor by default
    ScriptComponent(ScriptComponent const&) = delete;
    ScriptComponent()                       = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptComponent();
#endif
    /**
     * @symbol
     * ??0ScriptComponent\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakLifetimeScope\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ScriptComponent(class Scripting::WeakLifetimeScope const&, std::string const&);
    /**
     * @symbol ??4ScriptComponent\@ScriptModuleMinecraft\@\@QEAAAEAV01\@AEBV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptComponent& operator=(class ScriptModuleMinecraft::ScriptComponent const&);
    /**
     * @symbol
     * ?bind\@ScriptComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptComponent> bind();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
