#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptItemEvent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace ScriptModuleMinecraft { class ScriptItemEvent; }
namespace Scripting { class WeakLifetimeScope; }
struct ItemUseOnEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseOnAfterEvent : public ::ScriptModuleMinecraft::ScriptItemEvent {
public:
    // prevent constructor by default
    ScriptItemUseOnAfterEvent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptItemUseOnAfterEvent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptItemUseOnAfterEvent();

    // symbol: ??0ScriptItemUseOnAfterEvent@ScriptModuleMinecraft@@QEAA@$$QEAU01@@Z
    MCAPI ScriptItemUseOnAfterEvent(struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent&&);

    // symbol:
    // ??0ScriptItemUseOnAfterEvent@ScriptModuleMinecraft@@QEAA@AEBUItemUseOnEvent@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI ScriptItemUseOnAfterEvent(struct ItemUseOnEvent const&, class Scripting::WeakLifetimeScope const&);

    // symbol: ??0ScriptItemUseOnAfterEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptItemUseOnAfterEvent(struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent const&);

    // symbol:
    // ?getBlockLocation_V010@ScriptItemUseOnAfterEvent@ScriptModuleMinecraft@@QEBA?AV?$Result@VBlockPos@@@Scripting@@XZ
    MCAPI class Scripting::Result<class BlockPos> getBlockLocation_V010() const;

    // symbol: ??4ScriptItemUseOnAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent const&);

    // symbol: ??4ScriptItemUseOnAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent&&);

    // symbol:
    // ?bind@ScriptItemUseOnAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemUseOnAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent> bind();

    // symbol:
    // ?bindV010@ScriptItemUseOnAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemUseOnAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
