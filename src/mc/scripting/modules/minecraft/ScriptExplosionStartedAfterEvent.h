#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace Scripting { class WeakLifetimeScope; }
struct ExplosionStartedEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptExplosionStartedAfterEvent {
public:
    // prevent constructor by default
    ScriptExplosionStartedAfterEvent& operator=(ScriptExplosionStartedAfterEvent const&);
    ScriptExplosionStartedAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptExplosionStartedAfterEvent(struct ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent const&);

    MCAPI ScriptExplosionStartedAfterEvent(
        struct ExplosionStartedEvent const&,
        class Scripting::WeakLifetimeScope const& scope
    );

    MCAPI void copyTo(struct ExplosionStartedEvent&) const;

    MCAPI std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>
          getImpactedBlocks() const;

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptExplosionStartedAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
