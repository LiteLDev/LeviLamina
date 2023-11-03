#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class WeakEntityRef;
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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?_isValid@ScriptItemComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol: ??1ScriptAgeableComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptAgeableComponent();

    // symbol:
    // ??0ScriptAgeableComponent@ScriptModuleMinecraft@@QEAA@AEBVWeakEntityRef@@AEBVWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI
    ScriptAgeableComponent(class WeakEntityRef const&, class Scripting::WeakLifetimeScope const&, std::string const&);

    // symbol:
    // ?getDropItems@ScriptAgeableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::vector<std::string>> getDropItems() const;

    // symbol: ?getDuration@ScriptAgeableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@M$$V@Scripting@@XZ
    MCAPI class Scripting::Result<float> getDuration() const;

    // symbol:
    // ?getFeedItems@ScriptAgeableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@UActorDefinitionFeedItem@@V?$allocator@UActorDefinitionFeedItem@@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::vector<struct ActorDefinitionFeedItem>> getFeedItems() const;

    // symbol:
    // ?getGrowUp@ScriptAgeableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@VActorDefinitionTrigger@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<class ActorDefinitionTrigger> getGrowUp() const;

    // symbol:
    // ?bind@ScriptAgeableComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptAgeableComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptAgeableComponent> bind();

    // symbol: ?ComponentId@ScriptAgeableComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
