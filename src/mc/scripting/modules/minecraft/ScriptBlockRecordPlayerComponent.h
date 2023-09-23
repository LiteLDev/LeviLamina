#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockRecordPlayerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // prevent constructor by default
    ScriptBlockRecordPlayerComponent& operator=(ScriptBlockRecordPlayerComponent const&);
    ScriptBlockRecordPlayerComponent(ScriptBlockRecordPlayerComponent const&);
    ScriptBlockRecordPlayerComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ScriptBlockRecordPlayerComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptBlockRecordPlayerComponent();

    // symbol:
    // ?bind@ScriptBlockRecordPlayerComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockRecordPlayerComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockRecordPlayerComponent>
    bind();

    // symbol:
    // ?tryCreate@ScriptBlockRecordPlayerComponent@ScriptModuleMinecraft@@SA?AV?$StrongTypedObjectHandle@VScriptBlockRecordPlayerComponent@ScriptModuleMinecraft@@@Scripting@@AEAVBlockSource@@VBlockPos@@AEBVWeakLifetimeScope@4@@Z
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockRecordPlayerComponent>
    tryCreate(class BlockSource&, class BlockPos, class Scripting::WeakLifetimeScope const&);

    // symbol: ?ComponentId@ScriptBlockRecordPlayerComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?clearRecord@ScriptBlockRecordPlayerComponent@ScriptModuleMinecraft@@IEAA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> clearRecord();

    // symbol: ?isPlaying@ScriptBlockRecordPlayerComponent@ScriptModuleMinecraft@@IEAA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> isPlaying();

    // symbol:
    // ?setRecord@ScriptBlockRecordPlayerComponent@ScriptModuleMinecraft@@IEAA?AV?$Result@X$$V@Scripting@@AEBV?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VScriptItemType@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<void>
    setRecord(std::variant<std::string, class ScriptModuleMinecraft::ScriptItemType> const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
