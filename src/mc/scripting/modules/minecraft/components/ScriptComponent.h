#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptComponent {
public:
    // prevent constructor by default
    ScriptComponent& operator=(ScriptComponent const&);
    ScriptComponent(ScriptComponent const&);
    ScriptComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptComponent();

    // vIndex: 1
    virtual bool _isValid() const = 0;

    MCAPI ScriptComponent(class Scripting::WeakLifetimeScope const& scope, std::string const& id);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptComponent> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
