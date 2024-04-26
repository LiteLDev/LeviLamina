#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/WeakTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptInventoryComponentContainer; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptInventoryComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // prevent constructor by default
    ScriptInventoryComponent& operator=(ScriptInventoryComponent const&);
    ScriptInventoryComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptInventoryComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptInventoryComponent() = default;

    // vIndex: 1, symbol: ?_isValid@ScriptInventoryComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol: ??0ScriptInventoryComponent@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptInventoryComponent(class ScriptModuleMinecraft::ScriptInventoryComponent const&);

    // symbol:
    // ?getAdditionalSlotsPerStrength@ScriptInventoryComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getAdditionalSlotsPerStrength() const;

    // symbol: ?getCanBeSiphonedFrom@ScriptInventoryComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getCanBeSiphonedFrom() const;

    // symbol:
    // ?getContainerType@ScriptInventoryComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::string> getContainerType() const;

    // symbol: ?getInventorySize@ScriptInventoryComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getInventorySize() const;

    // symbol:
    // ?getOrCreateContainer@ScriptInventoryComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptContainerWrapper@ScriptModuleMinecraft@@@Scripting@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptContainerWrapper>>>
    getOrCreateContainer();

    // symbol:
    // ?getOrCreateContainerV010@ScriptInventoryComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$WeakTypedObjectHandle@VScriptInventoryComponentContainer@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<
        class Scripting::WeakTypedObjectHandle<class ScriptModuleMinecraft::ScriptInventoryComponentContainer>>
    getOrCreateContainerV010();

    // symbol: ?getPrivate@ScriptInventoryComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getPrivate() const;

    // symbol: ?getRestrictToOwner@ScriptInventoryComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getRestrictToOwner() const;

    // symbol:
    // ?bind@ScriptInventoryComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptInventoryComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptInventoryComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol: ?ComponentId@ScriptInventoryComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
