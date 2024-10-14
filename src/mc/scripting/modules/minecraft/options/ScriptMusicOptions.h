#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptMusicOptions {
public:
    // prevent constructor by default
    ScriptMusicOptions& operator=(ScriptMusicOptions const&);
    ScriptMusicOptions(ScriptMusicOptions const&);
    ScriptMusicOptions();

public:
    // NOLINTBEGIN
    MCAPI float getFade() const;

    MCAPI bool getLoop() const;

    MCAPI float getVolume() const;

    MCAPI std::optional<struct Scripting::Error> validate() const;

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptMusicOptions> bindV010();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptMusicOptions> bindV1();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static float const& FADE_DEFAULT();

    MCAPI static float const& FADE_MIN();

    MCAPI static bool const& LOOP_DEFAULT();

    MCAPI static float const& VOLUME_DEFAULT();

    MCAPI static float const& VOLUME_MIN();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
