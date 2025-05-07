#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class AgeableComponent;
class AgeableDefinition;
struct ActorDefinitionFeedItem;
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAgeableComponent
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<::AgeableComponent, ::AgeableDefinition> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptAgeableComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getDropItems() const;

    MCNAPI ::Scripting::Result_deprecated<float> getDuration() const;

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::ActorDefinitionFeedItem>> getFeedItems() const;

    MCNAPI ::Scripting::Result_deprecated<::ActorDefinitionTrigger> getGrowUp() const;

    MCNAPI ::Scripting::Result_deprecated<::std::string> getTransformToItem() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptAgeableComponent>
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
