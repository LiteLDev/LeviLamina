#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraftServerAdmin {

class ScriptSecretString {
public:
    // prevent constructor by default
    ScriptSecretString(ScriptSecretString const&);
    ScriptSecretString();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptSecretString@ScriptModuleMinecraftServerAdmin@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit ScriptSecretString(std::string);

    // symbol: ??4ScriptSecretString@ScriptModuleMinecraftServerAdmin@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraftServerAdmin::ScriptSecretString&
    operator=(class ScriptModuleMinecraftServerAdmin::ScriptSecretString&&);

    // symbol: ??4ScriptSecretString@ScriptModuleMinecraftServerAdmin@@QEAAAEAV01@AEBV01@@Z
    MCAPI class ScriptModuleMinecraftServerAdmin::ScriptSecretString&
    operator=(class ScriptModuleMinecraftServerAdmin::ScriptSecretString const&);

    // symbol: ??8ScriptSecretString@ScriptModuleMinecraftServerAdmin@@QEBA_NAEBV01@@Z
    MCAPI bool operator==(class ScriptModuleMinecraftServerAdmin::ScriptSecretString const&) const;

    // symbol: ??1ScriptSecretString@ScriptModuleMinecraftServerAdmin@@QEAA@XZ
    MCAPI ~ScriptSecretString();

    // symbol:
    // ?bind@ScriptSecretString@ScriptModuleMinecraftServerAdmin@@SA?AV?$ClassBindingBuilder@VScriptSecretString@ScriptModuleMinecraftServerAdmin@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerAdmin::ScriptSecretString>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerAdmin
