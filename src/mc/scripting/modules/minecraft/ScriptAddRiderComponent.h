#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAddRiderComponent {
public:
    // prevent constructor by default
    ScriptAddRiderComponent& operator=(ScriptAddRiderComponent const&);
    ScriptAddRiderComponent(ScriptAddRiderComponent const&);
    ScriptAddRiderComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptAddRiderComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI ScriptAddRiderComponent(
        class WeakEntityRef const&                entity,
        class Scripting::WeakLifetimeScope const& scope,
        std::string const&                        id
    );

    MCAPI class Scripting::Result<std::string> getEntityType() const;

    MCAPI class Scripting::Result<std::string> getSpawnEvent() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptAddRiderComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
