#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class LeashableComponent;
class LeashableDefinition;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLeashableComponent
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<::LeashableComponent, ::LeashableDefinition> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptLeashableComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<bool> getCanBeStolen() const;

    MCNAPI ::Scripting::Result_deprecated<float> getHardDistance() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getIsLeashed() const;

    MCNAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
    getLeashHolder() const;

    MCNAPI ::Scripting::Result_deprecated<::std::optional<::std::string>> getLeashHolderActorId() const;

    MCNAPI ::Scripting::Result_deprecated<float> getMaxDistance() const;

    MCNAPI ::Scripting::Result_deprecated<float> getSoftDistance() const;

    MCNAPI ::Scripting::Result_deprecated<void> leashTo(::ScriptModuleMinecraft::ScriptActor& scriptLeashHolder) const;

    MCNAPI ::Scripting::Result_deprecated<void> unleash() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);
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

} // namespace ScriptModuleMinecraft
