#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

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

    MCAPI class Scripting::Result<void> setDefaultScene(std::string sceneId);

    MCAPI class Scripting::Result<void> setName(std::string name);

    MCAPI class Scripting::Result<void, struct Scripting::Error, struct Scripting::ArgumentOutOfBoundsError>
    setSkinIndex(int skinIndex);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptNpcComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool _isValid$() const;

    MCAPI static char const* const& ComponentId();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
