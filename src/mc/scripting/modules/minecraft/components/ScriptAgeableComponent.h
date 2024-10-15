#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class WeakLifetimeScope; }
struct ActorDefinitionFeedItem;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAgeableComponent {
public:
    // prevent constructor by default
    ScriptAgeableComponent& operator=(ScriptAgeableComponent const&);
    ScriptAgeableComponent(ScriptAgeableComponent const&);
    ScriptAgeableComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptAgeableComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI ScriptAgeableComponent(
        class WeakEntityRef const&                entity,
        class Scripting::WeakLifetimeScope const& scope,
        std::string const&                        id
    );

    MCAPI class Scripting::Result<std::vector<std::string>> getDropItems() const;

    MCAPI class Scripting::Result<float> getDuration() const;

    MCAPI class Scripting::Result<std::vector<struct ActorDefinitionFeedItem>> getFeedItems() const;

    MCAPI class Scripting::Result<class ActorDefinitionTrigger> getGrowUp() const;

    MCAPI class Scripting::Result<std::string> getTransformToItem() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptAgeableComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void*
    ctor$(class WeakEntityRef const& entity, class Scripting::WeakLifetimeScope const& scope, std::string const& id);

    MCAPI bool _isValid$() const;

    MCAPI static char const* const& ComponentId();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
