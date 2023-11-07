#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class ActorFilterGroup;
class WeakEntityRef;
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
    // vIndex: 0, symbol: ??1ScriptHealableComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptHealableComponent();

    // symbol:
    // ??0ScriptHealableComponent@ScriptModuleMinecraft@@QEAA@AEBVWeakEntityRef@@AEBVWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI
    ScriptHealableComponent(class WeakEntityRef const&, class Scripting::WeakLifetimeScope const&, std::string const&);

    // symbol:
    // ?getFilters@ScriptHealableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@VActorFilterGroup@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<class ActorFilterGroup> getFilters() const;

    // symbol: ?getForceUse@ScriptHealableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getForceUse() const;

    // symbol:
    // ?getItems@ScriptHealableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@UFeedItem@@V?$allocator@UFeedItem@@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::vector<struct FeedItem>> getItems() const;

    // symbol:
    // ?bind@ScriptHealableComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptHealableComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptHealableComponent> bind();

    // symbol: ?ComponentId@ScriptHealableComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
