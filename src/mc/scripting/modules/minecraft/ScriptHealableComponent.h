#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class ActorFilterGroup;
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class WeakLifetimeScope; }
struct FeedItem;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptHealableComponent {
public:
    // prevent constructor by default
    ScriptHealableComponent& operator=(ScriptHealableComponent const&);
    ScriptHealableComponent(ScriptHealableComponent const&);
    ScriptHealableComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptHealableComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI
    ScriptHealableComponent(class WeakEntityRef const&, class Scripting::WeakLifetimeScope const&, std::string const&);

    MCAPI class Scripting::Result<class ActorFilterGroup> getFilters() const;

    MCAPI class Scripting::Result<bool> getForceUse() const;

    MCAPI class Scripting::Result<std::vector<struct FeedItem>> getItems() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptHealableComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
