#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockAreaSize; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorQueryOptions {
public:
    // prevent constructor by default
    ScriptActorQueryOptions();

public:
    // NOLINTBEGIN
    MCAPI ScriptActorQueryOptions(struct ScriptModuleMinecraft::ScriptActorQueryOptions&&);

    MCAPI ScriptActorQueryOptions(struct ScriptModuleMinecraft::ScriptActorQueryOptions const&);

    MCAPI struct ScriptModuleMinecraft::ScriptActorQueryOptions&
    operator=(struct ScriptModuleMinecraft::ScriptActorQueryOptions&&);

    MCAPI struct ScriptModuleMinecraft::ScriptActorQueryOptions&
    operator=(struct ScriptModuleMinecraft::ScriptActorQueryOptions const&);

    MCAPI void setVolumeV010(std::optional<class ScriptModuleMinecraft::ScriptBlockAreaSize> const&);

    MCAPI ~ScriptActorQueryOptions();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorQueryOptions> bindV010();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptActorQueryOptions>
    bindV1();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
