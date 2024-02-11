#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftServerAdmin { class ScriptSecretString; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptNetHeader {
public:
    // NOLINTBEGIN
    // symbol: ??0ScriptNetHeader@ScriptModuleMinecraftNet@@QEAA@XZ
    MCAPI ScriptNetHeader();

    // symbol: ??0ScriptNetHeader@ScriptModuleMinecraftNet@@QEAA@AEBU01@@Z
    MCAPI ScriptNetHeader(struct ScriptModuleMinecraftNet::ScriptNetHeader const&);

    // symbol:
    // ??0ScriptNetHeader@ScriptModuleMinecraftNet@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VScriptSecretString@ScriptModuleMinecraftServerAdmin@@@3@@Z
    MCAPI ScriptNetHeader(
        std::string const&                                                                    key,
        std::variant<std::string, class ScriptModuleMinecraftServerAdmin::ScriptSecretString> value
    );

    // symbol: ??4ScriptNetHeader@ScriptModuleMinecraftNet@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraftNet::ScriptNetHeader&
    operator=(struct ScriptModuleMinecraftNet::ScriptNetHeader&&);

    // symbol: ??4ScriptNetHeader@ScriptModuleMinecraftNet@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraftNet::ScriptNetHeader&
    operator=(struct ScriptModuleMinecraftNet::ScriptNetHeader const&);

    // symbol: ??1ScriptNetHeader@ScriptModuleMinecraftNet@@QEAA@XZ
    MCAPI ~ScriptNetHeader();

    // symbol:
    // ?bind@ScriptNetHeader@ScriptModuleMinecraftNet@@SA?AV?$ClassBindingBuilder@UScriptNetHeader@ScriptModuleMinecraftNet@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraftNet::ScriptNetHeader> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftNet
