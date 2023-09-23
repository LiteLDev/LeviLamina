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

class ScriptBlockRecordPlayerComponentV010 : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // prevent constructor by default
    ScriptBlockRecordPlayerComponentV010& operator=(ScriptBlockRecordPlayerComponentV010 const&);
    ScriptBlockRecordPlayerComponentV010(ScriptBlockRecordPlayerComponentV010 const&);
    ScriptBlockRecordPlayerComponentV010();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ScriptBlockRecordPlayerComponentV010@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptBlockRecordPlayerComponentV010();

    // symbol:
    // ?bind@ScriptBlockRecordPlayerComponentV010@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockRecordPlayerComponentV010@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockRecordPlayerComponentV010>
    bind();

    // symbol:
    // ?tryCreate@ScriptBlockRecordPlayerComponentV010@ScriptModuleMinecraft@@SA?AV?$StrongTypedObjectHandle@VScriptBlockRecordPlayerComponentV010@ScriptModuleMinecraft@@@Scripting@@AEAVBlockSource@@VBlockPos@@AEBVWeakLifetimeScope@4@@Z
    MCAPI static class Scripting::StrongTypedObjectHandle<
        class ScriptModuleMinecraft::ScriptBlockRecordPlayerComponentV010>
    tryCreate(class BlockSource&, class BlockPos, class Scripting::WeakLifetimeScope const&);

    // symbol: ?ComponentId@ScriptBlockRecordPlayerComponentV010@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?clearRecord@ScriptBlockRecordPlayerComponentV010@ScriptModuleMinecraft@@IEAA?AV?$Result@X$$V@Scripting@@XZ
    MCAPI class Scripting::Result<void> clearRecord();

    // symbol:
    // ?isPlaying@ScriptBlockRecordPlayerComponentV010@ScriptModuleMinecraft@@IEAA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> isPlaying();

    // symbol:
    // ?setRecord@ScriptBlockRecordPlayerComponentV010@ScriptModuleMinecraft@@IEAA?AV?$Result@X$$V@Scripting@@AEBVScriptItemType@2@@Z
    MCAPI class Scripting::Result<void> setRecord(class ScriptModuleMinecraft::ScriptItemType const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
