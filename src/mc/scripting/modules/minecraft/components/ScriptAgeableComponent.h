#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class AgeableComponent;
class AgeableDefinition;
class WeakEntityRef;
struct ActorDefinitionFeedItem;
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAgeableComponent
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<::AgeableComponent, ::AgeableDefinition> {
public:
    // prevent constructor by default
    ScriptAgeableComponent& operator=(ScriptAgeableComponent const&);
    ScriptAgeableComponent(ScriptAgeableComponent const&);
    ScriptAgeableComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptAgeableComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptAgeableComponent(
        ::WeakEntityRef const&                entity,
        ::Scripting::WeakLifetimeScope const& scope,
        ::std::string const&                  id
    );

    MCAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getDropItems() const;

    MCAPI ::Scripting::Result_deprecated<float> getDuration() const;

    MCAPI ::Scripting::Result_deprecated<::std::vector<::ActorDefinitionFeedItem>> getFeedItems() const;

    MCAPI ::Scripting::Result_deprecated<::ActorDefinitionTrigger> getGrowUp() const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getTransformToItem() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptAgeableComponent>
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

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
