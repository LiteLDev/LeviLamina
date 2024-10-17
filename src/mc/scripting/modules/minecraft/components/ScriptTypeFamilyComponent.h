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
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptTypeFamilyComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // prevent constructor by default
    ScriptTypeFamilyComponent& operator=(ScriptTypeFamilyComponent const&);
    ScriptTypeFamilyComponent(ScriptTypeFamilyComponent const&);
    ScriptTypeFamilyComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptTypeFamilyComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI class Scripting::Result<std::vector<std::string>> getTypeFamilies() const;

    MCAPI class Scripting::Result<bool> hasTypeFamily(std::string const& typeFamily) const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptTypeFamilyComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool _isValid$() const;

    MCAPI static char const* const& ComponentId();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
