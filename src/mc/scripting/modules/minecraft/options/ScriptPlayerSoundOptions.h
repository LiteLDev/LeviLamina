#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerSoundOptions {
public:
    // prevent constructor by default
    ScriptPlayerSoundOptions(ScriptPlayerSoundOptions const&);
    ScriptPlayerSoundOptions();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptPlayerSoundOptions&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerSoundOptions&&);

    MCAPI struct ScriptModuleMinecraft::ScriptPlayerSoundOptions&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerSoundOptions const&);

    MCAPI std::optional<struct Scripting::Error> validate() const;

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptPlayerSoundOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
