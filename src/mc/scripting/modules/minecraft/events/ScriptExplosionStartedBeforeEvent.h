#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlock; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptExplosionStartedBeforeEvent {
public:
    // prevent constructor by default
    ScriptExplosionStartedBeforeEvent& operator=(ScriptExplosionStartedBeforeEvent const&);
    ScriptExplosionStartedBeforeEvent(ScriptExplosionStartedBeforeEvent const&);
    ScriptExplosionStartedBeforeEvent();

public:
    // NOLINTBEGIN
    MCAPI void setImpactedBlocks(
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>> const& blocks
    );

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptExplosionStartedBeforeEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
