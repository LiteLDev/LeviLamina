#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

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
    MCAPI class Vec3 getLocation() const;

    MCAPI struct ScriptModuleMinecraft::ScriptSoundOptions&
    operator=(struct ScriptModuleMinecraft::ScriptSoundOptions&&);

    MCAPI struct ScriptModuleMinecraft::ScriptSoundOptions&
    operator=(struct ScriptModuleMinecraft::ScriptSoundOptions const&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptSoundOptions> bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
