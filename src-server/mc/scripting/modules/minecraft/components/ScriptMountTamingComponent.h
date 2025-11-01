#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class MountTameableDefinition;
class MountTamingComponent;
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMountTamingComponent : public ::ScriptModuleMinecraft::ECSScriptActorComponent<::MountTamingComponent, ::MountTameableDefinition> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptMountTamingComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<bool> isTamed() const;

    MCNAPI ::Scripting::Result_deprecated<bool> isTamedToPlayer() const;

    MCNAPI ::Scripting::Result_deprecated<void> setTamed(bool showParticles) const;

    MCNAPI ::Scripting::Result_deprecated<bool> setTamedToPlayer(bool showParticles, ::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer) const;

    MCNAPI ::Scripting::Result_deprecated<::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>> tamedToPlayer() const;

    MCNAPI ::Scripting::Result_deprecated<::std::optional<::std::string>> tamedToPlayerId() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
