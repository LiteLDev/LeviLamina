#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptNpcComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // prevent constructor by default
    ScriptNpcComponent& operator=(ScriptNpcComponent const&);
    ScriptNpcComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptNpcComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI ScriptNpcComponent(class ScriptModuleMinecraft::ScriptNpcComponent const&);

    MCAPI class Scripting::Result<std::string> getDefaultScene() const;

    MCAPI class Scripting::Result<std::string> getName() const;

    MCAPI class Scripting::Result<int> getSkinIndex() const;

    MCAPI class Scripting::Result<void> setDefaultScene(std::string);

    MCAPI class Scripting::Result<void> setName(std::string);

    MCAPI class Scripting::Result<void, struct Scripting::Error, struct Scripting::ArgumentOutOfBoundsError>
    setSkinIndex(int);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptNpcComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
