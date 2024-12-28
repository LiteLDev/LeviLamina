#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class ActorFilterGroup;
class HealableComponent;
class HealableDefinition;
class WeakEntityRef;
struct FeedItem;
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptHealableComponent
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<::HealableComponent, ::HealableDefinition> {
public:
    // prevent constructor by default
    ScriptHealableComponent& operator=(ScriptHealableComponent const&);
    ScriptHealableComponent(ScriptHealableComponent const&);
    ScriptHealableComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptHealableComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptHealableComponent(
        ::WeakEntityRef const&                entity,
        ::Scripting::WeakLifetimeScope const& scope,
        ::std::string const&                  id
    );

    MCAPI ::Scripting::Result_deprecated<::ActorFilterGroup> getFilters() const;

    MCAPI ::Scripting::Result_deprecated<bool> getForceUse() const;

    MCAPI ::Scripting::Result_deprecated<::std::vector<::FeedItem>> getItems() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptHealableComponent>
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::WeakEntityRef const& entity, ::Scripting::WeakLifetimeScope const& scope, ::std::string const& id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
