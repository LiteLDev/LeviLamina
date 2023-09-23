#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptSoundOptions {
public:
    // prevent constructor by default
    ScriptSoundOptions(ScriptSoundOptions const&);
    ScriptSoundOptions();

public:
    // NOLINTBEGIN
    // symbol: ?getLocation@ScriptSoundOptions@ScriptModuleMinecraft@@QEBA?AVVec3@@XZ
    MCAPI class Vec3 getLocation() const;

    // symbol: ??4ScriptSoundOptions@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptSoundOptions&
    operator=(struct ScriptModuleMinecraft::ScriptSoundOptions&&);

    // symbol: ??4ScriptSoundOptions@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptSoundOptions&
    operator=(struct ScriptModuleMinecraft::ScriptSoundOptions const&);

    // symbol:
    // ?bindV010@ScriptSoundOptions@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptSoundOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptSoundOptions> bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
