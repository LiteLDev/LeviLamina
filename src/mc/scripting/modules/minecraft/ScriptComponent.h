#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

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
    // vIndex: 0, symbol: ??1ScriptComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptComponent();

    // vIndex: 1, symbol: ?_isValid@AttributeScriptActorComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const = 0;

    // symbol:
    // ??0ScriptComponent@ScriptModuleMinecraft@@QEAA@AEBVWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ScriptComponent(class Scripting::WeakLifetimeScope const& scope, std::string const& id);

    // symbol:
    // ?bind@ScriptComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptComponent> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
