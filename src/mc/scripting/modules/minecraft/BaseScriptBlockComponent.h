#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptComponent.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptComponent; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class BaseScriptBlockComponent : public ::ScriptModuleMinecraft::ScriptComponent {
public:
    // prevent constructor by default
    BaseScriptBlockComponent& operator=(BaseScriptBlockComponent const&);
    BaseScriptBlockComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BaseScriptBlockComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~BaseScriptBlockComponent();

    // vIndex: 1, symbol: ?_isValid@BaseScriptBlockComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol: ??0BaseScriptBlockComponent@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI BaseScriptBlockComponent(class ScriptModuleMinecraft::BaseScriptBlockComponent const&);

    // symbol:
    // ??0BaseScriptBlockComponent@ScriptModuleMinecraft@@QEAA@AEAVBlockActor@@AEAVBlockSource@@VBlockPos@@AEBVWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI BaseScriptBlockComponent(
        class BlockActor&                         blockActor,
        class BlockSource&                        region,
        class BlockPos                            position,
        class Scripting::WeakLifetimeScope const& scope,
        std::string const&                        id
    );

    // symbol:
    // ?getBlock@BaseScriptBlockComponent@ScriptModuleMinecraft@@QEBA?AV?$StrongTypedObjectHandle@VScriptBlock@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock> getBlock() const;

    // symbol:
    // ?bind@BaseScriptBlockComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VBaseScriptBlockComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::BaseScriptBlockComponent> bind();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_tryGetOwner@BaseScriptBlockComponent@ScriptModuleMinecraft@@IEAAPEAVBlockActor@@XZ
    MCAPI class BlockActor* _tryGetOwner();

    // symbol: ?_tryGetOwner@BaseScriptBlockComponent@ScriptModuleMinecraft@@IEBAPEBVBlockActor@@XZ
    MCAPI class BlockActor const* _tryGetOwner() const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
