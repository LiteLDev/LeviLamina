#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Player;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
struct ItemUseOnEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseOnAfterEvent {
public:
    // prevent constructor by default
    ScriptItemUseOnAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptItemUseOnAfterEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptItemUseOnAfterEvent(struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent const&);

    // symbol:
    // ??0ScriptItemUseOnAfterEvent@ScriptModuleMinecraft@@QEAA@AEBUItemUseOnEvent@@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@AEBVPlayer@@AEBVWeakLifetimeScope@4@@Z
    MCAPI
    ScriptItemUseOnAfterEvent(struct ItemUseOnEvent const&, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>, class Player const&, class Scripting::WeakLifetimeScope const&);

    // symbol:
    // ?getBlockLocation_V010@ScriptItemUseOnAfterEvent@ScriptModuleMinecraft@@QEBA?AV?$Result@VBlockPos@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<class BlockPos> getBlockLocation_V010() const;

    // symbol: ??4ScriptItemUseOnAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent&&);

    // symbol: ??4ScriptItemUseOnAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent const&);

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
