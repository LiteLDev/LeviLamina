#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptLocationOutOfWorldBoundsError {
public:
    // prevent constructor by default
    ScriptLocationOutOfWorldBoundsError& operator=(ScriptLocationOutOfWorldBoundsError const&);
    ScriptLocationOutOfWorldBoundsError(ScriptLocationOutOfWorldBoundsError const&);
    ScriptLocationOutOfWorldBoundsError();

public:
    // NOLINTBEGIN
    MCAPI explicit ScriptLocationOutOfWorldBoundsError(class Vec3 const& pos);

    MCAPI ScriptLocationOutOfWorldBoundsError(std::string const& details, class Vec3 const& pos);

    MCAPI ~ScriptLocationOutOfWorldBoundsError();

    MCAPI static class Scripting::ErrorBindingBuilder<struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
